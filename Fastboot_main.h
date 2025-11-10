#include <stdio.h>
void fastboot() {
  #define FASTBBOT_PRINT_FASTBOOT_MODE_SECURE
  #define FASTBBOT_PRINT_SERIAL_NUMBER
  #define FASTBBOT_AGUARD_PC_INPUT
  #define FASTBBOT_ERROR_PRINT_NO_COMMAND
  #define FASTBBOT_WAIT_CABLE_SIGNAL
  printf("FASTBOOT MODE SECURE");
  printf("SERIAL NUMBER:SMJ9935");
  printf("BOOTLOADER STATUS:UNLOCKED");
  printf("OPTIONS:");
  printf("RECOVERY MODE");
  printf("REBOOT SYSTEM NOW");
  printf("BUTTONS:");
  printf("UP ==> NAVEGATE UP");
  printf("DOWN ==> NAVEGATE DOWN");
  printf("START ==> START/SELECT OPTION")
}
