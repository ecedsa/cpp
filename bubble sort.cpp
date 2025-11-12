//the c++ program for bubble sort
#include<iostream>
using namespace std;
void bubblesort(int a[],int n);
int main()
{
    int a[20]; int n;
    cout<<"how many element";
    cin>>n;cout<<"enter unsorted list";
    for(int i=0;i<n;i++)
    cin>>a[i];
    cout<<"original unsorted list";
    for(int i=0;i<n;i++)
    cout<<"\t"<<a[i];
    bubblesort(a,n);
    cout<<"\n"<<"sorted list";
    for(int i=0;i<n;i++)
    cout<<"\t"<<a[i];
}
void bubblesort(int a[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            if(a[j]>a[j+1])
            {
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}


