/*

Enter the Year : 1600
Leap Year 

*/

# include <iostream>
using namespace std;
int main(){
    int N;
    cout <<"Enter the Year : ";
    cin>>N;
    if(N%400==0){
        cout<<"Leap Year ";
    }
    else if (N%4==0&&N%100!=0){
           cout<<"Leap Year ";
    }
    else {
        cout <<"Not a Leap Year ";
    }
    
}
