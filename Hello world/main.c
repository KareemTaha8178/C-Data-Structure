#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "Stack.h"


typedef long long ll;

#define PI 3.14
#define SET_BIT(Var, Bit_No) Var |= (1 << Bit_No)
#define CLEAR_BIT(Var, Bit_No) Var &= ~(1 << Bit_No)
#define READ_BIT(Var, Bit_No) ((Var & (1 << Bit_No)) >> Bit_NO)
#define TOGGLE_BIT(Var, Bit_No) Var ^= (1 << Bit_No)
//const long long N = 2e5 + 5, MOD = 1e9 + 7, oo = 1e18;
//const double Prox = 1e-7;

Stack_ds_t MyStack_1;

int main() {

	return_State_t ret;
	ret = Stack_init(&MyStack_1);
	if (ret == OK) 
	{
		puts("Hello here");
	}
	else{}
	return 0;
}
