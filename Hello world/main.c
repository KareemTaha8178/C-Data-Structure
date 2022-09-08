#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "Stack.h"
#include "Linked_List.h"


typedef long long ll;

#define PI 3.14
#define SET_BIT(Var, Bit_No) Var |= (1 << Bit_No)
#define CLEAR_BIT(Var, Bit_No) Var &= ~(1 << Bit_No)
#define READ_BIT(Var, Bit_No) ((Var & (1 << Bit_No)) >> Bit_NO)
#define TOGGLE_BIT(Var, Bit_No) Var ^= (1 << Bit_No)
//const long long N = 2e5 + 5, MOD = 1e9 + 7, oo = 1e18;
//const double Prox = 1e-7;

Stack_ds_t MyStack_1;
struct Node Linked_1;

int main() {

	/*return_State_t ret;
	ret = Stack_init(&MyStack_1);
	if (ret == OK)
	{
		int k = 1;
		while (!Stack_full(&MyStack_1))
		{
			Stack_Push(&MyStack_1, k++);
		}

		int siz = Stack_Size(&MyStack_1);
		printf("%d \n", siz);
		int top = Stack_Top(&MyStack_1);
		printf("%d \n", top);

		for(int i = (STACK_MAX_LEN - 1); i >= 0; i--)
		{
			printf("Data -> %d  \t   Pointer -> %d \n", MyStack_1.data[i], MyStack_1.Stack_ptr);
			Stack_Pop(&MyStack_1);
		}
		int siz2 = Stack_full(&MyStack_1);
		printf("%d \n", siz2);

	}
	else puts("You have a problem with stack initialization");*/
	


	return 0;
}
