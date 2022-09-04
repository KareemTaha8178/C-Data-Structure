#include <stdio.h>
#include <stdlib.h>
#include "Stack.h"


// @brief initialize my stack pointer
// @param my_stack pointer to stack
// @retval status of initialization process
return_State_t Stack_init(Stack_ds_t* my_Stack)
{	
	return_State_t ret;
	if (my_Stack == NULL) ret = Not_Ok;
	else 
	{
		my_Stack->Stack_ptr = -1;
		ret = OK;
	}
	return ret;
}


// @brief check if my stack is full or not
// @param my_stack pointer to stack
// @retval bool value 1 or 0
extern int Stack_full(Stack_ds_t* my_Stack)
{
	int check = 0;
	if (my_Stack->Stack_ptr == (STACK_MAX_LEN - 1)) check = 1;
	return check;
}


// @brief check if my stack is empty or not
// @param my_stack pointer to stack
// @retval bool value 1 or 0
extern int Stack_empty(Stack_ds_t* my_Stack)
{
	int check = 0;
	if (my_Stack->Stack_ptr == -1) check = 1;
	return check;
}

