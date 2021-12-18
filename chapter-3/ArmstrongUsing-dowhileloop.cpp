#include<iostream>
using namespace std;

int main(){
    int n=153;
    int d,sum=0,r;
    r = n;
    do{
        d = n % 10;
        sum = sum + (d*d*d);
        n = n/10;
    }while( n != 0);
    if(sum == r)
      cout<<"It is Armstrong"<<endl;
    else
     cout<<"It is not an Armstrong"<<endl;

     return 0;
}