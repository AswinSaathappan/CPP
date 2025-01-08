#include <iostream> 
using namespace std; 
  
class first { 
public: 
    first() 
    { 
        cout<<"Hello from first class\n"; 
    } 
}; 
  
/*Container class*/ 
class second { 
    /*creating object of first*/ 
    first f; 
  
public: 
    second() 
    { 
        cout << "Hello from second class\n"; 
    } 
}; 
  
int main() 
{ 
    /*creating object of second*/ 
    second s; 
} 
