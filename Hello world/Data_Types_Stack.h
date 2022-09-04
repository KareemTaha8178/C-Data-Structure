//file guard

#ifndef _DATA_TYPES_H_
#define _DATA_TYPES_H_

typedef unsigned char unit_8;
typedef unsigned short unit_16;
typedef unsigned int unit_32;
typedef signed char snit_8;
typedef signed short snit_16;
typedef signed int snit_32;

#define ZERO 0

typedef enum return_state
{
	OK,
	Not_Ok
}return_State_t;


#endif // !_DATA_TYPES_H_

// #pragma once == file guard **(but it dependant on compiler)** so it is better to not use it
// #pragma GCC poison (such as printf) to prevent anyone from using printf 
// #pragma GCC warning "any error you want it here"
// #pragma GCC error "any error you want it here"
// #if !defined() && defined()