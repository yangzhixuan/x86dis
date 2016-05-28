#ifndef COMMON_H
#define COMMON_H

typedef unsigned char u1;
typedef unsigned short u2;
typedef unsigned int u4;
typedef char s1;
typedef short s2;
typedef int s4;
typedef unsigned char bool;
typedef unsigned int uint;

#define MASKN(n) ((1<<(n))-1)
#define LSB16(v) (*(u2*)(v))
#define LSB32(v) (*(u4*)(v))

#endif
