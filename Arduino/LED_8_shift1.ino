#define LED1    2
#define LED2    3
#define LED3    4
#define LED4    5
#define LED5    6
#define LED6    7
#define LED7    8
#define LED8    9

int A = 100;

void setup()
{
    pinMode(LED1, OUTPUT);
    pinMode(LED2, OUTPUT);
    pinMode(LED3, OUTPUT);
    pinMode(LED4, OUTPUT);
    pinMode(LED5, OUTPUT);
    pinMode(LED6, OUTPUT);
    pinMode(LED7, OUTPUT);
    pinMode(LED8, OUTPUT);
}

void loop()
{
    digitalWrite(LED1, HIGH);
    delay(A);
    digitalWrite(LED2, HIGH);
    delay(A);
    digitalWrite(LED3, HIGH);
    delay(A);
    digitalWrite(LED4, HIGH);
    delay(A);
    digitalWrite(LED5, HIGH);
    delay(A);
    digitalWrite(LED6, HIGH);
    delay(A);
    digitalWrite(LED7, HIGH);
    delay(A);
    digitalWrite(LED8, HIGH);
    delay(A);
    digitalWrite(LED1, LOW);
    delay(A);
    digitalWrite(LED2, LOW);
    delay(A);
    digitalWrite(LED3, LOW);
    delay(A);
    digitalWrite(LED4, LOW);
    delay(A);
    digitalWrite(LED5, LOW);
    delay(A);
    digitalWrite(LED6, LOW);
    delay(A);
    digitalWrite(LED7, LOW);
    delay(A);
    digitalWrite(LED8, LOW);
    delay(A);
}