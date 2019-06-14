/*This is a function problem.You only need to complete the function given below*/
/*
structure of the node of the list is as
struct node
{
	int data;
	struct node* next;
};
*/






//my code
void sortedInsert(struct node** head, int val){
    node *temp=new node;
    temp->next=NULL;
    temp->data=val;
    node *p=*head;
    
    if(p==NULL){
        *head=temp;
        return;
    }
    if(p->data >= val){
        temp->next=(*head);
        *head=temp;
        return;
    }
    
    while(p->next!=NULL){
        if((p->data <= val) && (p->next->data >= val)){
            temp->next=p->next;
            p->next=temp;
            return;
        }
        p=p->next;
    }
    if(p->next==NULL)
        p->next=temp;
}
