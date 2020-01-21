#include<iostream>
using namespace std;
class company
{
private:
char name[20];
long mobile;
float parcelwt;
float charge,calCharge,servicetax;

public:
company()
{
parcelwt=0.0;
charge=0.0;
calCharge=0;
servicetax=0;
}
void acceptWeight();
void calFinalCharge();
void displayCharges();
};
void company::acceptWeight()
{
cout<<"\n Enter Customer Name :- ";
cin>> name;
cout<<"\n Enter Mobile No. :- ";
cin>>mobile;
cout<<"\n Enter Parcel Weight in Kg :- ";
cin>>parcelwt;
}
void company::calFinalCharge()
{
if(parcelwt<=15)
charge=parcelwt*20;
else if(parcelwt<=35)
charge=(15*20)+((parcelwt-15)*10);
else if(parcelwt<=55)
charge=(15*20)+(20*10)+((parcelwt-35)*8);
else
charge=(15*20)+(20*10)+(20*8)+((parcelwt-55)*5);

servicetax=charge*0.12;
calCharge=charge+servicetax;
}

void company::displayCharges()
{
cout<<"----------------------------------------------"<<endl;
cout<<"           XYZ TRANSPORT COMPANY              "<<endl;
cout<<"----------------------------------------------"<<endl;
cout<<"\nCustomer Name\t  :-"<<name<<endl;
cout<<"\nMobile \t :- "<<mobile<<endl;
cout<<"\nParcel Weight in KG \t :- "<<parcelwt<<endl;
cout<<"----------------------------------------------"<<endl;
cout<<"\nCharge Calculated (+)(Rs.)\t:- "<<charge<<endl;
cout<<"\nService Tax 12% (+)(Rs.)\t:- "<<servicetax<<endl;
cout<<"----------------------------------------------";
cout<<"\nTotal Charge Amount (Rs.)\t:- "<<calCharge<<endl;
cout<<"----------------------------------------------"<<endl;
}

int main()
{
company xyz;
xyz.acceptWeight();
xyz.calFinalCharge();
xyz.displayCharges();
return 0;
}

