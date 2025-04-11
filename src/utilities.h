#pragma once

#if defined(CONFIG_IDF_TARGET_ESP32)



#define BUTTON_1  (34)
#define BUTTON_2  (35)
#define BUTTON_3  (39)

#define BATT_PIN  (36)

#define SD_MISO   (12)
#define SD_MOSI   (13)
#define SD_SCLK   (14)
#define SD_CS     (15)

#define BOARD_SCL (14)
#define BOARD_SDA (15)
#define TOUCH_INT (13)

#define GPIO_MISO (12)
#define GPIO_MOSI (13)
#define GPIO_SCLK (14)
#define GPIO_CS   (15)

#elif defined(CONFIG_IDF_TARGET_ESP32S3)


#define BUTTON_1   (21)

#define BATT_PIN   (3)

#define SD_MISO    (40)
#define SD_MOSI    (38)
#define SD_SCLK    (39)
#define SD_CS      (47)

#define BOARD_SCL  (42)
#define BOARD_SDA  (41)
#define TOUCH_INT  (48)

#define GPIO_MISO  (40)
#define GPIO_MOSI  (38)
#define GPIO_SCLK  (39)
#define GPIO_CS    (47)


#endif
