#include "uart.h"
unsigned char string_buffer[100] = "learn-in-depth : Ali Khalid";
void  main(void)
{
	Uart_Send_string(string_buffer);
}