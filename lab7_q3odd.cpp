/*c++ programm to print all odd natural numbers beetween c to n
ascending order
*/
#include<iostream>
using namespace std;

int pnn(int c,int n)
{	
	if(c<=n)
	{ if(c%2!=0) 
		cout<<c<<endl;
	 
		return pnn(c+1,n);	
	}

	else
	return 1;

}

//DRIVER
int main()
{	int c,n;
	int pnn(int c,int n);
cout<<"give the limits upto which u want to print natural nos  in ascending order"<<endl;
	cin>>c;   
	cin>>n;
	cout<<endl;
	pnn(c,n);

return 0;

}
