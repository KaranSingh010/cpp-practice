/*

Enter the size of array : 5
Enter the elements : 4 8 10 1 2
Minimum Element : 1

*/

#include<iostream>
using namespace std;

int main(){

    int arr[1000];
    int n;

    cout<<"Enter the size of array : ";
    cin>>n;

    cout<<"Enter the elements : ";

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int ans=arr[0];
    int start=0;
    int end=n-1;

    while(start<=end){

        int mid=start+(end-start)/2;

        if(arr[mid]>=arr[0]){
            start=mid+1;
        }
        else{
            ans=arr[mid];
            end=mid-1;
        }
    }

    cout<<"Minimum Element : "<<ans;

    return 0;
}
