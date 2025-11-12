#include<iostream>
using namespace std;
const int MAX=7;
class stack 
{
    private:
    int top;
    int a[MAX];
    public:
    stack()
    {
        top=-1;
    }
    void push(int x)
    {
        top++;
        a [top]=x;
    }
    int pop(void)
    {
        int x=a[top];
        top--;
        return(x);
    }
    int peek (void)
    {
        return(a[top]);
    }
    int full(void)
    {
        if (top==MAX-1)
          return(1);
        else return(0);  
    }
    int empty (void)
    {
        if(top==-1)
           return(1);
        else return(0);   
    }
    void display(void)
    {
        for (int i=top;i>=0;i--)
        cout<<endl<<a[i];
    }
};
int main()
{
    int x;
    stack s;
    if (!s.full()) s.push(12);
    if (!s.full()) s.push(13);
    if (!s.full()) s.push(14);
    if (!s.full()) s.push(15);
    if (!s.full()) s.push(16);
    if (!s.full()) s.push(17);
    s.display();
    if(!s.empty())
    {
        x=s.pop();
        cout<<endl<<"removed"<<x;
    }
    s.display();
    x=s.peek();
    cout<<endl<<"top element"<<x;
    

}

PS D:\satyam khatane> cd "d:\satyam khatane \" ; if ($?) { g++ stack_array.cpp -o stack_array } ; if ($?) { .\stack_array }

17
16
15
14
13
12
removed17
16
15
14
13
12
top element16
PS D:\satyam khatane>