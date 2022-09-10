#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "Stack.h"
#include "Double_Linked_List1.h"
typedef long long ll;

#define PI 3.14
#define SET_BIT(Var, Bit_No) Var |= (1 << Bit_No)
#define CLEAR_BIT(Var, Bit_No) Var &= ~(1 << Bit_No)
#define READ_BIT(Var, Bit_No) ((Var & (1 << Bit_No)) >> Bit_NO)
#define TOGGLE_BIT(Var, Bit_No) Var ^= (1 << Bit_No)
//const long long N = 2e5 + 5, MOD = 1e9 + 7, oo = 1e18;
//const double Prox = 1e-7;

Stack_ds_t MyStack_1;
struct DNode* ListHead = NULL;

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



    int UserChoice = 0;
    int ListLength = 0;

    printf("-> Hello to Double Linked List \n");
    while (1) {
        printf("\n");
        printf("===============================\n");
        printf("-> 1) Insert_Node_At_Beginning \n");
        printf("-> 2) Insert_Node_At_End \n");
        printf("-> 3) Insert_Node_After \n");
        printf("-> 4) Delete_Node_At_Beginning \n");
        printf("-> 5) Delete_Node_From_End \n");
        printf("-> 6) Delete_Node_at_any_position \n");
        printf("-> 7) Display_All_Nodes \n");
        printf("-> 8) Get_Length \n");
        printf("-> 9) Quit from application \n");
        printf("===============================\n");

        printf("\n");
        printf("UserChoice : ");
        scanf_s("%i", &UserChoice);

        switch (UserChoice) {
        case 1:
            Insert_Data_At_Beginning(&ListHead);
            break;
        case 2:
            Insert_Data_At_End(&ListHead);
            break;
        case 3:
            Insert_Data_At_Any_Position(ListHead);
            break;
        case 4:
            Delete_Data_From_Beginning(&ListHead);
            break;
        case 5:
            Delete_Data_From_End(ListHead);
            break;
        case 6:
            Delete_Data(ListHead);
            break;
        case 7:
            Display_Data(ListHead);
            break;
        case 8:
            ListLength = Get_Lenght(ListHead);
            printf("List Length : << %i >> Nodes\n", ListLength);
            break;
        case 9:
            printf("Quit from application \n");
            exit(1);
            break;
        default:
            printf("User Choice out of range !!\n");
            break;
        }
    }




    return 0;
}
