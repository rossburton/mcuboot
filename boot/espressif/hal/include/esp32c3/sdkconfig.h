#define CONFIG_IDF_TARGET_ESP32C3 1
#define CONFIG_IDF_TARGET_ARCH_RISCV 1
#define CONFIG_SPI_FLASH_ROM_DRIVER_PATCH 1
#define CONFIG_MCUBOOT 1
#define NDEBUG 1
#define CONFIG_BOOTLOADER_WDT_TIME_MS 9000
#define CONFIG_ESP_CONSOLE_UART_BAUDRATE 115200
#define CONFIG_BOOTLOADER_OFFSET_IN_FLASH 0x0000
#define BOOTLOADER_BUILD 1
