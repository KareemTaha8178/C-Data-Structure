#include <stdio.h>
#include <stdlib.h>

//file guard

#ifndef _STACK_H_
#define _STACK_H_

#include "Data_Types_Stack.h"

#define STACK_MAX_LEN 5

typedef struct Stack_ds
{
	int Stack_ptr;
	int data[STACK_MAX_LEN];

}Stack_ds_t;


// @brief initialize my stack pointer
// @param my_stack pointer to stack
// retval status of initialization process
return_State_t Stack_init(Stack_ds_t* my_Stack);


// @brief check if my stack is full or not
// @param my_stack pointer to stack
// @retval bool value 1 or 0
int Stack_full(Stack_ds_t* my_Stack);


// @brief check if my stack is empty or not
// @param my_stack pointer to stack
// @retval bool value 1 or 0
int Stack_empty(Stack_ds_t* my_Stack);


// @brief push element at stack
// @param my_stack pointer to stack and value
// @retval bool value 1 or 0
void Stack_Push(Stack_ds_t* my_Stack, unit_32 value);



// @brief pop element at stack
// @param my_stack pointer to stack and value
// @retval bool value 1 or 0
void Stack_Pop(Stack_ds_t* my_Stack);



// @brief give me top value at stack
// @param my_stack pointer to stack
// @retval top value at stack
int Stack_Top(Stack_ds_t* my_Stack);


// @brief give me stack size
// @param my_stack pointer to stack and value
// @retval size of stack now
int Stack_Size(Stack_ds_t* my_Stack);




#endif // !_STACK_H_
