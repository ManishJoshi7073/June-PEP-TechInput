o#include<bits/stdc++.h>
#include<iostream>
using namespace std;
class matrix
{
    vector<vector<int> >mat; //2d vector
public:
    matrix(int a=0)
    {
        mat=vector<vector<int> >(10,vector<int>(10,a));
    }

    void display()
    {
        for(int i=0;i<this->mat.size();i++)
        {
            for(int j=0;j<this->mat.size();j++)
            {
                cout<<this->mat[i][j]<<" ";
            }
        }
    }
    matrix operator +(matrix m)
    {
        matrix res;

        for(int i=0;i<mat.size();i++)
        {
            for(int j=0;j<mat.size();j++)
            {
                res.mat[i][j]=mat[i][j]+m.mat[i][j];
            }
        }
    }
};
int main()
{
    matrix m1(5);
    matrix m2(6);
    matrix res=m1+m2;
    res.display();
    vector<int>v(5,10);
}
