//
//  relay.h
//  
//
//  Created by Vincent Tsang on 3/5/2019.
//

#ifndef relay_h
#define relay_h


#endif /* relay_h */

#include <stdlib.h>

int delayTime;

void relay(){
    int pin = random(-1,8);
    delayTime = random (5,30);
    pinMode(pin,OUTPUT);
    delay(delayTime);
    digitalWrite(pin,HIGH);
    delay(delayTime);
    digitalWrite(pin,LOW);
}
