/*

Enter the size of array : 6
Enter the elements : 2 3 4 7 11 12
Enter k : 5
The 5th missing positive integer is : 9

*/
#include<iostream>
using namespace std;

int main()
{
    int arr[1000];
    int n;

    cout<<"Enter the size of array : ";
    cin>>n;

    cout<<"Enter the elements : ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int k;
    cout<<"Enter k : ";
    cin>>k;

    int start=0,end=n-1;
    int ans=n;

    while(start<=end)
    {
        int mid=start+(end-start)/2;

        if(arr[mid]-mid-1>=k)
        {
            ans=mid;
            end=mid-1;
        }
        else
        {
            start=mid+1;
        }
    }

    cout<<"The "<<k<<"th missing positive integer is : "<<start+k;

    return 0;
}
