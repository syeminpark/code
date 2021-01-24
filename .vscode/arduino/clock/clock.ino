#include "lib.h"

void setup(){
pinMode(UP,INPUT);
pinMode(DOWN,INPUT);
pinMode(ENTER,INPUT);
pinMode(EXIT,INPUT);

Serial.begin(115200);
WiFi.begin(ssid, password);
while ( WiFi.status() != WL_CONNECTED ){
delay ( 500 );
Serial.print ( "." );
}

if(!display.begin(SSD1306_SWITCHCAPVCC,0x3C)){
Serial.println(F("SSD1306 allocation failed"));
for(;;); // Don't proceed, loop forever
}

welcome();
//timeClient.begin();
}

void loop(){
  
UPcurrent =digitalRead(UP);
DOWNcurrent =digitalRead(DOWN);
ENTERcurrent =digitalRead(ENTER);
EXITcurrent =digitalRead(EXIT);

if(pressed(UPcurrent,UPprevious)&& state==0){
     counter-=1; 
    if(counter<0){
      counter=2;
 }
}
else if(pressed(DOWNcurrent,DOWNprevious)&& state==0){
  counter+=1; 
    if(counter>2){
      counter=0;
    }
}
else if(pressed(ENTERcurrent,ENTERprevious)){
  if (counter==0){
      state=1;
    timeSetting();
  }
  else if (counter==1){
     state=1;
    Version();
  }
  else if (counter ==2){
    state=1;
    alarm();
  }
}
else if(pressed(EXITcurrent,EXITprevious)){
   state=0;
}

UPprevious=UPcurrent;
DOWNprevious=DOWNcurrent;
ENTERprevious=ENTERcurrent;
EXITprevious=EXITcurrent;

if (state==0){
  mainMenu();
}

display.display();
}
