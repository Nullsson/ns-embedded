bool even = true;
int index = 1;

void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT); 
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(1, OUTPUT);
}

void loop() 
{
  // put your main code here, to run repeatedly
  if (1)
  {
    digitalWrite(13, HIGH);
    digitalWrite(12, HIGH);
    digitalWrite(11, HIGH);
    digitalWrite(10, HIGH);
    digitalWrite(9, HIGH);
    digitalWrite(8, HIGH);
    digitalWrite(7, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(2, HIGH);
    digitalWrite(1, HIGH);
  }
  else if(0)
  {
    for (int i = 1; i <= 13; ++i)
    {
      if (even)
      {
        if (i % 2 == 0)
        {
          digitalWrite(i, HIGH);
        }
        else
        {
          digitalWrite(i, LOW);
        }
      }
      else
      {
        if (i % 2 == 0)
        {
          digitalWrite(i, LOW);
        }
        else
        {
          digitalWrite(i, HIGH);
        }
      }
    }
    delay(1000);

    if (even)
    {
      even = false;
    }else {
      even = true;
    }
  }
  else
  {
    for (int i = 1; i <= 13; ++i)
    {
      if (index == i)
      {
          digitalWrite(i, HIGH);
      }
      else
      {
          digitalWrite(i, LOW);  
      }
    }
    delay(50);

    index++;
    if (index > 13)
    {
      index = 1;
    }
  }
}
