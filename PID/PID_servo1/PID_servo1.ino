/**
 * PID 기반 서보 테스트
*/

#define servo 9

float Result = 155;
float oneTimeDelay = 40; // [mS]

float pre_P_error = 0;
float P_error, I_error, D_error;
float PID(float Goals, 
    float Kp = 0.001, 
    float Ki = 0.06, 
    float Kd = 0.01)
{
    P_error = Goals - Result; // 목표값과 실제값 차이
    I_error += P_error;
    D_error = pre_P_error - P_error;
    return ( P_error * Kp ) + ( I_error * Ki ) + ( D_error * Kd );
}

void setup()
{
    pinMode(servo,OUTPUT);
    Serial.begin(115200);
}

float Goals;
void loop()
{
    /*
    if(Serial.available()){
        String text = Serial.readString();
        Goals = text.toFloat();
        Goals = (Goals > 255)? 255 : Goals;
        Goals = (Goals < 0)? 155 : Goals;
    }
    */
    Goals = 255;
    while(!((Result > Goals - 1) && (Result < Goals + 1)))
    {
        analogWrite(servo,Result);
        Result = PID(Goals);
        Serial.println(Result);
        delay(oneTimeDelay);
    }
    Goals = 55;
    while(!((Result > Goals - 1) && (Result < Goals + 1)))
    {
        analogWrite(servo,Result);
        Result = PID(Goals);
        Serial.println(Result);
        delay(oneTimeDelay);
    }
}