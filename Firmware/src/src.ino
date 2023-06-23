/* Super button source code
 * by 1721 Tidal Force!
 */

#include "CH_HID_Arduino.h"

#define CH_RESET_PIN 6

void setup()
{
    Serial.begin(57600);
    ch_hid.begin(&Serial, CH_RESET_PIN); // Both args not needed, will default to Serial and no CH55x reset

    Keyboard.print("Hallo");

    delay(1000);

    Keyboard.press(KEY_LEFT_ARROW);
    Keyboard.release(KEY_LEFT_ARROW);
    // Keyboard.releaseAll();

    // Mouse.click(MOUSE_LEFT); // Click Mouse button
    // Mouse.move(0, -40); // Move mouse X Y
    // Mouse.move(0, 0, 3); // Mouse wheel plus 3
    // Mouse.move(0, 0, -3); // Mouse wheel minus 3

    // ch_hid.reset();
    // ch_hid.bootloader();
}

void loop()
{
    // nothing to do here.
}