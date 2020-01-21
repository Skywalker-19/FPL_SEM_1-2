#include<iostream>
using namespace std;
class matrix
{
private:
int mat[max][max];
int row,col;
public:
void acceptMatrix();
void displayMatrix();
matrix()
{
for(int i=0;i<max;i++)
for(int j=0;j<max;j++)
mat[i][j]=0;
}
matrix addMatrix(matrix mat2);
matrix subMatrix(matrix mat2);
matrix mulMatrix(matrix mat2);
};

void matrix ::acceptMatrix()
{
cout<<"\nEnter Number of Rows :";
cin>>row;
cout<<"\nEnter Number of Columns :";
cin>>col;
cout<<"\nEnter Matrix Elements :";
for(int i=0;i<row;i++)
for(int j=0;j<col;j++)
cin>>mat[i][j];
}

void matrix::displayMatrix()
{
cout<<"\nMatrix : ";
for(int i=0;i<row;i++)
{
cout<<"\n\n";
for(int j=0;j<col;j++)
cout<<mat[i][j]<<" ";
}
}

matrix matrix::addMatrix(matrix m2)
{
matrix temp;
temp.row=row;
temp.col=col;
for(int i=0;i<temp.row;i++)
{
for(int j=0;j<temp.col;j++)
{
temp.mat[i][j]=mat[i][j]+m2.mat[i][j];
}
}
return temp;
}

matrix matrix::subMatrix(matrix m2)
{
matrix temp;
temp.row=row;
temp.col=col;
for(int i=0;i<temp.row;i++)
{
for(int j=0;j<temp.col;j++)
{
temp.mat[i][j]=mat[i][j]-m2.mat[i][j];
}
}
return temp;
}

matrix matrix::mulMatrix(matrix m2)
{
matrix temp;
temp.row=row;
temp.col=m2.col;
for(int i=0;i<row;i++)
{
for(int j=0;j<m2.col;j++)
{
temp.mat[i][j]=0;
for(int k=0;k<col;k++)
{
temp.mat[i][j]+=mat[i][k]*m2.mat[k][j];
}
}
}
return temp;
}






