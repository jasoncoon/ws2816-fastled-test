#include <FastLED.h> // https://github.com/FastLED/FastLED

FASTLED_USING_NAMESPACE

#define DATA_PIN MOSI
#define LED_TYPE WS2812B
#define COLOR_ORDER GRB
#define NUM_LEDS 64
#define NUM_LEDS2 NUM_LEDS * 2

CRGB leds[NUM_LEDS];

CRGB leds2[NUM_LEDS2];

void setup()
{
  Serial.begin(115200);

  // FastLED.addLeds<LED_TYPE, DATA_PIN, COLOR_ORDER>(leds, NUM_LEDS);
  FastLED.addLeds<LED_TYPE, DATA_PIN, COLOR_ORDER>(leds2, NUM_LEDS2);
  // FastLED.setDither(0);
  // FastLED.setCorrection(0);
  // FastLED.setTemperature(0);
}

void loop()
{
  fill_solid(leds2, NUM_LEDS2, CRGB::Red);

  // fill_solid(leds, NUM_LEDS, CRGB::Red);

  // for (uint16_t i = 0; i < NUM_LEDS; i++)
  // {
  //   CRGB led = leds[i];
  //   uint8_t r = led.r;
  //   uint8_t g = led.g;
  //   uint8_t b = led.b;

  //   leds2[i * 2] = CRGB(r, r, g);
  //   leds2[i * 2 + 1] = CRGB(g, b, b);
  // }

  FastLED.show();
}
