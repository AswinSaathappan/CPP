/*lab5. Create a class called STRING with a character array as data member. Write a non 

member overloaded function overload == operator to compare two objects of STRING */ 
#include <iostream>
#include <cstring>
using namespace std;
class STRING{
    char str[50];
    public:
    STRING(char str[])
    {
        strcpy(this->str, str);
        str[sizeof(this->str)-1] = '\0';
    }
    friend bool operator == (STRING s1, STRING s2)
    {
        return (strcmp(s1.str ,s2.str)== 0 );
    }
    
};

int main(){
    char str1[50], str2[50];
    cout<<"Enter string 1:";
    //cin.ignore();
    cin.get(str1,50);
    cin.ignore();
    cout<<"Enter string 2:";
    //cin.ignore();
    cin.get(str2,50);
    cin.ignore();
    STRING s1 (str1);
    STRING s2 (str2);
    if (s1 == s2)
    cout<<"Both strings are equal";
    else
    cout<<"Not equal";
    
}
