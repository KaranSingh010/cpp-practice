/*

Enter the elements of array : 6
Enter the element : 2 4 5  8 10 12
Enter the key : 10
4

*/


# include <iostream>
using namespace std;

int BinarySearch (int arr[],int n,int key){
    int start=0,end=n-1,mid;
    while(start<=end){
        mid=start+(end-start)/2;
        if(arr[mid]==key)
            return mid;
        else if (arr[mid]<key)
            start = mid+1;
        else
            end=mid-1;
        
    }
     return -1;
}

    int main(){
        int arr[1000];
        int n;
        cout<<"Enter the elements of array : ";
        cin>>n;
        cout<<"Enter the element : ";
        
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int key ;
        cout<<"Enter the key : ";
        cin>>key;
    cout<<BinarySearch(arr,n,key);
  
