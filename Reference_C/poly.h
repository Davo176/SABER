/*---------------------------------------------------------------------
This file has been adapted from the implementation 
(available at, Public Domain https://github.com/pq-crystals/kyber) 
of "CRYSTALS – Kyber: a CCA-secure module-lattice-based KEM"
by : Joppe Bos, Leo Ducas, Eike Kiltz, Tancrede Lepoint, 
Vadim Lyubashevsky, John M. Schanck, Peter Schwabe & Damien stehle
----------------------------------------------------------------------*/

#ifndef POLY_H
#define POLY_H

#include <stdint.h>
#include "SABER_params.h"

void MatrixVectorMul(const uint16_t A[SABER_K][SABER_K][SABER_N], const uint16_t s[SABER_K][SABER_N], uint16_t res[SABER_K][SABER_N], int16_t transpose);
void InnerProd(const uint16_t b[SABER_K][SABER_N], const uint16_t s[SABER_K][SABER_N], uint16_t res[SABER_N]);
void GenSecret(uint16_t r[SABER_K][SABER_N],const unsigned char *seed);

#endif
