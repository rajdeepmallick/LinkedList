#include <bits/stdc++.h>
using namespace std;
struct Node {
	int data;
	struct Node* next;
};
void append(struct Node** headRef, int newData)
{
	struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
	struct Node *last = *headRef;
	new_node->data = newData;
	new_node->next = NULL;
	if (*headRef == NULL)
	{
	    *headRef = new_node;
	    return;
	}
	while (last->next != NULL)
		last = last->next;
	last->next = new_node;
	return;
}
int sumOfLastN_Nodes(struct Node* head, int n);
// Driver program to test above
int main()
{
    int t;
    cin>>t;
    while(t--){
        struct Node* head = NULL;
        int n,m,tmp;
        cin>>m>>n;
        while(m--){
            cin>>tmp;
            append(&head, tmp);
        }
        cout<<sumOfLastN_Nodes(head, n)<<endl;
    }
	return 0;
}

/*This is a function problem.You only need to complete the function given below*/
/*Structure of the node of the linled list is as
struct Node {
	int data;
	struct Node* next;
};*/
// your task is to complete this function 
// function should return sum of last n nodes



//my code
Node* rev(Node *node){
    Node *prev=NULL,*ptr=node,*Next;
    while(ptr!=NULL){
        Next=ptr->next;
        ptr->next=prev;
        prev=ptr;
        ptr=Next;
    }
    return prev;
}

int sumOfLastN_Nodes(struct Node* head, int n)
{
    int sum=0;
    head=rev(head);
    while(n--){
        sum=sum+head->data;
        head=head->next;
    }
    return sum;
}
