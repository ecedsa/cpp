#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node *next;
    node (int x)
    {
        data=x;
        next=NULL;
    }
};

class queue
{
    private:
    node*front;
    node*rear;
    public:
    queue()
    {
        front=NULL;
        rear=NULL;
    }
    int empty ()
    {
        if(front==NULL)
        return(1);
        else return (0);
    }
    void enqueue(int x)
    {
        node*p=new node(x);
        if (front==NULL)
        {
            front=p;
            rear=p;
        }
        else
        { 
            rear->next=p;
            rear=p;
        }
    }

    int dequeue(void)
    {
        int x=front->data;
        node*p=front;
        front=front->next;
        delete p;
        return (x);
    }
    int peek()
    {
        return(front->data);
    }

    void display()
    {
        node *q=front;
        cout<<endl;
        while(q!=NULL)
        {
            cout<<"\t"<<q->data;
            q=q->next;
        }
    }
};

int main()
{
    int x;
    queue q;
    q.enqueue (111);
    q.enqueue (286);
    q.enqueue (348);
    q.enqueue (439);  
    q.enqueue (520);
    q.enqueue (625);
    q.enqueue (714);
    q.display();
    if(!q.empty())
    {
        x=q.dequeue();
        cout<<"\n removed:"<<x;
    }
    q.display();
    x=q.dequeue();
    cout<<"\n enqueue is full"<<x;
};  
  