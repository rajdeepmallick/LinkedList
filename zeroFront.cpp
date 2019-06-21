/*This is a function problem.You only need to complete the function given below*/
//User function Template for C++
/* Linked List Node structure
struct Node
{
int data;
struct Node* next;
};
*/
// Move Zeros to the front of the list





//my code
Node* pushnode(Node *head,int x){
    Node *temp=new Node;
    temp->next=NULL;
    temp->data=x;
    
    if(head==NULL)
        head=temp;
    else{
        Node *p=head;
        while(p->next!=NULL)
            p=p->next;
        p->next=temp;    
    }    
    return head;
}
void moveZeroes(struct Node **head){
    Node *p=*head,*temp=NULL;
    while(p!=NULL){
        if(p->data==0){
            temp=pushnode(temp,0);
        }
        p=p->next;
    }
    p=*head;
    while(p!=NULL){
        if(p->data!=0){
            temp=pushnode(temp,p->data);
        }
        p=p->next;
    }
    *head=temp;
}
