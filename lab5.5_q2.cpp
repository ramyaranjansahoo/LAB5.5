//printing hollow square star pattern

#include<iostream>
using namespace std;
int main(){
//print stars and spaces
int i;
for (int i=0; i<5; i++){
//print stars in first and end row
if(i==0 || i==4){
for(int i=0; i<5; i++)
cout<<"*";}
//print spaces and stars
else{
//print star
cout<<"*";
//print spaces 
 for (int i=1; i<4; i++)
   cout<<" ";
//print star
cout<<"*";}

cout<<endl;}
return 0;}

