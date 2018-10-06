/*c++ programm to find sum of all odd natural numbers beetwen c to n

*/
#include<iostream>
using namespace std;
int sum(int c,int n)
{  if(c<=n)
	{       if(c%2!=0)
		return c+sum(c+1,n);
		else
		return 0+sum(c+1,n);
		
	}
   else
   return 0;

}

///DRIVER

int main()
{	int sum(int c,int n);	 
	int res,c,n;
	cout<<"give the limits betn which u want to find the sum of all odd natural nos"<<endl;
	cin>>c;
	cin>>n;
	res=sum(c,n);

	cout<<"the sum of all odd natural nos betwen "<<c<<" to "<< n<< " is"<<endl;
	cout<<res;
	cout<<endl;


return 0;
}

