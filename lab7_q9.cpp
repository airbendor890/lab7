/* c++ programm to find  factorial of a given number

*/
#include<iostream>
using namespace std;

int factorial(int n,int m)

{  if(n>=1)
	{ m=m*n;
		factorial(n-1,m);

	}
	else
	return m;

}

//DRIVER

int main()
{int factorial(int n,int m);
	int n,k,m=1;
	cout<<"give number of which u want to find factorial	";
	cin>>n;
	cout<<endl;
	k=factorial(n,m);
	cout<<n<<" factorial is =  "<<k<<endl;


return 0;

}
