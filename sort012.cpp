/*This is a function problem.You only need to complete the function given below*/
/*
  Sort the list of 0's,1's and 2's
  The input list will have at least one element
  Node is defined as
  struct Node
  {
     int data;
     Node *next;
     Node(int key){
        data=key;
        next=NULL;
     }
  }
*/
// This function is to segregate the elememtns in the linked list
// This will do the required arrangement by changing the links







//my code
Node* pushnode(Node *root,int key){
    Node *temp=new Node(key);
    //temp->next=NULL;
    //temp->data=key;
    if(root==NULL)
        root=temp;
    else{
        Node *p=root;
        while(p->next!=NULL){
            p=p->next;
        }
        p->next=temp;
    }
    return root;
}


Node* segregate(Node *head) {
    
    Node *p=head,*temp=NULL;
    while(p!=NULL){
        if(p->data==0)
            temp=pushnode(temp,0);
        p=p->next;    
    }
    p=head;
    while(p!=NULL){
        if(p->data==1)
            temp=pushnode(temp,1);
        p=p->next;    
    }
    p=head;
    while(p!=NULL){
        if(p->data==2)
            temp=pushnode(temp,2);
        p=p->next;    
    }
    return temp;
}
