const int red = 9;
const int green = 10;
const int blue = 11;
 int val=0;

void setup() 
{ 

Serial.begin(9600); 

   pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);

} 
void loop(){
val=Serial.read();

if (val=='a'){

ran();

}
if (val=='b'){
    analogWrite(red,0);
     analogWrite(green,222);
      analogWrite(blue,100);
}

if (val=='c'){
  
  analogWrite(red,222);
     analogWrite(green,0);
      analogWrite(blue,100);
}

if (val=='d'){
   analogWrite(red,222);
     analogWrite(green,165);
      analogWrite(blue,0);
}


  
}
void ran(){
  while (1){
     analogWrite(red,0);
     analogWrite(green,222);
      analogWrite(blue,100);
      delay(60);
      analogWrite(red,222);
     analogWrite(green,0);
      analogWrite(blue,100);
       delay(100);
        analogWrite(red,222);
     analogWrite(green,165);
      analogWrite(blue,0);
       delay(50);
  analogWrite(red,0);
     analogWrite(green,222);
      analogWrite(blue,0);
      delay(60);
      analogWrite(red,0);
     analogWrite(green,190);
      analogWrite(blue,100);
       delay(100);
        analogWrite(red,222);
     analogWrite(green,0);
      analogWrite(blue,160);
       delay(50);
            analogWrite(red,0);
     analogWrite(green,222);
      analogWrite(blue,100);
      delay(60);
      analogWrite(red,222);
     analogWrite(green,55);
      analogWrite(blue,120);
       delay(100);
        analogWrite(red,222);
     analogWrite(green,165);
      analogWrite(blue,0);
       delay(50);
  analogWrite(red,0);
     analogWrite(green,222);
      analogWrite(blue,0);
      delay(60);
      analogWrite(red,222);
     analogWrite(green,19);
      analogWrite(blue,10);
       delay(100);
        analogWrite(red,222);
     analogWrite(green,186);
      analogWrite(blue,195);
     
 delay(100);
   
   }
}

