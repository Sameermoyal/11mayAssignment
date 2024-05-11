//1. Write a function that accepts 3 variables and a function as an argument, which helps you perform calculations like addition, subtraction, and multiplication.

#include<bits/stdc++.h>
using namespace std;

int sum(int &a,int &b,int &c){
    return a+b+c;
}

int sub(int &a,int &b,int &c){
    return(a-b)-c;
}

int mul(int &a,int &b,int &c){
    return (a*b)*c;
}
int calculation(int (*operation)(int&,int&,int&),int &a,int &b,int &c){
    return operation(a,b,c);
}
   

int main(){
    int a=5,b=3,c=1;
  cout<<"addition : "<<calculation(sum,a,b,c)  ;
   
   
   
  cout<<" subtraction : "<<calculation(sub,a,b,c)<<endl;
   
   
   
  cout<<" multiplication : "<<calculation(mul,a,b,c);
   
   
   
   
}


