int VERMELHO = 2;
int AMARELO = 3;
int VERDE = 4;
int VERDPED = 5;
int VERMPED = 6;
int botao = 7;                                                 
int tempoatravessar=5000;
unsigned long variacaotempo;

void setup()
{
  pinMode(VERMELHO,OUTPUT);
  pinMode(AMARELO,OUTPUT);
  pinMode(VERDE,OUTPUT);
  pinMode(VERDPED,OUTPUT);
  pinMode(VERMPED,OUTPUT);
  pinMode(botao, INPUT);
  digitalWrite(VERDE,HIGH);
  digitalWrite(VERMPED,HIGH); 
  
  }

  void loop ()   
  {
   int state = digitalRead(botao);
   if (state== HIGH && (millis() - variacaotempo) > 5000)
   {
    mudarled();
    } 
    }
    void mudarled()
    {
       digitalWrite(VERDE,LOW);
       digitalWrite(AMARELO,HIGH);
       delay(2000);
       digitalWrite(AMARELO,LOW);
       digitalWrite(VERMELHO,HIGH);
       delay(1000);

       digitalWrite(VERMPED,LOW);
       digitalWrite(VERDPED,HIGH);
       delay(tempoatravessar);

       for (int x=0; x<10; x=x+1)
       {
        digitalWrite(VERDPED,HIGH);
        delay(150);
        digitalWrite(VERDPED,LOW);
        delay(150);
        
        }
       digitalWrite(VERMPED,HIGH);
       delay(500);
       digitalWrite(AMARELO,HIGH);
       digitalWrite(VERMELHO,LOW);
       delay(1000);
       digitalWrite(VERDE,HIGH);
       digitalWrite(AMARELO,LOW);
       variacaotempo = millis();
      
      }

    
