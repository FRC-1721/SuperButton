/* Super button source code
 * by 1721 Tidal Force!
 */

#include <Arduino.h>
#include "USBHIDMediaKeyboard.h"

#define STAT = 30;

void setup()
{
    USBInit();
    pinMode(30, OUTPUT);
}

void loop()
{
    digitalWrite(30, HIGH);
    delay(1000);
    digitalWrite(30, LOW);
    delay(1000);

    Consumer_press(MEDIA_PLAY_PAUSE);
}