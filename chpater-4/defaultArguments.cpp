#include<iostream>
using namespace std;

int sum(int x, int y, int z = 40, int w = 50){
    return (x+y+z+w);
}
int main(){

    cout<<"sum is: "<<sum(10,15)<<endl;
    cout<<"sum is: "<<sum(10,15,20)<<endl;
    cout<<"sum is: "<<sum(10,15,20,25)<<endl;
    
    return 0;
}