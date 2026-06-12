/*

Enter the number : 66
Single digit sum : 3

*/

# include <iostream>
using namespace std;

int main (){
   int num;
   cout<<"Enter the number : ";
   cin >> num;
   
   while(num>9)
   {
       int rem,ans=0;
       while(num>0){
           rem=num%10;
           num/=10;
           ans+=rem;
       }
       num=ans;
   }
   cout<<"Single digit sum : "<<num;
   
}
