int isLengthEvenOrOdd(struct Node* head)
{
    int count=0;
    Node *p=head;
    while(p!=NULL){
        p=p->next;
        count++;
    }
    return (count%2);
}
