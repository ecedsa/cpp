#include<iostream>
#include <cmath>
using namespace std;
const int MAX=5;
class stack
{
    private:
    int a[MAX];
    int top;
    public:
    stack()
    {
        top=-1;
    }
    void push (int x)
    {
        top++;
        a[top]=x;
    }
    int pop (void)
    {
        int x=a[top];
        top--;
        return(x);
    }
    int peek (void)
    {
        return(a[top]);
    }
    int full (void)
    {
        if(top==MAX-1)
          return(1);
        else return(0);
    }
    int empty (void)
    {
        if(top==-1)
          return(1);
        else return(0);
    }
    void display (void)
    {
        for(int i=top; i>=0; i--)
        cout<<endl<<a[i];
    }
};

int evaluate(char x,int op1,int op2)
{
    if(x=='+')return(op1+op2);
    if(x=='-')return(op1-op2);
    if(x=='*')return(op1*op2);
    if(x=='/')return(op1/op2);
    if(x=='%')return(op1%op2);
    if(x=='$')return(pow(op1,op2));

}

int main(void)
{
    int op1,op2,val;
    stack s;
    char x;
    cout<<"\n enter postfix expression:";
    while ((x=getchar())!='\n')
    {
        if(isdigit(x))
        {
        s.push(x-48);
        }
        else
        {
            op2=s.pop();
            op1=s.pop();
            val=evaluate(x,op1,op2);
            s.push(val);
        }
    }
    val=s.pop();
    cout<<"\n answer="<<val;
    return(0);    
           
}


        

        

 
