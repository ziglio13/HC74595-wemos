#include <esp_74595.h>

//Number of shift register, data, clock, latch
esp_74595 sr(1, D2, D3, D4);

void setup() {

}

void loop() {
 //0 a 7  
 sr.set(0, HIGH);
 sr.set(1, LOW);
}
