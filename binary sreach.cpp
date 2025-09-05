#include<iostream>
using namespace std;
int main ()
{
    int  a[10],n,key;
    cout<<"enter the size of an array:";
    cin>>n;
    cout<<"enter the elements of an array:";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"enter the elements which do you want to sreach :";
    cin>>key;
    int low = 0;
    int high = n-1;
    while(low<=high)
    {
        int mid = low+high/2;
        if(a[mid]==key)
        {
            return mid;
        }
        if(a[mid]<key)
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
        cout<<a[mid];
    }
    return 0;
}