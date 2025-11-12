//the c++ program for linear search
#include<iostream>
using namespace std;
int linear_search(int a[],int n,int x);
int main()
{
    int a[20];
    int x,n;
    cout<<"how many element";
    cin>>n;
    cout<<"enter"<<n<<"elements";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"enter element to search";
    cin>>x;
    int p=linear_search(a,n,x);
    if(p==-1) cout<<"element not found";
    else cout<<"element found at location"<<p;
    return(0);
}
int linear_search(int a[],int n,int x)
{
    for(int i=0;i<n;i++)
    {
        if(a[i]==x)
        return(i);   
    }
    return(-1);
}


