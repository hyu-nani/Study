/**
 * PID 기반 서보 테스트
*/

#define servo 9
#define poten A0

double Result = 155;
float oneTimeDelay = 10; // [mS]

double pre_P_error = 0;
double P_error, I_error, D_error;
double PID(float Goals, 
    float Kp = 0.01, 
    float Ki = 0.06, 
    float Kd = 0.01)
{
    P_error = Goals - Result; // 목표값과 실제값 차이
    I_error += ( P_error );
    D_error = (P_error - pre_P_error );
    pre_P_error = P_error;
    return ( P_error * Kp ) + ( I_error * Ki ) + ( D_error * Kd );
}

void setup()
{
    pinMode(poten,INPUT);
    pinMode(servo,OUTPUT);
    Serial.begin(115200);
}

float Goals;
void loop()
{
    int val = map(analogRead(poten), 0, 1024, 55, 255);
    Serial.print(val);
    Serial.print(" ");
    Serial.println(int(Result));
    Goals = val;
    Result = PID(Goals);
    delay(oneTimeDelay);
    analogWrite(servo,int(Result));

    //analogWrite(servo,val);
}