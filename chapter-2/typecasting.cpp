#include<iostream> 

using namespace std;

int c = 20;

int main(){
    
   
    int a = 10;   
    float b = 75.48;
    cout<<"The value of a is "<<(float)a<<endl; // typecasting int to float
    
    // float to int
    cout<<"The value of b is "<<(int)b<<endl; 
    
    int c = int(b);

    cout<<"The sum is "<<a + b<<endl;
    cout<<"The sum is "<<a + int(b)<<endl;
   


    return 0;
}
