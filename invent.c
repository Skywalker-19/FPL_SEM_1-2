#include<stdio.h>
struct myDate
{
int day;
int month;
int year;
};
struct details
{
int itemno;
char name[20];
char cat[20];
int price;
int qty;
struct myDate d;
}item[50];

int n,i;

void main()
{
printf("Enter number of items to be entered\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("Item Number\n");
scanf("%d",&item[i].itemno);
fflush(stdin);

printf("Item Name\n");
scanf("%s",&item[i].name);
fflush(stdin);

printf("Item Category\n");
scanf("%s",&item[i].cat);
fflush(stdin);

printf("Quantity\n");
scanf("%d",&item[i].price);
fflush(stdin);

printf("Unit Price\n");
scanf("%d",&item[i].qty);
fflush(stdin);

printf("Manufacturing date (DD-MM-YYYY)\n");
scanf("%d-%d-%d",&item[i].d.day,&item[i].d.month,&item[i].d.year);
fflush(stdin);
}
printf("   *****INVENTORY*****   \n");
printf("--------------------------------\n");
printf("S.N | ITM NUMBER | ITM NAME | ITM CAT | QUANTITY | PRICE | MFG. DATE \n");
for(i=0;i<n;i++)
{
printf("%-5d %-10d   %-10s\t %-10s   %-3d   %-5d   %d/%d/%d\n",i+1,item[i].itemno,item[i].name,item[i].cat,item[i].price,item[i].qty,item[i].d.day,item[i].d.month,item[i].d.year);
}
printf("-------------------------------------------------\n");
}




