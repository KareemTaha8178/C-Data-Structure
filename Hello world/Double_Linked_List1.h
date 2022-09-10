#include <stdio.h>
#include <stdlib.h>


#ifndef _Double_Linked_List1_H_
#define _Double_Linked_List1_H_

struct DNode
{
	int NodeData;
	struct DNode* PreNode;
	struct DNode* NextNode;
};


// insert data at beginning of D linked list
void Insert_Data_At_Beginning(struct DNode** List);

// insert data at end of linked list
void Insert_Data_At_End(struct DNode** List);

// Get Lenght of Our Linked List
int Get_Lenght(struct DNode* List);



// insert data between 2 specific elements at D linked list
void Insert_Data_At_Any_Position(struct DNode* List);


// Delete data at beginning of D linked list
void Delete_Data_From_Beginning(struct DNode** List);

// Delete data at end of linked D list
void Delete_Data_From_End(struct DNode* List);



// Delete data between 2 specific elements at D linked list
void Delete_Data(struct DNode* List);




// Display data of D linked list
void Display_Data(struct DNode* List);


#endif // !_Double_Linked_List1_H_
