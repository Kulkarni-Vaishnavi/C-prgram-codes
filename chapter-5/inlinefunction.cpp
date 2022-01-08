#include <iostream>
 
using namespace std;

inline int Max(int x, int y) {
   return (x > y)? x : y; // returns greatest value among those two
}


int main() {
   cout << "Max (20,10): " << Max(20,10) << endl;
   cout << "Max (0,200): " << Max(0,46) << endl;
   cout << "Max (100,1010): " << Max(100,780) << endl;
 
   cout<<"Hello"<<endl;
   
   return 0;
}
