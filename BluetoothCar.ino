char t;
 
void setup() {
pinMode(6,OUTPUT);   //left motors  forward
pinMode(7,OUTPUT);   //left motors reverse
pinMode(4,OUTPUT);   //right  motors forward
pinMode(5,OUTPUT);   //right motors reverse
pinMode(9,OUTPUT);   //Led
Serial.begin(9600);
 
}
//void loop() {
//  if (Serial.available()) {
//    String inputString = Serial.readString();
//    Serial.println(inputString);
//
//    if (inputString == "F") {
//      digitalWrite(13, HIGH);
//      digitalWrite(11, HIGH);
//    } else if (inputString == "B") {
//      digitalWrite(12, HIGH);
//      digitalWrite(10, HIGH);
//    } else if (inputString == "L") {
//      digitalWrite(11, HIGH);
//    } else if (inputString == "R") {
//      digitalWrite(13, HIGH);
//    } else if (inputString == "W") {
//      digitalWrite(9, HIGH);
//    } else if (inputString == "w") {
//      digitalWrite(9, LOW);
//    } else if (inputString == "S") {
//      digitalWrite(13, LOW);
//      digitalWrite(12, LOW);
//      digitalWrite(11, LOW);
//      digitalWrite(10, LOW);
//    }
//  }
//}

 
void loop() {
if(Serial.available()){
  t = Serial.read();
  Serial.println(t);
}
 
if(t == 'F'){            //move  forward(all motors rotate in forward direction)
  digitalWrite(6,HIGH);
  digitalWrite(4,HIGH);
}
 
else if(t == 'B'){      //move reverse (all  motors rotate in reverse direction)
  digitalWrite(7,HIGH);
  digitalWrite(5,HIGH);
}
  
else if(t == 'L'){      //turn right (left side motors rotate in forward direction,  right side motors doesn't rotate)
  digitalWrite(4,HIGH);
}
 
else  if(t == 'R'){      //turn left (right side motors rotate in forward direction, left  side motors doesn't rotate)
  digitalWrite(6,HIGH);
}

else if(t ==  'W'){    //turn led on or off)
  digitalWrite(9,HIGH);
}
else if(t == 'w'){
  digitalWrite(9,LOW);
}
 
else if(t == 'S'){      //STOP (all motors stop)
  digitalWrite(6,LOW);
  digitalWrite(7,LOW);
  digitalWrite(4,LOW);
  digitalWrite(5,LOW);
}
//delay(100);
}