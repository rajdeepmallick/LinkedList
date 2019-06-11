Node* deleteNode(Node *head,int x)
{
    if(head==NULL)
        return head;
    else if(x==1){
        head=head->next;
        return head;
    }
    else{
        Node *p=head;
        int c=2;
        while(p->next!=NULL){
            if(c==x){
                p->next=p->next->next;
                return head;
            }
            p=p->next;
            c++;
        }
        return head;
    }
}
