/*

Enter the number : 121
plaindrome 

*/

#include<iostream>
#include<climits>
using namespace std;
int main(){
    
    int num,ans=0,rem;
    cout<<"Enter the number : ";
    cin>>num;
    
    while(num){
        rem=num%10;
        num/=10;
        if (ans>INT_MAX/10){
        return 0;
        ans*=10+rem;
    }
    }
    if(num==ans){
        cout<<"plaindrome ";
        
    }
   else {
    cout<<"Not plaindrome ";
    
}
cout<<endl;
}
