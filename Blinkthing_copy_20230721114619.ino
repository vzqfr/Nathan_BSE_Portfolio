/// @file    Blink.ino
/// @brief   Blink the first LED of an LED strip
/// @example Blink.ino

#include <FastLED.h>
#include <ezButton.h>

// How many leds in your strip?
#define NUM_LEDS 7


// For led chips like WS2812, which have a data line, ground, and power, you just
// need to define DATA_PIN.  For led chipsets that are SPI based (four wires - data, clock,
// ground, and power), like the LPD8806 define both DATA_PIN and CLOCK_PIN
// Clock pin only needed for SPI based chipsets when not using hardware SPI
#define DATA_PIN 9
#define CLOCK_PIN 13
ezButton button(8);
// Define the array of leds
CRGB leds[NUM_LEDS];
int mode = 0;
int buttonTime = 0;

void setup() {
  button.setDebounceTime(50);
  // Uncomment/edit one of the following lines for your leds arrangement.
  // ## Clockless types ##
  FastLED.addLeds<NEOPIXEL, DATA_PIN>(leds, NUM_LEDS);  // GRB ordering is assumed
                                                        // FastLED.addLeds<SM16703, DATA_PIN, RGB>(leds, NUM_LEDS);
                                                        // FastLED.addLeds<TM1829, DATA_PIN, RGB>(leds, NUM_LEDS);
                                                        // FastLED.addLeds<TM1812, DATA_PIN, RGB>(leds, NUM_LEDS);
                                                        // FastLED.addLeds<TM1809, DATA_PIN, RGB>(leds, NUM_LEDS);
                                                        // FastLED.addLeds<TM1804, DATA_PIN, RGB>(leds, NUM_LEDS);
                                                        // FastLED.addLeds<TM1803, DATA_PIN, RGB>(leds, NUM_LEDS);
                                                        // FastLED.addLeds<UCS1903, DATA_PIN, RGB>(leds, NUM_LEDS);
                                                        // FastLED.addLeds<UCS1903B, DATA_PIN, RGB>(leds, NUM_LEDS);
                                                        // FastLED.addLeds<UCS1904, DATA_PIN, RGB>(leds, NUM_LEDS);
                                                        // FastLED.addLeds<UCS2903, DATA_PIN, RGB>(leds, NUM_LEDS);
                                                        // FastLED.addLeds<WS2812, DATA_PIN, RGB>(leds, NUM_LEDS);  // GRB ordering is typical
                                                        // FastLED.addLeds<WS2852, DATA_PIN, RGB>(leds, NUM_LEDS);  // GRB ordering is typical
                                                        // FastLED.addLeds<WS2812B, DATA_PIN, RGB>(leds, NUM_LEDS);  // GRB ordering is typical
                                                        // FastLED.addLeds<GS1903, DATA_PIN, RGB>(leds, NUM_LEDS);
                                                        // FastLED.addLeds<SK6812, DATA_PIN, RGB>(leds, NUM_LEDS);  // GRB ordering is typical
                                                        // FastLED.addLeds<SK6822, DATA_PIN, RGB>(leds, NUM_LEDS);
                                                        // FastLED.addLeds<APA106, DATA_PIN, RGB>(leds, NUM_LEDS);
                                                        // FastLED.addLeds<PL9823, DATA_PIN, RGB>(leds, NUM_LEDS);
                                                        // FastLED.addLeds<SK6822, DATA_PIN, RGB>(leds, NUM_LEDS);
                                                        // FastLED.addLeds<WS2811, DATA_PIN, RGB>(leds, NUM_LEDS);
                                                        // FastLED.addLeds<WS2813, DATA_PIN, RGB>(leds, NUM_LEDS);
                                                        // FastLED.addLeds<APA104, DATA_PIN, RGB>(leds, NUM_LEDS);
                                                        // FastLED.addLeds<WS2811_400, DATA_PIN, RGB>(leds, NUM_LEDS);
                                                        // FastLED.addLeds<GE8822, DATA_PIN, RGB>(leds, NUM_LEDS);
                                                        // FastLED.addLeds<GW6205, DATA_PIN, RGB>(leds, NUM_LEDS);
                                                        // FastLED.addLeds<GW6205_400, DATA_PIN, RGB>(leds, NUM_LEDS);
                                                        // FastLED.addLeds<LPD1886, DATA_PIN, RGB>(leds, NUM_LEDS);
                                                        // FastLED.addLeds<LPD1886_8BIT, DATA_PIN, RGB>(leds, NUM_LEDS);
                                                        // ## Clocked (SPI) types ##
                                                        // FastLED.addLeds<LPD6803, DATA_PIN, CLOCK_PIN, RGB>(leds, NUM_LEDS);  // GRB ordering is typical
                                                        // FastLED.addLeds<LPD8806, DATA_PIN, CLOCK_PIN, RGB>(leds, NUM_LEDS);  // GRB ordering is typical
                                                        // FastLED.addLeds<WS2801, DATA_PIN, CLOCK_PIN, RGB>(leds, NUM_LEDS);
                                                        // FastLED.addLeds<WS2803, DATA_PIN, CLOCK_PIN, RGB>(leds, NUM_LEDS);
                                                        // FastLED.addLeds<SM16716, DATA_PIN, CLOCK_PIN, RGB>(leds, NUM_LEDS);
                                                        // FastLED.addLeds<P9813, DATA_PIN, CLOCK_PIN, RGB>(leds, NUM_LEDS);  // BGR ordering is typical
                                                        // FastLED.addLeds<DOTSTAR, DATA_PIN, CLOCK_PIN, RGB>(leds, NUM_LEDS);  // BGR ordering is typical
                                                        // FastLED.addLeds<APA102, DATA_PIN, CLOCK_PIN, RGB>(leds, NUM_LEDS);  // BGR ordering is typical
                                                        // FastLED.addLeds<SK9822, DATA_PIN, CLOCK_PIN, RGB>(leds, NUM_LEDS);  // BGR ordering is typical
}

