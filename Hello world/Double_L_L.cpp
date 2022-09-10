#include <stdio.h>
#include <stdlib.h>
#include "Double_Linked_List1.h"


// insert data at beginning of D linked list
void Insert_Data_At_Beginning(struct DNode** List) 
{
	struct DNode* Temp = NULL;
	Temp = (struct DNode*)malloc(sizeof(struct DNode));
	if (Temp != NULL) 
	{
		printf("Enter Your Data :  ");
		scanf_s("%d \n", &Temp->NodeData);

		if (*List == NULL) 
		{
			Temp->PreNode = NULL;
			Temp->NextNode = NULL;
			*List = Temp;
		}
		else
		{
			(*List)->PreNode = Temp;
			Temp->NextNode = (* List);
			Temp->PreNode = NULL;
			(* List) = Temp;
		}
	}
}

// insert data at end of linked list
void Insert_Data_At_End(struct DNode** List) 
{
	struct DNode* Temp = NULL, * LastNode = NULL;
	Temp = (struct DNode*)malloc(sizeof(struct DNode));
	if (Temp != NULL)
	{
		printf("Enter Your Data :  ");
		scanf_s("%d \n", &Temp->NodeData);

		if (*List == NULL) 
		{
			Temp->NextNode = NULL;
			Temp->PreNode = NULL;
			*List = Temp;
		}
		else
		{
			LastNode = *List;
			while(LastNode->NextNode != NULL)
			{
				LastNode = LastNode->NextNode;
			}
			LastNode->NextNode = Temp;
			Temp->PreNode = LastNode;
			Temp->NextNode = NULL;
		}
	}
}

// Get Lenght of Our D Linked List
int Get_Lenght(struct DNode* List)
{
	struct DNode* Last = NULL;
	int len = 0;
	if(List == NULL)
	{
		return 0;
	}
	else
	{	
		Last = List;
		while(Last->NextNode != NULL)
		{
			Last = Last->NextNode;
			len++;
		}
		return len;
	}
}



// insert data between 2 specific elements at D linked list
void Insert_Data_At_Any_Position(struct DNode *List)
{
	struct DNode* Temp = NULL, * Counter1 = NULL, * Counter2 = NULL;
	int counter = 1, len = Get_Lenght(List), position = 0;
	Temp = (struct DNode*)malloc(sizeof(struct DNode));

	if (Temp != NULL)
	{
		printf("Enter Your Position :  ");
		scanf_s("%d \n", &position);
		printf("Enter Your Data :  ");
		scanf_s("%d \n", &Temp->NodeData);

		if (len == 0) printf("Linked List is empty!!!");
		else if (len == 1) printf("Linked List has 1 element only, so you can use insert at beginning or at end only");
		else if (position == len) printf("You need to add at end of Linked list, so you should use insert at end");
		else
		{
			Counter1 = List;
			while(counter != position)
			{
				counter++;
				Counter1 = Counter1->NextNode;
			}
			Counter2 = Counter1->NextNode;
			Counter2->PreNode = Temp;
			Temp->NextNode = Counter2;
			Counter1->NextNode = Temp;
			Temp->PreNode = Counter1;
		}
	}
}


// Delete data at beginning of D linked list
void Delete_Data_From_Beginning(struct DNode** List) 
{
	struct DNode* Delete = NULL;
	if (*List == NULL) printf("Linked List is empty!!!");
	else
	{
		Delete = *List;
		(* List) = Delete->NextNode;
		(*List)->PreNode = NULL;
		free(Delete);
		Delete = NULL;
	}
}

// Delete data at end of linked D list
void Delete_Data_From_End(struct DNode* List) 
{
	struct DNode* Delete = NULL, *Last = NULL;
	if (List == NULL) printf("Linked List is empty!!!");
	else
	{
		Delete = List;
		while(Delete->NextNode != NULL)
		{
			Delete = Delete->NextNode;
		}
		Last = Delete->PreNode;
		Last->NextNode = NULL;
		free(Delete);
		Delete = NULL;
	}
}



// Delete data between 2 specific elements at D linked list
void Delete_Data(struct DNode* List) 
{
	struct DNode* Counter1 = NULL, * Counter2 = NULL, *Counter3 = NULL;
	int counter = 1, len = Get_Lenght(List), position = 0;

	printf("Enter Your Position :  ");
	scanf_s("%d \n", &position);

	if (len == 0) printf("Linked List is empty!!!");
	else
	{
		Counter1 = List;
		while(counter != position)
		{
			counter++;
			Counter1 = Counter1->NextNode;
		}
		Counter2 = Counter1->NextNode;
		Counter3 = Counter1->PreNode;
		Counter2->PreNode = Counter1->PreNode;
		Counter3->NextNode = Counter1->NextNode;
		free(Counter1);
		Counter1 = NULL;
	}
}




// Display data of D linked list
void Display_Data(struct DNode* List) 
{
	struct DNode* Temp = List;
	if (List == NULL) printf("Linked List is empty!!!!");
	else
	{
		while(Temp->NextNode != NULL)
		{
			printf("---->>>  %d", Temp->NodeData);
			Temp = Temp->NextNode;
		}
		printf("---->>>  %d", Temp->NodeData);
	}
}

