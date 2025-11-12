#include<iostream>
using namespace std;
const int MAX=5;
class queue
{
    private:
    int a[MAX];
    int front ;
    int rear;
    public:
    queue ()
    {
        front=-1;
        rear=-1;
    }
    int empty (void)
    {
        if (front==-1 & rear==-1)
        return (1);
        else return (0);
    }
    int full (void)
    {
        if (rear==MAX-1)
        return (1);
        else return (0);
    }
    void enqueue (int x)
    {
        if(front==-1 && rear==-1)
        {
            front++;
            rear++;
        }
        else
        {
            rear++;
            
        }
        a[rear]=x;
    }    
    int dequeue (void)
    {
        int x=a[front];
        if (front ==rear)
        {
            front=-1;
            rear=-1;
        }
        else
        {
            front++;
        }
        return (x);
    }
    int peek (void)
    {
        return (a[front]);
    }
    void display (void)
    {
        cout<<"\n";
        for (int i=front; i<=rear; i++)
        cout<<"\t"<<a[i];
    }

        
    
};
int main ()
{
    int x;
    queue q;
    if(!q.full ())
    q.enqueue (19);
    if(!q.full ())
    q.enqueue (28);
    if(!q.full())
    q.enqueue (34);
    if(!q.full())
    q.enqueue (43);
    if(!q.full())
    q.enqueue (52);
    if(!q.full())
    q.enqueue (62);
    if(!q.full())
    q.enqueue (71);
    q.display();
    if(!q.empty())
    {
        x=q.dequeue();
        cout<<"\n removed:"<<x;
    }
    q.display();
    x=q.dequeue();
    cout<<"\n enqueue is full"<<x;
}    
