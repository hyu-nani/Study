/**
 * PID 구성 식
 * plotter 사용 바람
*/
float Result = 0;
float oneTimeDelay = 20; // [mS]

float pre_P_error = 0;
float P_error, I_error, D_error;
float PID(float Goals, float Kp, float Ki, float Kd)
{
    P_error = Goals - Result; // 목표값과 실제값 차이
    I_error += P_error;
    D_error = pre_P_error - P_error;
    return ( P_error * Kp ) + ( I_error * Ki ) + ( D_error * Kd );
}

void setup()
{
    Serial.begin(115200);
}

float Goals;
void loop()
{
    if(Serial.available()){
        String text = Serial.readString();
        Goals = text.toFloat();
    }
    Result = PID(Goals,0.1,0.1,0.01);
    Serial.println(Result);
    delay(oneTimeDelay);
}