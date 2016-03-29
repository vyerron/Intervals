int FirstLedNumber = 13; 
int SecondLedNumber = 12; 
int ThirdLedNumber = 11; 
int FourthLedNumber = 10; 
int FifthLedNumber = 9; 
int FirstLedInterval = 1000; 
int SecondLedInterval = 500; 
int ThirdLedInterval = 333; 
int FourthLedInterval = 250; 
int FifthLedInterval = 200; 
int FirstLedState = LOW; 
int SecondLedState = LOW; 
int ThirdLedState = LOW; 
int FourthLedState = LOW; 
int FifthLedState = LOW; 
unsigned long previousMillis1 = 0; 
unsigned long previousMillis2 = 0; 
unsigned long previousMillis3 = 0; 
unsigned long previousMillis4 = 0; 
unsigned long previousMillis5 = 0; 

void setup() 
{ 
  pinMode(FirstLedNumber, OUTPUT); 
  pinMode(SecondLedState, OUTPUT); 
  pinMode(ThirdLedState, OUTPUT); 
  pinMode(FourthLedState, OUTPUT); 
  pinMode(FifthLedState, OUTPUT); 
} 

void checkLed(unsigned long time, int led, int interval, int &state, unsigned long &previousMillis) 
  { 
  if(time - previousMillis > interval) 
  {     
    previousMillis = time; 
    state = !state; 
    digitalWrite(led, state); 
  } 
}

void loop() 
{ 
  unsigned long time = millis(); 
  checkLed(time,FirstLedNumber,FirstLedInterval,FirstLedState, previousMillis1); 
  checkLed(time,SecondLedNumber,SecondLedInterval,SecondLedState, previousMillis2); 
  checkLed(time,ThirdLedNumber,ThirdLedInterval,ThirdLedState, previousMillis3); 
  checkLed(time,FourthLedNumber,FourthLedInterval,FourthLedState, previousMillis4); 
  checkLed(time,FifthLedNumber,FifthLedInterval,FifthLedState, previousMillis5); 
}
