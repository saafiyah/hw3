#include "llrec.h"

//*********************************************
// Provide your implementation of llpivot below
//*********************************************

void llpivot(Node *&head, Node *&smaller, Node *&larger, int pivot)
{
	if(head == NULL)
	{
		smaller = NULL;
		larger = NULL;
		return; 
	}
	else
	{
		llpivot(head->next, smaller, larger, pivot);
		if(head->val > pivot)
		{
			head->next = larger;
			larger = head;
			head = NULL;
		}
		else
		{
			head->next = smaller;
			smaller = head;
			head = NULL;
		}
	}
}
