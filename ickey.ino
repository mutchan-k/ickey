#include <M5Stack.h>

/* After M5Core is started or reset
the program in the setUp () function will be run, and this part will only be run
once. */
void setup() {
    M5.begin();        // Init M5Core. 
    M5.Power.begin();  // Init Power module.
    M5.Lcd.fillScreen(WHITE);  // Set the screen background.
}  // Construct a triangle with (x1,y1) (x2,y2) (x3,y3) as its vertices

/* After the program in setup() runs, it runs the program in loop()
The loop() function is an infinite loop in which the program runs repeatedly*/

void loop() {
    M5.Lcd.fillTriangle(random(M5.Lcd.width() - 1), random(M5.Lcd.height() - 1),
                        random(M5.Lcd.width() - 1), random(M5.Lcd.height() - 1),
                        random(M5.Lcd.width() - 1), random(M5.Lcd.height() - 1),
                        random(0xfffe));

    M5.update();  // Read the press state of the key.
}
