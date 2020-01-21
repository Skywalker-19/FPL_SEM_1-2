#include<stdio.h>
union tag
{
int p_cost;
char d_name[20];
};
struct lib
{
int acc_no;
char title[30];
int edition;
char author[30];
int d;
union tag u;
};
int main()
{
int i,n,t,count=0;
printf("Enter the no of book records \n");
scanf("%d",&n);
struct lib l[n];
printf("Enter the book details \n");

for(i=0;i<n;i++)
{
fflush(stdin);
printf("Accession Number\n");
scanf("%d",&l[i].acc_no);
fflush(stdin);

printf("Title\n");
scanf("%s",l[i].title);
fflush(stdin);

printf("Edition \n");
scanf("%d",&l[i].edition);
fflush(stdin);

printf("Author \n");
scanf("%s",l[i].author);
fflush(stdin);

printf("Enter 1 for purchased book and 2 for donated book\n");
scanf("%d",&l[i].d);
//fflush(stdin);
if(l[i].d==1)
{
printf("Enter the cost\n");
scanf("%d",&l[i].u.p_cost);
}
else
{
printf("Enter the donor name\n");
scanf("%s",&l[i].u.d_name);
fflush(stdin);
}
}
printf("Purchased Books\n");
for(i=0;i<n;i++)
{
if(l[i].d==1)
{
printf("%s \t %d \n",l[i].title,l[i].u.p_cost);
}
}
printf("Donated Books\n");
for(i=0;i<n;i++)
{
if(l[i].d==2)
{
printf("%s \t %s \t ",l[i].u.d_name,l[i].title);
printf("%d \n",l[i].u.p_cost);
}
}
}


