#include<iostream>
using namespace std;
#define max 50
class Matrix
{
	private:
		int mat[max][max];
		int row,col;
	public:
		void acceptMatrix();
		void displayMatrix();
		Matrix()	//Constructor function
		{
			for(int i=0 ; i<max ; i++)
				for(int j=0 ; j<max ; j++)
					mat[i][j]=0;
		}
		Matrix addMatrix(Matrix mat2);
		Matrix subMatrix(Matrix mat2);
		Matrix mulMatrix(Matrix mat2);		
};
void Matrix::acceptMatrix()
{
	cout<<"\nEnter the value of N for N*N Matrix : ";
	cin>>row;
	col=row;
	cout<<"\nEnter Matrix Elements";
	for(int i=0 ; i<row ; i++)
	{	
		for(int j=0 ; j<col ; j++)
		{
			cout<<"\nEnter Element of Row: "<<(i+1)<<" and Column: "<<(j+1)<<"\n";
			cin>>mat[i][j];
		}
	}
}
void Matrix::displayMatrix()
{
	cout<<"Matrix:";
	for(int i=0;i<row;i++)
	{
		cout<<"\n\n";
		for(int j=0;j<col;j++)
			cout<<mat[i][j]<<" ";
	}
}
Matrix Matrix::addMatrix(Matrix mat2)
{
	Matrix temp;
	temp.row=row;
	temp.col=col;
	for(int i=0 ; i<temp.row ; i++)
	{	
		for(int j=0 ; j<temp.col ; j++)
		{
			temp.mat[i][j]=mat[i][j]+mat2.mat[i][j];
		}
	}
	return temp;
}
Matrix Matrix::subMatrix(Matrix mat2)
{
	Matrix temp;
	temp.row=row;
	temp.col=col;
	for(int i=0 ; i<temp.row ; i++)
	{	
		for(int j=0 ; j<temp.col ; j++)
		{
			temp.mat[i][j]=mat[i][j]-mat2.mat[i][j];
		}
	}
	return temp;
}
Matrix Matrix::mulMatrix(Matrix mat2)
{
	Matrix temp;
	temp.row=row;
	temp.col=mat2.col;
	for(int i=0 ; i<temp.row ; i++)
	{	
		for(int j=0 ; j<temp.col ; j++)
		{
			temp.mat[i][j]=0;
			for(int k=0;k<col;k++)
			{
				temp.mat[i][j]+=mat[i][k]*mat2.mat[k][j];
			}
		}
	}
	return temp;
}
int main()
{
	int c;
	Matrix A,B,C;
	do
	{
		cout<<"\n\nMenu\n1.Input Matrices\n2.Addition\n3.Subtraction\n4.Multiplication\n5.Exit\nEnter Choice : ";
		cin>>c;
		switch(c)
		{
			case 1: cout<<"\nEnter First Matrix:\n";
				A.acceptMatrix();
				cout<<"\nEnter Second Matrix:\n";
				B.acceptMatrix();
				break;
			case 2: C=A.addMatrix(B);
				cout<<"\nAddition is:\n";
				C.displayMatrix();
				break;
			case 3: C=A.subMatrix(B);
				cout<<"\nSubtraction is:\n";
				C.displayMatrix();
				break;
			case 4: C=A.mulMatrix(B);
				cout<<"\nMultipliction is:\n";
				C.displayMatrix();
				break;
			case 5: break;
			default:cout<<"You have entered wrong choice";
		}

	}
	while(c!=5);
	return 0;
}
