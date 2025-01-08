#include <iostream>
#include<cstdlib>
using namespace std;

class MATRIX
{
protected:
    double *mat;
    int m;
    int n;

public:
    MATRIX():m(0),n(0),mat(NULL) {}

    MATRIX(int m, int n) : m(m), n(n)
    {
        mat=new double[m*n]; // Allocate memory for the 2D matrix
    }

    /*~MATRIX()
    {
        delete[] mat;
    }*/

    void input()
    {
        for (int i=0;i<m;i++)
        {
            for (int j=0;j<n;j++)
            {
                cout<<"mat["<<i<<"]["<<j<<"]:";
                cin>>mat[i*n+j];
            }
        }
    }

    void output()
    {
        for (int i=0;i<m;i++)
        {
            for (int j=0;j<n;j++)
            {
                cout<<mat[i*n+j] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
};

class MAT : public MATRIX
{
public:
    MAT()
	:MATRIX() 
	{}

    MAT(int m,int n) 
	:MATRIX(m,n) 
	{}

    MAT operator*(MAT m2) 
    {
        if (n!= m2.m)
        {
            cout << "Incompatible dimensions for multiplication" << endl;
            return MAT();
        }
        else {
        MAT result(m, m2.n);

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < m2.n; j++) {
                double sum = 0;
                for (int k = 0; k < n; k++) {
                    sum += mat[i * n + k] * m2.mat[k * m2.n + j];
                }
                result.mat[i * result.n + j] = sum;
            }
        }
        return result;
    }
    }
};

int main()
{
    MAT m1(3, 2);
    MAT m2(2, 3);

    cout<<"Enter elements for matrix 1:"<<endl;
    m1.input();

    cout<<"Enter elements for matrix 2:"<<endl;
    m2.input();

    cout<<"MATRIX 1:"<<endl;
    m1.output();

    cout<<"MATRIX 2:"<<endl;
    m2.output();

    MAT m3=m1*m2;

    cout<<"MULTIPLICATION OF MATRICES:"<<endl;
    m3.output();

    return 0;
}

