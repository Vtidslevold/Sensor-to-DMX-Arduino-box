#include <DmxSimple.h>

//Digitale inputs:
//digital in1
int const dInp1 = 2;
int inp1StateCurrent = LOW;
int inp1StatePrevious = LOW;
//digital in2
int const dInp2 = 3;
int inp2StateCurrent = LOW;
int inp2StatePrevious = LOW;
//digital in3
int const dInp3 = 4;
int inp3StateCurrent = LOW;
int inp3StatePrevious = LOW;
//digital in4
int const dInp4 = 5;
int inp4StateCurrent = LOW;
int inp4StatePrevious = LOW;
//digital in5
int const dInp5 = 6;
int inp5StateCurrent = LOW;
int inp5StatePrevious = LOW;
//digital in6
int const dInp6 = 7;
int inp6StateCurrent = LOW;
int inp6StatePrevious = LOW;
//digital in7
int const dInp7 = 8;
int inp7StateCurrent = LOW;
int inp7StatePrevious = LOW;
//digital in8
int const dInp8 = 9;
int inp8StateCurrent = LOW;
int inp8StatePrevious = LOW;
//digital in9
int const dInp9 = 10;
int inp9StateCurrent = LOW;
int inp9StatePrevious = LOW;
//digital in10
int const dInp10 = 12;
int inp10StateCurrent = LOW;
int inp10StatePrevious = LOW;

//Analoge Inputs:
//Analog Inp1
int const aPin1 = A0;
int aInp1;
int inp1Dmx;
//Analog Inp2
int const aPin2 = A1;
int aInp2;
int inp2Dmx;
//Analog Inp3
int const aPin3 = A2;
int aInp3;
int inp3Dmx;
//Analog Inp4
int const aPin4 = A3;
int aInp4;
int inp4Dmx;
//analog Inp5
int const aPin5 = A4;
int aInp5;
int inp5Dmx;
//analog Inp6
int const aPin6 = A5;
int aInp6;
int inp6Dmx;

void setup() {

  DmxSimple.usePin(11);
  DmxSimple.maxChannel(16);

  Serial.begin(9600);
}

