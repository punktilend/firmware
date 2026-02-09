// Ra-02 (SX1278) on ESP32
#define ARDUINO_BOARD "ESP32_RA02"

// SX1278 LoRa Radio
#define USE_SX1278
#define SX127X_CS 18      // NSS
#define SX127X_DIO0 26    // DIO0
#define SX127X_RESET 23   // RESET
#define SX127X_DIO1 RADIOLIB_NC
#define SX127X_DIO2 RADIOLIB_NC

// SPI Configuration
#define LORA_SCK 5
#define LORA_MISO 19
#define LORA_MOSI 27

// I2C (for potential display/sensors later)
#undef I2C_SDA
#undef I2C_SCL
#define I2C_SDA 21
#define I2C_SCL 22

// No GPS by default
#undef GPS_RX_PIN
#undef GPS_TX_PIN

// Battery monitoring on ADC
#define BATTERY_PIN 35
#define ADC_CHANNEL ADC1_GPIO35_CHANNEL
#define ADC_ATTENUATION ADC_ATTEN_DB_12
#define ADC_MULTIPLIER 2.0

// LEDs (optional - adjust if you add LEDs to your board)
#undef LED_PIN
// #define LED_PIN 2  // Uncomment if you wire an LED to GPIO2

// Button (optional - adjust if you add a button)
#undef BUTTON_PIN
// #define BUTTON_PIN 0  // Uncomment if you use GPIO0 as button