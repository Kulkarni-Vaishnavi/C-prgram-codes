#include<iostream>
using namespace std;
//initializing global variable
int a = 10;
void display(){
    int b;
    cout<<a<<endl;
}
int main(){
    int a=20;
    a = 30;
    display();
    cout<<a<<endl;

    return 0;

}