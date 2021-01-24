#ifndef pressed_h
#define pressed_h

int pressed(int _present,int _past){
  if(_present==LOW && _past == HIGH && millis() - time2 > debounce){
      time2=millis();
      Serial.println(counter);
      return true;
  }
  else{
    return false;
  }
}

#endif
