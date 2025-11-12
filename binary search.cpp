//the c++ program for binari search
#include<iostream>
using namespace std;
int binary_search(int a[],int x,int n)
{
    int first=0,last=n-1;
    while(first<=last)
    {
        int mid=(first+last)/2;
        if(a[mid]==x)return(mid);
        else if(a[mid]<x)first=mid+1;
        else last=mid-1;
    }
    return(0);
}
int main()
{
    int a[20];
    int x,n;
    cout<<"how many element you want to list";
    cin>>n;
    cout<<"enter"<<n<<"element";
    for(int i=0;i<n;i++)
    cin>>a[i];
    cout<<"enter the target element";
    cin>>x;
    int p=binary_search(a,n,x);
    if(p==-1) cout<<"element not found";
    cout<<"element found at loc="<<p;
    return(0);

}


