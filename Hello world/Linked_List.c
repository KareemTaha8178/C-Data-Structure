#include <stdio.h>
#include <stdlib.h>
#include "Linked_List.h"


// insert data at beginning of linked list
void Insert_Data_At_Beginning(struct Node** List) 
{
	struct Node *TempNode = NULL;
	TempNode = (struct Node*)malloc(sizeof(struct Node));
	if (TempNode != NULL) 
	{
		printf("Enter Your Data :  ");
		scanf_s("%i", &TempNode->NodaData);
		if (*List == NULL) 
		{
			TempNode->NodeLink = NULL;
			*List = TempNode;
		}
		else 
		{
			TempNode->NodeLink = *List;
			*List = TempNode;
		}
	}
}

// insert data at end of linked list
void Insert_Data_At_End(struct Node** List) 
{
	struct Node *TempNode = NULL;
	struct Node* LastNode = NULL;
	TempNode = (struct Node *)malloc(sizeof(struct Node));
	if (TempNode != NULL) 
	{
		printf("Enter Your Data :  ");
		scanf_s("%i", &TempNode->NodaData);
		TempNode->NodeLink = NULL;

		if (*List == NULL) *List = TempNode;
		else 
		{
			LastNode = *List;
			while (LastNode->NodeLink != NULL) LastNode = LastNode->NodeLink;
			LastNode->NodeLink = TempNode;
		}
	}


}



// Get Lenght of Our Linked List
int Get_Lenght(struct Node* List)
{
	struct Node* FirstNode = NULL;
	int len = 0;
	if (List != NULL)
	{
		FirstNode = List;
		while (FirstNode != NULL)
		{
			FirstNode = FirstNode->NodeLink;
			len++;
		}
	}
	return len;
}


// insert data after specific element at linked list
void Insert_Data_After(struct Node* List)
{
	struct Node* TempNode = NULL, * CounterList = NULL;
	int position = 0, counter = 1, len = Get_Lenght(List);
	printf("Enter Position you want to insert after it(Enter Positive num) : \n '(For knowing, the first position is 1)'");
	scanf_s("%i", &position);
	if (position > len || position < 1) printf("Your position is Invalid");
	else
	{
		CounterList = List;
		while (counter != position) 
		{
			counter++;
			CounterList = CounterList->NodeLink;
		}
		TempNode = (struct Node*)malloc(sizeof(struct Node));
		if (TempNode != NULL) 
		{
			printf("Enter Your Data :  ");
			scanf_s("%i", &TempNode->NodaData);
			TempNode->NodeLink = CounterList->NodeLink;
			CounterList->NodeLink = TempNode;
		}
	}

}




// Delete data at beginning of linked list
void Delete_Data_From_Beginning(struct Node** List)
{
	struct Node* TempNode = *List;
	int len = Get_Lenght(*List);
	if (len == 0) printf("Linked list is empty!!");
	else
	{
		*List = TempNode->NodeLink;
		TempNode->NodeLink = NULL;
		free(TempNode);
	}
}



// Delete data at end of linked list
void Delete_Data_From_End(struct Node** List)
{
	struct Node* LastNode = NULL, * Counter = NULL;
	int len = Get_Lenght(*List), counter = 1;
	if (len == 0 || len == 1) printf("Linked list is empty!! ----> Use Delete from beginning");
	else
	{
		while (counter != (len - 1))
		{
			counter++;
			Counter = Counter->NodeLink;
		}
		LastNode = Counter->NodeLink;
		Counter->NodeLink = NULL;
		free(LastNode);
	}

}




// Delete data after specific element at linked list
void Delete_Data(struct Node* List)
{
	struct Node* TempNode = NULL, * CounterList = NULL;
	int position = 0, counter = 1, len = Get_Lenght(List);
	printf("Enter Position you want to Delete it(Enter Positive num) : \n '(For knowing, the first position is 1)'");
	scanf_s("%i", &position);
	if (position > len || position <= 1) printf("Your position is Invalid ------> Use delete from beginning");
	else
	{
		CounterList = List;
		while(counter != (len - 1))
		{
			counter++;
			CounterList = CounterList->NodeLink;
		}
		TempNode = CounterList->NodeLink;
		CounterList->NodeLink = TempNode->NodeLink;
		TempNode->NodeLink = NULL;
		free(TempNode);
	}


}




// Display data of linked list
void Display_Data(struct Node* List)
{
	struct Node* TempNode = List;
	int len = Get_Lenght(List);
	if (len == 0) printf("Linked List is empty!!!");
	else
	{
		while(TempNode != NULL)
		{
			printf("Node Data ---> %i\n", TempNode->NodaData);
			TempNode = TempNode->NodeLink;
		}
		printf("Done Display of all data");
	}

}