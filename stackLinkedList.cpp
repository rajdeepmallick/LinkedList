/*This is a function problem.You only need to complete the function given below*/
/*
The structure of the node of the stack is
struct StackNode
{
    int data;
    StackNode *next;
    StackNode(int a)
    {
        data = a;
        next = NULL;
    }
};
// And this is structure of MyStack
class MyStack {
private:
StackNode *top;
public :
    void push(int);
    int pop();
    MyStack()
    {
        top = NULL;
    }
};
/* The method push to push element
   into the stack */
   
   
   


//my code
void MyStack ::push(int x) {
    StackNode *temp=new StackNode(x);
    if(temp==NULL)
        return;
    else{
        temp->next=top;
        top=temp;
    }
}
/* The method pop which return the element
  poped out of the stack*/
  
  
  
  
  
//my code  
int MyStack ::pop() {
    if(top==NULL){
        return -1;
    }
    else{
        int item=top->data;
        top=top->next;
        return item;
    }
}