void loop() {
  button.loop();  // MUST call the loop() function first

  if (buttonTime+2000 < millis() && button.isPressed()) {
    Serial.println("The button is pressed");
    buttonTime = millis();
    if (mode == 2) {
      mode = 0;
    } else {
      mode = mode + 1;
    }
  }
  if (mode == 0) {
    // Turn the LED on, then pause
    leds[0] = CRGB::Red;
    leds[1] = CRGB::Red;
    leds[2] = CRGB::Red;
    leds[3] = CRGB::Red;
    leds[4] = CRGB::Red;
    leds[5] = CRGB::Red;
    leds[6] = CRGB::Red;
    FastLED.show();
    delay(100);
    // Now turn the LED off, then pause
    leds[0] = CRGB::Black;
    leds[1] = CRGB::Black;
    leds[2] = CRGB::Black;
    leds[3] = CRGB::Black;
    leds[4] = CRGB::Black;
    leds[5] = CRGB::Black;
    leds[6] = CRGB::Black;
    FastLED.show();
    delay(100);

    leds[0] = CRGB::Red;
    leds[1] = CRGB::Red;
    leds[2] = CRGB::Red;
    leds[3] = CRGB::Red;
    leds[4] = CRGB::Red;
    leds[5] = CRGB::Red;
    leds[6] = CRGB::Red;
    FastLED.show();
    delay(200);

    leds[0] = CRGB::Black;
    leds[1] = CRGB::Black;
    leds[2] = CRGB::Black;
    leds[3] = CRGB::Black;
    leds[4] = CRGB::Black;
    leds[5] = CRGB::Black;
    leds[6] = CRGB::Black;
    FastLED.show();
    delay(500);
  } else if (mode == 1) {
    // Turn the LED on, then pause
    leds[0] = CRGB::Blue;
    leds[1] = CRGB::Blue;
    leds[2] = CRGB::Blue;
    leds[3] = CRGB::Red;
    leds[4] = CRGB::Red;
    leds[5] = CRGB::Red;
    leds[6] = CRGB::Red;
    FastLED.show();
    delay(250);
    // Now turn the LED off, then pause
    leds[0] = CRGB::Red;
    leds[1] = CRGB::Red;
    leds[2] = CRGB::Red;
    leds[3] = CRGB::Red;
    leds[4] = CRGB::Blue;
    leds[5] = CRGB::Blue;
    leds[6] = CRGB::Blue;
    FastLED.show();
    delay(250);
  } else if (mode == 2) {
    leds[0].red   = 500;
    leds[0].green = 0;
    leds[0].blue  = 0;
    FastLED.show();
    delay(100);
    leds[1].red   = 500;
    leds[1].green = 300;
    leds[1].blue  = 0;
    FastLED.show();
    delay(100);
    leds[2].red   = 500;
    leds[2].green = 450;
    leds[2].blue  = 0;
    FastLED.show();
    delay(100);
    leds[3] = CRGB::Green;
    FastLED.show();
    delay(100);
    leds[4] = CRGB::Blue;
    FastLED.show();
    delay(100);
    leds[5] = CRGB::Purple;
    FastLED.show();
    delay(100);
    leds[6] = CRGB::White;
    FastLED.show();
    delay(100);
    FastLED.show();
    leds[0] = CRGB::Black;
    FastLED.show();
    delay(100);
    leds[1] = CRGB::Black;
    FastLED.show();
    delay(100);
    leds[2] = CRGB::Black;
    FastLED.show();
    delay(100);
    leds[3] = CRGB::Black;
    FastLED.show();
    delay(100);
    leds[4] = CRGB::Black;
    FastLED.show();
    delay(100);
    leds[5] = CRGB::Black;
    FastLED.show();
    delay(100);
    leds[6] = CRGB::Black;
    FastLED.show();
    delay(100);
  }
}
