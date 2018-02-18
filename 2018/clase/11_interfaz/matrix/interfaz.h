#ifndef __INTERFAZ_H__
#define __INTERFAZ_H__

#include "comun.h"

#define ROJO "\x1B[1;31m"
#define NORMAL "\x1B[0m"
#define AMARILLO "\x1B[1;33m"
#define VERDE "\x1B[1;32m"
#define AZUL "\x1B[1;34m"
#define NEGRITA "\x1B[1m"
#define MAGENTA "\x1B[1;35m"



#ifdef __cplusplus
extern "C" {
#endif
void ver(int a[M][N]);
void header();
void valor(int *donde);
void matrix();
#ifdef __cplusplus
}
#endif

#endif
