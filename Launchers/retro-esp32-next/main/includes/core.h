/*
  C
*/
#include <stdio.h>
#include <string.h>
#include <dirent.h>
#include <math.h>
#include <dirent.h>
#include <unistd.h>
#include <ctype.h>

/*
  General
*/
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "nvs_flash.h"
#include "sdmmc_cmd.h"

/*
  CRC
*/
#include <rom/crc.h>

/*
  ESP
*/
#include "esp_heap_caps.h"
#include "esp_system.h"
#include "esp_event.h"
#include "esp_partition.h"
#include "esp_ota_ops.h"
#include "esp_partition.h"
#include "esp_spiffs.h"
#include "esp_err.h"
#include "esp_log.h"
#include "esp_vfs_fat.h"

/*
  Drivers
*/
#include "driver/i2c.h"
#include "driver/gpio.h"
#include <driver/adc.h>
#include "esp_adc_cal.h"
#include "driver/sdmmc_host.h"
#include "driver/sdspi_host.h"
#include "driver/ledc.h"

/*
  SPI LCD
*/
#include "../../components/spi_lcd/spi_lcd.h"