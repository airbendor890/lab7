/*c++ programm to find power of any number

power(a,b)= a*a*a*a..........(b times)
so recursion has to occur b times
*/
#include<iostream>
using namespace std;

int power(int a,int b)
{  if(b>=1)
	{ return a*power(a,b-1);

	}
   else
	return 1;
}


////DRIVER

int main()
{ cout<<"give the number and the power to which it is to be raised";
  	int a,b,c;

  cout<<"\n number =  ";cin>>a;
  cout<<"\n power =   ";cin>>b;
	c=power(a,b);		//calling power function
  cout<<"\n "<<a<<" to the power "<<b<<" is "<<c<<endl;	

}
