#ifndef _PIC_H_
#define _PIC_H_

#include "io.h"

void setup_pic();
void irq_enable(int irq);
void pic_acknowledge(uint8_t irq);

#endif
