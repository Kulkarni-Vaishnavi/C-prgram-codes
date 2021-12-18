#include<iostream>
using namespace std;
struct employee
{
    int eId; 
    char favChar; 
    double salary; 
};
 int main() {
     struct employee abc;
     abc.eId = 1;
     abc.favChar = 'c';
     abc.salary = 120000;
     cout<<"The value is "<<abc.eId<<endl; 
     cout<<"The value is "<<abc.favChar<<endl; 
     cout<<"The value is "<<abc.salary<<endl; 
     return 0;
}