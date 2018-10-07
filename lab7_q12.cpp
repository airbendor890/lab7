#include<iostream>
using namespace std;

/* programm to find hcf of two numbers using recursion
hcf is the heighest number which devides both numbers under
study
*/

int hcf(int a,int b,int temp)
{ if(temp==0)
	{
	  if(a>b)
	  temp=b;
	  else
	  temp=a;
	  hcf(a,b,temp);
	}
  else
	{ if(a%temp==0 && b%temp==0)
		{return temp;}
	  else
		temp--;
	   hcf(a,b,temp);

	}
}
/////DRIVER
int main()
{  int hcf(int a,int b,int temp); 
	int a,b,l;
	cout<<"\n give two nos for finding hcf"<<endl;
	cout<<"number 1 = ";cin>>a;cout<<endl;
	cout<<"number 2 = ";cin>>b;cout<<endl;
	l=hcf(a,b,0);
	cout<<"hcf("<<a<<","<<b<<") =  "<<l<<endl;

	return 0;
}

