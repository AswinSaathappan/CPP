/*10. Create a base class called shape. Use this class to store two double type values that could be used to  compute the area of figures. Derive two specific classes called triangle and rectangle from the base
shape. Add to the base class, a member function get_data() to initialize base class data members and another member function display_area() to compute and display the area of figure. Make display_area() as a
virtual function and redefine this function in the derived classes to suit their requirements.Use these three classes design a program that will accept dimensions of a triangle or a rectangle interactively,and
 display the area.Remember the two values given as input will be treated as lengths of two sides in the case of rectangles, and base and height in the case of triangles, and used as follows
Area of Triangle=1/2*x*y
Area of rectangle=x*y*/

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


class rectangle:public shape
{
  public:
  void display_area()
  {
    cout<<"Area of Rectangle: "<<dimension1*dimension2<<endl;
  }
};


class triangle:public shape
{
 public:
 void display_area()
 {
   cout<<"Area of traiangle: "<<(dimension1*dimension2)/2.0;
 }
};

int main()
{
  double l,w,b,h;
  cout<<"RECTANGLE:\n\n";
  cout<<"Enter lenght:";
  cin>>l;
  cout<<"\nEnter breadth:";
  cin>>w;
  rectangle r; r.get_data(l,w);

  cout<<"\nTRIANGLE:\n\n";
  cout<<"Enter base:";
  cin>>b;
  cout<<"\nEnter height:";
  cin>>h;
  triangle t;
  t.get_data(b,h);
  cout<<endl;
  r.display_area();
  t.display_area();
}
