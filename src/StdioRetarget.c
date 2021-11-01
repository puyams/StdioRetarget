#include "StdioRetarget.h"

void _putchar(char character) {
  ITM_SendChar(character);
}
int fputc(int ch, FILE *f) {
  MY_UART_TransmitByte(USART2, ch);
  return ch;
}
int fgetc(FILE *f) {
  int ch;
  HAL_UART_Receive(&huart2, (uint8_t *)&ch, 1, 0xFFFF);
  return ch;
}
int stdout_putchar (int ch) {
  MY_UART_TransmitByte(USART2, ch);
  return ch;
}
int stderr_putchar (int ch) {
  MY_UART_TransmitByte(USART2, ch);
  return ch;
}
int stdin_getchar (void) {
  int ch;
  HAL_UART_Receive(&huart2, (uint8_t *)&ch, 1, 0xFFFF);
  return ch;
}
void ttywrch (int ch) {
  MY_UART_TransmitByte(USART2, ch);
}
