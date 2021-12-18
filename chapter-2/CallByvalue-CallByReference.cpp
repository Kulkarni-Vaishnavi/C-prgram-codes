#include<iostream>
using namespace std;

//function prototype
void modify(int n);
void modify1(int *n);
int main(){
   int n = 5;
   modify(n); // passing argument by value
   cout<<"value of n after passing by value: "<<n<<endl;
   modify1(&n);
   cout<<"value of n after passing by Reference: "<<n<<endl;

   return 0;
}

void modify(int n){
    n = 10;
}

void modify1(int *n){
    *n = 10;
}