/*
Enter the Input : 5

Output :

* * * * * * * * * 
  * * * * * * * 
    * * * * * 
      * * * 
        * 
        
*/
# include <iostream>
using namespace std;

int main (){
    int row,col,n;
    cout<<"Enter the Input : ";
    cin>> n;
    for ( row =1;row<=n;row++){
        // Space
        for (col= 1;col<=row-1;col++){
            cout<<"  "; 
        }  
        for (col=1;col<=9-2*(row-1);col++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