void loop() {

  //Digital Sensor input med DMX ut
  //Input 1 til DMX Ch1
  inp1StatePrevious = inp1StateCurrent;
  inp1StateCurrent = digitalRead(dInp1);

  if (inp1StatePrevious == LOW && inp1StateCurrent == HIGH) {

    DmxSimple.write(1, 255);
  } else if (inp1StatePrevious == HIGH && inp1StateCurrent == LOW) {
    DmxSimple.write(1, 0);
  }
  //Input 2 til DMX Ch2
  inp2StatePrevious = inp2StateCurrent;
  inp2StateCurrent = digitalRead(dInp2);

  if (inp2StatePrevious == LOW && inp2StateCurrent == HIGH) {

    DmxSimple.write(2, 255);
  } else if (inp2StatePrevious == HIGH && inp2StateCurrent == LOW) {
    DmxSimple.write(2, 0);
  }
  //Input 3 til DMX ch3
  inp3StatePrevious = inp3StateCurrent;
  inp3StateCurrent = digitalRead(dInp3);

  if (inp3StatePrevious == LOW && inp3StateCurrent == HIGH) {

    DmxSimple.write(3, 255);
  } else if (inp3StatePrevious == HIGH && inp3StateCurrent == LOW) {
    DmxSimple.write(3, 0);
  }
  //input 4 til DMX Ch4
  inp4StatePrevious = inp4StateCurrent;
  inp4StateCurrent = digitalRead(dInp4);

  if (inp4StatePrevious == LOW && inp4StateCurrent == HIGH) {

    DmxSimple.write(4, 255);
  } else if (inp4StatePrevious == HIGH && inp4StateCurrent == LOW) {
    DmxSimple.write(4, 0);
  }
  //input 5 til DMX Ch5
  inp5StatePrevious = inp5StateCurrent;
  inp5StateCurrent = digitalRead(dInp5);

  if (inp5StatePrevious == LOW && inp5StateCurrent == HIGH) {

    DmxSimple.write(5, 255);
  } else if (inp5StatePrevious == HIGH && inp5StateCurrent == LOW) {
    DmxSimple.write(5, 0);
  }
  //input 6 til DMX Ch6
  inp6StatePrevious = inp6StateCurrent;
  inp6StateCurrent = digitalRead(dInp6);

  if (inp6StatePrevious == LOW && inp6StateCurrent == HIGH) {

    DmxSimple.write(6, 255);
  } else if (inp6StatePrevious == HIGH && inp6StateCurrent == LOW) {
    DmxSimple.write(6, 0);
  }

  //input 7 til DMX Ch7
  inp7StatePrevious = inp7StateCurrent;
  inp7StateCurrent = digitalRead(dInp7);

  if (inp7StatePrevious == LOW && inp7StateCurrent == HIGH) {

    DmxSimple.write(7, 255);
  } else if (inp7StatePrevious == HIGH && inp7StateCurrent == LOW) {
    DmxSimple.write(7, 0);
  }

  //input 8 til DMX Ch8
  inp8StatePrevious = inp8StateCurrent;
  inp8StateCurrent = digitalRead(dInp8);

  if (inp8StatePrevious == LOW && inp8StateCurrent == HIGH) {

    DmxSimple.write(8, 255);
  } else if (inp8StatePrevious == HIGH && inp8StateCurrent == LOW) {
    DmxSimple.write(8, 0);
  }

  //input 9 til DMX Ch9
  inp9StatePrevious = inp9StateCurrent;
  inp9StateCurrent = digitalRead(dInp9);

  if (inp9StatePrevious == LOW && inp9StateCurrent == HIGH) {

    DmxSimple.write(9, 255);
  } else if (inp9StatePrevious == HIGH && inp9StateCurrent == LOW) {
    DmxSimple.write(9, 0);
  }

  //input 10 til DMX Ch10
  inp10StatePrevious = inp10StateCurrent;
  inp10StateCurrent = digitalRead(dInp10);

  if (inp10StatePrevious == LOW && inp10StateCurrent == HIGH) {

    DmxSimple.write(10, 255);
  } else if (inp10StatePrevious == HIGH && inp10StateCurrent == LOW) {
    DmxSimple.write(10, 0);
  }




  //Analoge variable inputs til DMX
  // pinner = aPinx
  // integer med verdi = aInpx

  //Analog input 1 til DMX Ch11
  aInp1 = analogRead(aPin1);
  inp1Dmx = map(aInp1, 0, 1023, 0, 255);
  DmxSimple.write(11, inp1Dmx);

  //Analog input 2 til DMX Ch12
  aInp2 = analogRead(aPin2);
  inp2Dmx = map(aInp2, 0, 1023, 0, 255);
  DmxSimple.write(12, inp2Dmx);

  //Analog input 3 til DMX Ch13
  aInp3 = analogRead(aPin3);
  inp3Dmx = map(aInp3, 0, 1023, 0, 255);
  DmxSimple.write(13, inp3Dmx);

  //Analog input 4 til DMX Ch14
  aInp4 = analogRead(aPin4);
  inp4Dmx = map(aInp4, 0, 1023, 0, 255);
  DmxSimple.write(14, inp4Dmx);

  //Analog input 5 til DMX Ch15
  aInp5 = analogRead(aPin5);
  inp5Dmx = map(aInp5, 0, 1023, 0, 255);
  DmxSimple.write(15, inp5Dmx);

  //Analog input 6 til DMX Ch16
  aInp6 = analogRead(aPin6);
  inp6Dmx = map(aInp6, 0, 1023, 0, 255);
  DmxSimple.write(16, inp6Dmx);


}
