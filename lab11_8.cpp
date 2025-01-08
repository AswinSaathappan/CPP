/*8. Create your own namespace and access the members and methods from the namespace without using ‘using keyword.*/
#include<iostream>
using namespace std;
namespace shape
{
	 class shape
	 {
	 	protected:
	 	float dimension;
	 	public:
	 		void getdimension()
	 		{
	 			cout<<"Enter dimension:";
	 			cin>>dimension;
			}
			virtual float area()=0;//pure virtual function
	 };
	 
	 class square:public shape
	 {
	 	public:
	 	float area()
	 	{
	 		return dimension*dimension;
		}
	 };
	 
	 class circle:public shape
	 {
	 	public:
	 		float area()
	 		{
	 		   return 3.14*dimension*dimension; 	
			}
	 };
}
using namespace shape;
int main()
{
	square s;
	cout<<"SQUARE:"<<'\n';
	s.getdimension();
	cout<<"Area of square is "<<s.area()<<std::endl;
	
	circle c;
	cout<<"CIRCLE:"<<'\n';
	c.getdimension();
	cout<<"Area of circle is "<<c.area();
}
	

