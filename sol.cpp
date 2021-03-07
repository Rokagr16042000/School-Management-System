#include<bits/stdc++.h>
using namespace std;
int main(){

   int i;
   cin>>i;
   while(i--){
     int a,b;
     cin>>a>>b;
     int t=a/2;
     while(t){
         if(a/t==b/t){
             break;
         }

         else{
             t+=1;
             continue;
         }

     }
     cout<<t<<endl;

   }

    return 0;
}