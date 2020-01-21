#include<stdio.h>
struct bank
{
int accno;
char name[20];
int balance;
int internet_fac;
int pin;
int acc_type;
};
int main()
{
struct bank b[50],temp;
int i,j,n,count=0;
printf("Enter the no. of Customer bank accounts \n");
scanf("%d",&n);
for(int i=0;i<n;i++)
{
printf("CUSTOMER %d\n",(i+1));
printf("Enter the bank account number\n");
scanf("%d",&b[i].accno);
printf("Enter the name of account holder\n");
scanf("%s",&b[i].name);
printf("Enter the balance\n");
scanf("%d",&b[i].balance);
printf("Enter 1 if internet facility is available and 2 if not\n");
scanf("%d",&b[i].internet_fac);
printf("Enter pin\n");
scanf("%d",&b[i].pin);
printf("Enter 3 if savings 4 if reccuring 5 if deposit account\n");
scanf("%d",&b[i].acc_type);
}

printf("***List of customer as a GOlden,Silver,General ***\n");
for( i=0;i<n;i++)
{
if(b[i].balance>=1000000)
{
printf("The customer is Golden Customer\n");
}
else if(b[i].balance<=1000000 &&b[i].balance>=500000)
{
printf("The Customer is Silver customer\n");
}
else
{
printf("The Customer is General Customer\n");
}
}
printf("***List of Customers who have Internet Banking Facility ***\n");
for( i=0;i<n;i++);
{
if(b[i].internet_fac==1)
{
printf("%d\t%s\t%d\t%d\t%d\t%d\n",b[i].accno,b[i].name,b[i].balance,b[i].internet_fac,b[i].pin,b[i].acc_type);
}
}
printf("***List of Customers according to their Account Type***\n");
for( i=0;i<n;i++)
{
printf("Savings account holders:-\n");
if(b[i].acc_type==3)
{
printf("%d\t%s\t%d\t%d\t%d\t%d\n",b[i].accno,b[i].name,b[i].balance,b[i].internet_fac,b[i].pin,b[i].acc_type);
}
}
for( i=0;i<n;i++)
{
printf("Reccuring account holders:-\n");
if(b[i].acc_type==4)
{
printf("%d\t%s\t%d\t%d\t%d\t%d\n",b[i].accno,b[i].name,b[i].balance,b[i].internet_fac,b[i].pin,b[i].acc_type);
}
}
for(i=0;i<n;i++)
{
printf("Deposit account holders:-\n");
if(b[i].acc_type==5)
{
printf("%d\t%s\t%d\t%d\t%d\t%d\n",b[i].accno,b[i].name,b[i].balance,b[i].internet_fac,b[i].pin,b[i].acc_type);
}
}

printf("*** Sorting of Bank Accounts according to their PostalCode*** \n");
for( i=0;i<n-1;i++)
{
for( j=i+1;j<n;j++)
{
if(b[i].pin>b[j].pin)
{
temp=b[i];
b[i]=b[j];
b[j]=temp;
}
}
}
for( i=0;i<n;i++)
{
printf("%d\t%s\t%d\t%d\t%d\t%d\n",b[i].accno,b[i].name,b[i].balance,b[i].internet_fac,b[i].pin,b[i].acc_type);
}
return 0;
}



