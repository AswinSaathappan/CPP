/*11. Extend the above program to display the area of circles. This requires addition of a new derived class 'circle' that computes the area of a circle. Remember, for a circle we need only one value, its radius, but the get_data() function in the base class requires two values to be passes.(Hint: Make the second argument of get_data() function as a default one with zero value)*/

#include<iostream>
using namespace std;

class shape
{
  protected:
  double dimension1;
  double dimension2;

  public:
  void get_data(double x,double y=0)
  {
    dimension1=x;
    dimension2=y;
  }
  virtual void display_area()=0;//pure virtual function
};

class circle:public shape
{
 public:
 void display_area()
 {
   cout<<"Area of  circle: "<<(3.14)*dimension1*dimension1;
 }
};

int main()
{
  double r;
  cout<<"Enter radius of circle:";
  cin>>r;
  circle c;
  c.get_data(r);
  c.display_area();
 }
