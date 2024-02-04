#include<iostream>
using namespace std;
int main(){
    // Break
   for (int i = 0; i < 100; i++)
   {
     if (i==12){
        break;          // When the expression is matched it elimate the loop..
     }
    cout<<i<<endl;     
   }

    // Continue
   for (int a = 0; a < 100; a++)
   {
     if (a==12){
        continue;         // When the expression is matched it skips the value and continue to next value..
     }
    cout<<a<<endl;
     
   }
   cout<<"Out of for loop";
    return 0;
}
