

#ifndef MAX7221_H_
#define MAX7221_H_

/* MAX7221 COMMANDS */
#define MAX7221_NOP			0
#define MAX7221_DIGIT0		1
#define MAX7221_DIGIT1		2
#define MAX7221_DIGIT2		3
#define MAX7221_DIGIT3		4
#define MAX7221_DIGIT4		5
#define MAX7221_DIGIT5		6
#define MAX7221_DIGIT6		7
#define MAX7221_DIGIT7		8
#define MAX7221_DECODE		9
#define MAX7221_INTENSITY	10
#define MAX7221_SCAN		11
#define MAX7221_ENABLE		12
#define MAX7221_TEST		15

#define SEGA 0
#define SEGB 1
#define SEGC 2
#define SEGD 3
#define SEGE 4
#define SEGF 5
#define SEGG 6
void MAX7721_voidInit(void);
void execute(unsigned char cmd, unsigned char data);

#endif /* MAX7221_H_ */