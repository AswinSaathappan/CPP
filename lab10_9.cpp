/*7. Write a C++ program to declare matrix class which has data member integer array as 3 x 3. Derive class
matrix A from class matrix and matrix B from matrix A. All these classes should have a function show
() to display the contents. Read and display the elements of all the three matrices.*/

#include<iostream>
using namespace std;

class Matrix
{
	protected:
		int *array;
		int m;//rows
		int n;//columns
	public:
		Matrix()
		{
			m=0;
			n=0;
		}
		Matrix(int m,int n)
		:m(m),n(n)
		{
			array=new int[m*n];
		}
		~Matrix()
		{
			delete[] array;
		}
		
	void readmatrix()
	{
	    for(int i=0;i<m;i++)
		{
			for(int j=0;j<n;j++)
			{
				cin>>array[i*n+j];
			}
		 }
	}
	void show()
 	{
 	  cout<<"\nMATRIX 1:\n";
	  for(int i=0;i<m;i++)
	  {
		for(int j=0;j<n;j++)
		{
		  cout<<array[i*n+j]<<"  ";
	    }
	    cout<<"\n";
	  }
	}
};

class matrixA:public Matrix
{
	public:
	matrixA(int m,int n)
	:Matrix(m,n)
	{ }
	
	
	void show()
	{
		cout<<"\nMATRIX 2:\n";
		for(int i=0;i<m;i++)
		{
			for(int j=0;j<n;j++)
			{
				cout<<array[i*n+j]<<"  ";
			}
			cout<<"\n";
		}
	}
};

class matrixB:public Matrix
{
	public:
		matrixB(int m,int n)
		:Matrix(m,n)
		{ }
	
	void show()
	{
		cout<<"\nMATRIX 3:\n";
		for(int i=0;i<m;i++)
		{
			for(int j=0;j<n;j++)
			{
				cout<<array[i*n+j]<<"  ";
			}
			cout<<"\n";
		}
	}
};

int main()
{
    Matrix* m[3];

    m[0]=new Matrix(3, 3);
    m[1]=new matrixA(3, 3);
    m[2]=new matrixB(3, 3);

    for(int i=0;i<3;i++) {
        cout<<"Enter the elements of matrix "<<i+1<<":\n";
		m[i]->readmatrix();
    }

    for (int i = 0; i < 3; i++) {
        m[i]->show();
    }
    for (int i = 0; i < 3; i++) {
        delete m[i];
    }

    return 0;
}
