/*c++ programm to find sum of all natural numbers beetwen 1 to n

*/
#include<iostream>
using namespace std;
int sum(int c,int n)
{  if(c<=n)
	{ return c+sum(c+1,n);
	}
   else
   return 0;

}

///DRIVER

int main()
{	int sum(int c,int n);	 
	int res,c,n;
	cout<<"give the limit to which u want to find the sum"<<endl;
	cin>>n;
	res=sum(1,n);

	cout<<"the sum of all natural nos betwen 1 to "<< n<< " is"<<endl;
	cout<<res;
	cout<<endl;



}

