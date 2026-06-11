/*

Reversed Array : 7 1 2 8 9 

*/

# include <iostream>
using namespace std;

int main (){
    int i=0,j=4;
    int arr[5]={9,8,2,1,7};
    cout<<"Reversed Array : ";
    
    while(i<j)
    {
        swap(arr[i],arr[j]);
        i++;
        j--;
    };
    for(i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    
    }
