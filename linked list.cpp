#include<iostream>
using namespace std;
class node 
{
    public:
    int data ;
    node*next;
    node(int x)
    { 
        data=x;
        next=NULL;
    }
};
class linkedlist
{
    private:
    node*head;
    public:
    linkedlist()
    {
        head=NULL;
    }
    void insert(int x)
    {
        node*p=new node(x);
        if(head==NULL)
        {
            head=p;
        }
        else
        {
            node*q=head;
            while(q->next!=NULL)
            {
                q=q->next;
            }
            q->next=p;
        }
}



void display(void)
{
    node*q=head;
    cout<<endl<<"list = ";
    while(q!=NULL)
    {
        cout<<q->data<<"->";
        q=q->next;
    }

}
  


void remove(int x)
{
    node*p=NULL;node*q=head;
    if(head->data==x)
    {
        p=head;
        head=head->next;
        delete p;
        return;
    }
    while(q->next!=NULL)
    {
        if(q->next->data==x)
        {
            p=q->next;
            q->next=p->next;delete p;return;
    
        }
        q=q->next;
    }
}
};

int main()
{
    linkedlist list1,list2;
    list1.insert(10);
    list1.insert(15);
    list1.insert(25);
    list1.insert(30);
    list1.insert(9);
    list1.display();
    cout<<endl<<"element of link1"<<endl;
    list1.remove(25);
    list1.display();
    cout<<endl<<"remove the element"<<endl;

    list2.insert(100);
    list2.insert(200);
    list2.insert(300);
    list2.insert(400);
    list2.insert(500);
    list2.display();
    cout<<endl<<"element of link2"<<endl;
    list2.remove(400);
    list2.display();
    cout<<endl<<"remove the element"<<endl;
    return 0;     
}



