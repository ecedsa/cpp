#include <iostream>

using namespace std;
void insertion_sort(int a[], int n){
    for(int i=0; i<n-1; i++)
    {
        for(int j=i;j>=0;j--)
        {
            if(a[j]<a[j-1])
            {
                int temp = a[j];
                a[j]=a[j-1];
                a[j-1]=temp;
            }
        }
    }
}
int main(){
    int a[20];
    int n;
    cout<<"how Many Element :=  ";
    cin>>n;
    cout<<"enetr the element ;=  ";
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    insertion_sort(a,n);
    cout<<"äter sort list ;= ";
    for(int j=0; j<n;j++){
        cout<<"\t"<<a[j];
    }
}    