/**
 * PID 기반 서보 테스트
*/

#define servo 9

float Result = 150; //초기각도
float oneTimeDelay = 10; // [mS]

float pre_P_error = 0;
float Result_PID ;

float Kp = 0.1; 
float Ki = 0.4; 
float Kd = 0.6;

float P_error, I_error, D_error;
float PID(float Goals, 
    float Arg = 50)
{
    P_error = Goals - Result_PID; // 목표값과 실제값 차이
    I_error += P_error;
    D_error = pre_P_error - P_error;
    float val = ( P_error * Kp ) + ( I_error * Ki ) + ( D_error * Kd );
    
    Result_PID = val;
    float ResultVal = (val + Result *(Arg-1))/Arg;
    Serial.print(val);
    Serial.print("\t");
    Serial.print(ResultVal);
    Serial.print("\t");
    Serial.print(int(Kp*100));
    Serial.print("\t");
    Serial.print(int(Ki*100));
    Serial.print("\t");
    Serial.println(int(Kd*100));
    return ResultVal;
}

void setup()
{
    
    pinMode(servo,OUTPUT);
    Serial.begin(115200);
    
}

float Goals;
void loop()
{
    if(Serial.available())
    {
        String text = "";
        while(Serial.available()==0){delay(10);}
        text = Serial.readString();
        Kp = text.toFloat();
        while(Serial.available()==0){delay(10);}
        text = Serial.readString();
        Ki = text.toFloat();
        while(Serial.available()==0){delay(10);}
        text = Serial.readString();
        Kd = text.toFloat();
    }
    Goals = 150;
    while(!((Result > Goals - 1) && (Result < Goals + 1)))
    {
        analogWrite(servo,Result);
        Result = PID(Goals);
        delay(oneTimeDelay);
    }
    Goals = 250;
    while(!((Result > Goals - 1) && (Result < Goals + 1)))
    {
        analogWrite(servo,Result);
        Result = PID(Goals);
        delay(oneTimeDelay);
    }
}