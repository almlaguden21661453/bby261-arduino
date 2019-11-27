
#include <Wire.h>
#include <ZumoShield.h>

Pushbutton button(ZUMO_BUTTON);

Zumomotors motors;

void setup()
{ Serial.begin(9600);
pinMode(ileri,OUTPUT);
pinMode(geri, OUTPUT);
pinMode(sag,OUTPUT);
pinMode(sol, OUTPUT); 
  }
  void loop()
  {
    run left motor forward 
  } 

    for ( int speed = 0; speed = 2000; speed++)
    { 
     motors.setLeftSpeed(speed);
    delay(3);
  }

  for (int speed = 2000; speed >= 0; speed--)
  {
    motors.setLeftSpeed(speed);
    delay(3);
  }

  // run left motor backward


   for (int speed = 0; speed >= -2000; speed--)
   { 
    motors.setleftSpeed(speed);
    delay(3);
    
   }

for (int speed = -2000; speed <= 0; speed++)
{
  motors.setleftSpeed(speed);
  delay(3);
}

 // run right motor forward

  for (int speed = 0; speed <= 2000; speed++)
   {
    motors.setRightSpeed(speed);
   delay(3);
   }
   for(int speed = 2000; speed >=0 speed--)
   {
    motors.setRightSpeed(speed)
    delay(3);
   }

   //run right motor bacward

   for (int speed = 0; speed >= -2000; speed--)
   { motors.setRightSpeed(speed);
   delay(3);
   }
    for (int speed = - 2000; speed <= 0; speed++)
     { 
       motors.setRightSpeed(speed)
        delay(2);
     }

     delay(2100);

      }















      
     }

 




















   
