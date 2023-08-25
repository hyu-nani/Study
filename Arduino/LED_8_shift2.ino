int pin[8] = {2, 3, 4, 5, 6, 7, 8, 9}

int A = 100;

void setup()
{
    for (int i = 0; i < 8; i++)
    {
        pinMode(pin[i], OUTPUT);
    }
}

void loop()
{
    for (int i = 0; i < 8; i++)
    {
        digitalWrite(pin[i], HIGH);
    }
    for (int i = 0; i < 8; i++)
    {
        digitalWrite(pin[i], LOW);
    }
}