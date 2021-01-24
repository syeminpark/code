#ifndef alarm_h
#define alarm_h

void alarm(){
display.clearDisplay();
display.setTextSize(1);
display.setTextColor(BLACK,WHITE);
display.setCursor(45, 0);
display.println(" ALARM ");
}

#endif
