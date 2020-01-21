
#include<iostream>
using namespace std;
class electricity{
protected:
float unit;
float cost;
float calcost;
float charge;
float diff;
float servicecharge;
public:
electricity()
{
cost=0.0; 
calcost=0.0;
charge=0.0;
diff=0.0;
servicecharge=75;
}
void acceptunits();
void calfinalbill();
void displaybill();
};
void electricity::acceptunits()
{
cout<<"\n Enter no. of units consumed: ";
cin>>unit;
}
void electricity::calfinalbill()
{
if (unit<=100)
{
cost=0.9*unit;
cout<<"cost upto 100 units is Rs." <<cost<<endl;
}
else 
{
 if (unit<=200)
{
cost=1*unit;
}
else
{
cost=1.3*unit;
}
}
calcost=cost;
cost=cost+servicecharge;
if(cost>250.00)
{
diff=cost-250;
charge=diff*0.15;
cost=cost+charge;
}
}
void electricity::displaybill()
{
cout<<"---------------------------------------"<<endl;
cout<<"        My Electricity Bill       "<<endl;
cout<<"---------------------------------------"<<endl;
cout<<"\n Units consumed : "<<unit<<endl;
cout<<"\n Difference:  "<<diff<<endl;
cout<<"---------------------------------------"<<endl;
cout<<"\n Cal. Bill cost(+) : "<<calcost<<endl;
cout<<"\n Service Charge(+) : "<<servicecharge<<endl;
cout<<"\n SurCharge(+) : "<<charge<<endl;
cout<<"---------------------------------------"<<endl;
cout<<"\n Total Bill Amount(Rs) \t : "<<cost<<endl;
cout<<"---------------------------------------"<<endl;
}
int main()
{
electricity elect;
elect.acceptunits();
elect.calfinalbill();
elect.displaybill();
return 0;
}
