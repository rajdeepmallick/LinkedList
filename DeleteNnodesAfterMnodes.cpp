void linkdelete(struct node  *head, int M, int N){
    
    node *p=head,*prev;
    code:
    int c=1;
    while(p!=NULL){
        if(c==M)
            break;
        p=p->next;
        c++;
    }
    if(p==NULL)
        return;
    prev=p;
    c=0;
    while(p!=NULL){
        p=p->next;
        if(c==N)
            break;
        c++;    
    }
    prev->next=p;
    goto code;
}
