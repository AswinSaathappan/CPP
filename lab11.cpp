//Write a series of C++ statements that will read two strings from the user, and then print them in dictionary order.
/*#include <iostream>
using namespace std;
int main()
{
    string str[10], temp;
    int n;
    cout<<"Enter no of words:";
    cin>>n;
    cout << "Enter words: " << endl;
    for(int i = 0; i < n; i++)
    {
      cin>>str[i];
    }
//Use bubble sort for sorting
  for (int i = 0; i < n-1; i++)
    {
      for (int j = 0; j < n - 1 - i; j++)
          {
            if (str[j] > str[j + 1])
            {
                temp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = temp;
            }
        }
    }

    cout << "In  order: " << endl;

    for(int i = 0; i < n; i++)
    {
       cout << str[i] << endl;
    }
    return 0;
}*/
#include<iostream>
using namespace std;
int main()
{
 string str1,str2;
 cout<<"Enter string 1:";
 cin>>str1; cout<<"\nEnter string 2:";
 cin>>str2; cout<<"\n";
 if(str1>str2)
 {
  cout<<str2<<"\n"<<str1;
 }
 else
{
 cout<<str1<<"\n"<<str2;
}
}
