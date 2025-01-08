/*7. Create your own namespace and access the members and methods from the namespace without using ‘using keyword.*/

#include<iostream>
namespace shape
{
	 class shape
	 {
	 	protected:
	 	float dimension;
	 	public:
	 		void getdimension()
	 		{
	 			std::cout<<"Enter dimension:";
	 			std::cin>>dimension;
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

int main()
{
	shape::square s;
	std::cout<<"SQUARE:"<<'\n';
	s.getdimension();
	std::cout<<"Area of square is "<<s.area()<<std::endl;
	
	shape::circle c;
	std::cout<<"CIRCLE:"<<'\n';
	c.getdimension();
	std::cout<<"Area of circle is "<<c.area();
}
	

