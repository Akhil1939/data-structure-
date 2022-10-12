#include<iostream>
using namespace std;

void mergee(int left[],int right[],int arr[],int l,int r)
{
    int i=0;
    int j=0;
    int k=0;
    while(i<l&&j<r)
    {
        if(left[i]<=right[j])
        {
            arr[k]=left[i];
            k=k+1;
            i=i+1;
        }
        else{
            arr[k]=right[j];
            j++;
            k++;
        }
    }
    while(i<l)
    {
        arr[k]=left[i];
        i++;
        k++;
    }
    while(j<r)
    {
        arr[k]=right[j];
        j++;
        k++;
    }
}
void mergesort(int arr[],int n)
{
    if(n<2)
        return;
    int mid=n/2;
    int left[mid];
    int right[n-mid];
    for(int i=0;i<=mid-1;i++)
    {
        left[i]=arr[i];
    }
    for(int i=mid;i<=n-1;i++)
    {
        right[i-mid]=arr[i];
    }
    mergesort(left,mid);
    mergesort(right,n-mid);
    mergee(left,right,arr,mid,n-mid);
}
int main()
{
     int n ;
    cout<<"Enter the number of elements : ";
    cin>>n;
    int a[n];
for(int i=0;i<n;i++){
    cout<<"Enter the element "<<i+1<<" : ";
    cin>>a[i];
}
  mergesort(a,n);
}