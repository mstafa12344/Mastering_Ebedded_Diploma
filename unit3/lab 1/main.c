#include "uart.h"

unsigned char buf1[100]="mustafa ali";
const unsigned char buf2 [100];
int main()
{
	uart_send_string(buf1);
while(1)
{
}
}