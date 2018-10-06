/* c++ programm to find sum of digits of a number using recursion

*/

#include<iostream>
using namespace std;

int sod(int n,int sum)
{ if(n>0)
	{ int temp=n%10;
		sum=sum+temp;
		sod(n/10,sum);		

	}
	else
	return sum;

}

///DRIVER
int main()
{	int sod(int n,int sum); 

int n,sum=0;
  cout<<"give the no of which u want to find the sum of its digits    ";
	cin>>n;
	int k=sod(n,sum);

	cout<<"\n the sum of its digits is    "<<k<<endl;

return 0;

}
