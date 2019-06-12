/*This is a function problem.You only need to complete the function given below*/
/*Struture of the node of the linked list is as:
struct Node {
	int data;
	struct Node* next;
};
*/
// Your task is to complete the function
// function should return the modular Node
// if no such node is present then return -1
int n=0;
Node* rev(Node *head){
    n=0;
    Node *prev=NULL,*ptr=head,*Next;
    while(ptr!=NULL){
        Next=ptr->next;
        ptr->next=prev;
        prev=ptr;
        ptr=Next;
        n++;
    }
    return prev;
}
int modularNode(Node* head, int k)
{
    if(head==NULL)
        return -1;
        
    Node *revHead=rev(head);
    
    if(n<k)
        return -1;
    
    int c=n;
    Node *p=revHead;
    while(p!=NULL){
        if(c%k==0)
            return (p->data);
        p=p->next;
        c--;
    }
    return -1;
}
