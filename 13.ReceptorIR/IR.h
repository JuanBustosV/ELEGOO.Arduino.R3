#ifndef _IR_H
#define _IR_H

#define RECEIVER 11

#define KEY_POWER (0xE318261B)
#define KEY_FUNC_STOP (0xEE886D7F)
#define KEY_VOL_ADD (0xFF629D)
#define KEY_FAST_BACK (0xFF22DD)
#define KEY_PAUSE (0xD7E84B1B)
#define KEY_FAST_FORWARD (0xFFC23D)
#define KEY_DOWN (0xFFE01F)
#define KEY_VOL_DE (0xFFA857)
#define KEY_UP (0xE5CFBD7F)
#define KEY_EQ (0x97483BFB)
#define KEY_ST_REPT (0xF0C41643)
#define KEY_0 (0xFF6897)
#define KEY_1 (0x9716BE3F)
#define KEY_2 (0x3D9AE3F7)
#define KEY_3 (0x6182021B)
#define KEY_4 (0x8C22657B)
#define KEY_5 (0x488F3CBB)
#define KEY_6 (0xFF5AA5)
#define KEY_7 (0xFF42BD)
#define KEY_8 (0xFF4AB5)
#define KEY_9 (0xFF52AD)
#define KEY_REPEAT (0xFFFFFFFF)
#define KEY_NUM 21
#define REPEAT 22

unsigned long keyValue[]={KEY_POWER,KEY_FUNC_STOP,KEY_VOL_ADD,KEY_FAST_BACK,KEY_PAUSE,KEY_FAST_FORWARD,
                KEY_DOWN,KEY_VOL_DE,KEY_UP,KEY_EQ,KEY_ST_REPT,KEY_0,KEY_1,KEY_2,KEY_3,KEY_4,KEY_5,
                KEY_6,KEY_7,KEY_8,KEY_9,KEY_REPEAT};

char keyBuf[][13]={"POWER","FUNC/STOP","VOL+","FAST BACK","PAUSE","FAST FORWARD","DOWN","VOL-",
                  "UP","EQ","ST/REPT","0","1","2","3","4","5","6","7","8","9"};
#endif
