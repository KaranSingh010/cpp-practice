/*

Enter the number :341
143

*/

# include <iostream>
using namespace std;

int main(){
    
    int num;
    cout<<"Enter the number :";
    cin>>num;
    int ans=0,rem;
    while(num>0){
        rem=num%10;
        num/=10;
        ans=ans*10+rem;
    }
    cout<<ans;
    
}
