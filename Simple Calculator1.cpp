/*

Enter the input a : 13
Enter the input b : 11
Enter the Operation :*
143

*/

# include <iostream>
using namespace std;

int main(){
    
    int a,b;
    cout<<"Enter the input a : ";
    cin>>a;
    cout <<"Enter the input b : ";
    cin>>b;
    
    char op;
    cout<<"Enter the Operation :";
    cin>>op;
    
    switch(op){
        case '+':cout<<a+b<<endl;
        break;
        case '-':cout<<a-b<<endl;
        break;
        case '*':cout<<a*b<<endl;
        break;
        case '%':cout<<a%b<<endl;
        break;
        case '/' :cout<<a/b<<endl;
        break;
        default : "Invalid Operation";
        break;
          
    }
    
}
