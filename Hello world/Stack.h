#include <stdio.h>
#include <stdlib.h>

//file guard

#ifndef _STACK_H_
#define _STACK_H_

#include "Data_Types_Stack.h"

#define STACK_MAX_LEN 5

typedef struct Stack_ds
{
	unit_32 Stack_ptr;
	unit_32 data[STACK_MAX_LEN];

}Stack_ds_t;


// @brief initialize my stack pointer
// @param my_stack pointer to stack
// retval status of initialization process
return_State_t Stack_init(Stack_ds_t* my_Stack);


// @brief check if my stack is full or not
// @param my_stack pointer to stack
// @retval bool value 1 or 0
static int Stack_full(Stack_ds_t* my_Stack);


// @brief check if my stack is empty or not
// @param my_stack pointer to stack
// @retval bool value 1 or 0
static int Stack_empty(Stack_ds_t* my_Stack);


#endif // !_STACK_H_
