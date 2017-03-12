#ifndef SYSTIMER_H
#define SYSTIMER_H

#include "rpi.h"

#define SYSTIMER_BASE PERIPHERAL_BASE+0x00003000

#define SYSTIMER_CONTROL SYSTIMER_BASE
#define SYSTIMER_COUNTER_LOW SYSTIMER_BASE+0x04
#define SYSTIMER_COUNTER_HIGH SYSTIMER_BASE+0x08
#define SYSTIMER_COMPARE0 SYSTIMER_BASE+0x0C
#define SYSTIMER_COMPARE1 SYSTIMER_BASE+0x10
#define SYSTIMER_COMPARE2 SYSTIMER_BASE+0x14
#define SYSTIMER_COMPARE3 SYSTIMER_BASE+0x18

unsigned long micros ();
void delay (unsigned long);

#endif