/**
 * PID 기반 서보 테스트
*/

#define servo 9

#define KpButton 2
#define KiButton 3
#define KdButton 4
#define potential A0

#define LED 5

float Result = 150; //초기각도
float oneTimeDelay = 10; // [mS]

float pre_P_error = 0;
float Result_PID ;

float Kp = 0.1; 
float Ki = 0.4; 
float Kd = 0.6;

float P_error, I_error, D_error;
float PID(float Goals, 
    float Arg = 10)
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
    
    pinMode(servo, OUTPUT);
    Serial.begin(115200);
    pinMode(KpButton, INPUT);
    pinMode(KiButton, INPUT);
    pinMode(KdButton, INPUT);
    pinMode(potential, INPUT);
    pinMode(LED, OUTPUT);
}
int change = 0; //1:P 2:I 3:D
float Goals;
void loop()
{
    if(digitalRead(KpButton))
    change = 1;
    else if(digitalRead(KiButton))
    change = 2;
    else if(digitalRead(KdButton))
    change = 3;
    
    if(change != 0)
    {
        digitalWrite(LED, HIGH);

        float nowVal = analogRead(potential) / 1000.0;
        delay(1000);
        float preVal = analogRead(potential)/1000.0;
        switch(change)
        {
            case 1:
                Kp += preVal - nowVal;
                break;
            case 2:
                Ki += preVal - nowVal;
                break;
            case 3:
                Kd += preVal - nowVal;
                break;
        }
        preVal = nowVal;
        change = 0;
        digitalWrite(LED, LOW);
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