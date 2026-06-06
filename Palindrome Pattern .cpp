/*
Enter the Input : 5
 
 Output:
 
        1 
      1 2 1 
    1 2 3 2 1 
  1 2 3 4 3 2 1 
1 2 3 4 5 4 3 2 1 


*/
# include <iostream>
using namespace std;

int main (){
    int row,col,n;
    cout<<"Enter the Input : ";
    cin>> n;
    for ( row =1;row<=n;row++){
        // Space
        for (col= 1;col<=n-row;col++){
            cout<<"  ";

        }
        //Increasing No.
        for (col=1;col<=row;col++){
            cout<<col<< " ";

        }
        //Decreasing No.
        for (col=(row-1);col>=1;col--){
            cout<<col<<" ";
        }
        cout<<endl;
    }
}
