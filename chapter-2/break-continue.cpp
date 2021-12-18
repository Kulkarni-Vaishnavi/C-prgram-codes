#include<iostream>
using namespace std;
int main(){
    int i;
//break statement
  for(i = 0; i<10; i++){
      if(i == 5)
        continue; // doesn't print when i=5 and directly it increments the i value
      if(i == 7)
        break;    // comes out of for loop when i=7 and doesn't print remaing values
      cout<<i<<" ";
  }

}