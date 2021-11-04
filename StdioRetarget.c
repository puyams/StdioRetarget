#include "StdioRetarget.h"

void _putchar(char character) {
  ITM_SendChar(character);
}
int fputc(int ch, FILE *f) {
  HAL_UART_Transmit(&DebugUARTStruct, (uint8_t *)&ch, 1, 0xFFFF); // Replace your function to send a char
  return ch;
}
int fgetc(FILE *f) {
  int ch;
  HAL_UART_Receive(&DebugUARTStruct, (uint8_t *)&ch, 1, 0xFFFF); // Replace your function to receive a char
  return ch;
}
int stdout_putchar (int ch) {
  HAL_UART_Transmit(&DebugUARTStruct, (uint8_t *)&ch, 1, 0xFFFF); // Replace your function to send a char
  return ch;
}
int stderr_putchar (int ch) {
  HAL_UART_Transmit(&DebugUARTStruct, (uint8_t *)&ch, 1, 0xFFFF); // Replace your function to send a char
  return ch;
}
int stdin_getchar (void) {
  int ch;
  HAL_UART_Receive(&DebugUARTStruct, (uint8_t *)&ch, 1, 0xFFFF); // Replace your function to receive a char
  return ch;
}
void ttywrch (int ch) {
  HAL_UART_Transmit(&DebugUARTStruct, (uint8_t *)&ch, 1, 0xFFFF); // Replace your function to send a char
}
