void addNode(Node *head, int pos, int data)
{
    Node *temp=new Node(data);
    
    if(head==NULL)
        return;
    else{
        int c=0;
        Node *p=head;
        while(p->next!=NULL){
            if(c==pos){
                temp->next=p->next;
                temp->prev=p;
                p->next->prev=temp;
                p->next=temp;
                //return head;
            }
            c++;
            p=p->next;
        }
        if(c==pos){
            p->next=temp;
            temp->prev=p;
        }
        return;
    }    
}
