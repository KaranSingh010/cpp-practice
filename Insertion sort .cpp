//Insertion Sort

/*

Enter the number of element in array : 5
Enter the elements : 4 7 3 1 5
1 3 4 5 7 

*/
# include <iostream>
using namespace std;

int main(){
    int arr[1000];
    int n;
    cout<<"Enter the number of element in array : ";
    cin>>n;
    cout<<"Enter the elements : ";
    
    for( int i =0;i<n;i++){
        cin>>arr[i];
        for (int j=i;j>0;j--){
            if(arr[j]<arr[j-1]){
                swap(arr[j],arr[j-1]);
            }
            else{
                break;
            }
        }
    }
            for(int i=0;i<n;i++){
                cout<<arr[i]<<" ";
        }
    }
    
