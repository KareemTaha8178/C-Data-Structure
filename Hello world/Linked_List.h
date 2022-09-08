#include<stdio.h>
#include<stdlib.h>

#ifndef _LINKED_LIST_H_
#define  _LINKED_LIST_H_

#include "Data_Type_Linked_List.h"

// ordinary Linked list 
struct Node
{
	int NodaData;
	struct Node* NodeLink;
};


// insert data at beginning of linked list
void Insert_Data_At_Beginning(struct Node** List);

// insert data at end of linked list
void Insert_Data_At_End(struct Node** List);

// Get Lenght of Our Linked List
int Get_Lenght(struct Node** List);



// insert data after specific element at linked list
void Insert_Data_After(struct Node** List);


#endif //  !_LINKED_LIST_H_
