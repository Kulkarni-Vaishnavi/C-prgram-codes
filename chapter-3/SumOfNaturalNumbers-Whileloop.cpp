#include<iostream>
using namespace std;
int main(){
    int i = 1,n, sum = 0;
    cout<<"Enter n value: ";
    cin>>n;
    while(i<=n){
        sum = sum + i;
        i++;
    }
     cout<<"sum is: "<<sum;
    return 0;
}