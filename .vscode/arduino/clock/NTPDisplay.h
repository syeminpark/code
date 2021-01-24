#ifndef NTPDisplay_h
#define NTPDisplay_h

void NTPDisplay(){
  timeClient.update();
display.clearDisplay();
//Serial.println(timeClient.getFormattedTime());

display.setTextSize(2); // Draw 2X-scale text
display.setTextColor(WHITE);
display.setCursor(20, 0);

int hh = timeClient.getHours();
int mm = timeClient.getMinutes();
int ss = timeClient.getSeconds();

display.print(hh);
display.print(":");
display.print(mm);
display.print(":");
if(ss<10){
display.print("0");
display.println(ss);
}
else{
  display.println(ss);
}

int day = timeClient.getDay();
display.setCursor(30, 17);
display.println(arr_days[day]);
}

#endif
