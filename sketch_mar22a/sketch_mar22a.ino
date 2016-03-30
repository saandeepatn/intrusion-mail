int pirPin = 7;
int tonePin = 4;    //Tone - Red Jumper
int minSecsBetweenEmails = 10; // 1 min
long lastSend = -minSecsBetweenEmails * 1000l;
void setup()
{
  pinMode(pirPin, INPUT);
  Serial.begin(9600);
  }
void loop()
{  
  long now = millis();
if (digitalRead(pirPin) == HIGH)
{ 
  tone(tonePin,5000, 200);
  if (now > (lastSend + minSecsBetweenEmails * 1000l))
  {  
    Serial.println("MOVEMENT");
    lastSend = now; 
    } 
    else 
    {   
    Serial.println("Too soon");
    }
  }
  delay(500);
  }

