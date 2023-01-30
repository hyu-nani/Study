#define LED 13

double preTime = millis(), nowTime = millis(), dt;

bool UD = false;

double Result = 0.0;

double pre_P_error = 0;
double P_error=0, I_error=0, D_error=0;
double PID(double Goals, double Kp, double Ki, double Kd)
{
    nowTime = millis();
    dt = nowTime - preTime; //[ms]
    preTime = nowTime;
    
    P_error = Goals - Result; // 목표값과 실제값 차이
    I_error += ( P_error * dt );
    D_error = (P_error - pre_P_error ) / dt;
    pre_P_error = P_error;
    return ( P_error * Kp ) + ( I_error * Ki ) + ( D_error * Kd );
}
void printSerial()
{
    if(Result < 1000 && Result > -1000)
    {
        Serial.print(dt);
        Serial.print("\t");
        Serial.println(Result);
    }
}

void setup()
{
    pinMode(LED,OUTPUT);
    Serial.begin(115200);
    Serial.println("start");
}
void loop()
{
    if(Result < 1000 && Result > -1000)
    {
        if(UD)
        Result = PID(0.0, 0.05, 0.005, 0.01);
        else
        Result = PID(255.0, 0.05, 0.005, 0.01);
    }
    else
    {
        Result = 0;
    }
    if(Result >= 254)
    UD = true;
    if(Result <= 1)
    UD = false;

    printSerial();
    digitalWrite(LED, HIGH);
    delay(10);
    digitalWrite(LED, LOW);

}