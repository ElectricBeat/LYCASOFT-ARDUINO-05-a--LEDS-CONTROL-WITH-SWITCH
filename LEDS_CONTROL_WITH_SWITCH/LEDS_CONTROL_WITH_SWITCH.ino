int LED_1=12;
int LED_2=11;

int SW_1=10;
int SW_2=9;
int SW_3=8;

boolean state = true;

void setup()
{
  pinMode(LED_1,OUTPUT);
  pinMode(LED_2,OUTPUT);
  
  pinMode(SW_1,INPUT);
  pinMode(SW_2,INPUT);
  pinMode(SW_3,INPUT);
}
void loop()
{
  if(SW_1 != 0 )
  {
    digitalWrite(LED_1 , HIGH);
    delay(120);
  }
  else
  {
    digitalWrite(LED_1 , LOW);
    delay(120);
  }  
    
  if(SW_2 != 0 )
  {
    digitalWrite(LED_2 , HIGH);
    delay(120);
  }
  else
  {
    digitalWrite(LED_2 , LOW);
    delay(120);
  }  
    
  if(SW_3 != 0 )
  {
    state=!state; 
    digitalWrite(LED_1 ,state);
    digitalWrite(LED_2 ,state);
    delay(120);
  }
  else
  {
    digitalWrite(LED_1 , LOW);
    digitalWrite(LED_2 , LOW);
    delay(120);
  }
}
