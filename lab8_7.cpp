
#include<iostream>
using namespace std;

class MATRIX {
 
 float *mat;// pointy to 1D array representing 2D
 int M;
 int N;
 
 public:
 MATRIX()
 :mat(NULL), M(0), N(0)
 {}
 
 MATRIX(int m, int n)
 :M(m),N(n)
 {
   mat = new float [M*N]; // Allocate momory for 2D matrix
 }

 /*~MATRIX()
 {
  delete[] mat;
 }*/

float *getmat()
{
return mat; 
}

void input()
{
  for (int i=0;i<M;i++)
  {
    for (int j=0;j<N;j++)
    {
      cout<<"mat["<<i<<"]["<<j<<"]:";
      cin>>mat[i*N+j];
    }
  }
}

void output()
{
  for (int i=0;i<M;i++)
  {
    for (int j=0;j<N;j++)
    {
      cout<<mat[i*N+j] << " ";
    }
      cout << endl;
  }
}
    
MATRIX operator + (MATRIX m2)
{
  if(M==m2.M && N==m2.N)
  {
  	MATRIX add(M,N);
	for(int i=0;i<M;i++)
    {
      for(int j=0; j<N;j++)
      {
       add.mat[i*N+j]=mat[i*N+j]+m2.mat[i*N+j];
      }
   }
   return add;
 }
 else
 {
  cout<<"Matrix addition can't be computed";
 }
}

MATRIX operator- (MATRIX m2)
{
  if(M==m2.M  && N==m2.N)
  {
  	MATRIX result(M,N);
  	float sub=0.0;
    for(int i=0;i<M;i++)
    {
     for(int j=0;j<N;j++)
     {
     	sub=mat[i*N+j]-m2.mat[i*N+j];
     	result.getmat()[i*N+j]=sub;
	 }
    }
    return result;
 }
 else
 {
  cout<<"Matrix subtraction can't be computed";
 }
}
 
 friend MATRIX operator * (MATRIX m1,MATRIX m2)
 {
 	if(m1.N==m2.M)
 	{
 		MATRIX mul(m1.N,m2.M);//Dimension of resulting matrix
	    for(int i=0;i<m1.M;i++)
	    {
	    	for(int j=0;j<m2.N;j++)
	    	{
	    		mul.mat[i*mul.N+j]=0;
	    		for(int k=0;k<m1.N;k++)
	    		{
	    			mul.mat[i*mul.N+j]+=m1.mat[i*m1.N+k]*m2.mat[k*m2.N+j];
				}
			}
		}
		return mul;
 	}
 	
 	 else
    {
  cout<<"Matrix multiplication can't be computed";
    }
}
};

int main()
{
	MATRIX m1(2,2);
	MATRIX m2(2,2);
	
	m1.input();
    cout<<"\nMATRIX 1:\n";
	m1.output();
	
	m2.input();
    cout<<"\nMATRIX 2:\n";
	m2.output();
	
	MATRIX m3=m1+m2;
	cout<<"\nADDITION OF MATRICES :\n";
	m3.output();
	
    MATRIX m4=m1-m2;
	cout<<"\nSUBTRACTION OF MATRICES :\n";
	m4.output();
	
	MATRIX m5=m1*m2;
	cout<<"\nMATRIX MULTIPLICATION :\n";
	m5.output();
	 
	return 0;
}
