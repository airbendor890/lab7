/*c++ programm to print all natural numbers beetween 1 to n
ascending order
*/
#include<iostream>
using namespace std;

int pnn(int c,int n)
{	
	if(c<=n)
	{ cout<<c<<endl;
	 return pnn(c+1,n);	
	}

	else
	return 1;

}

//DRIVER
int main()
{	int c,n;
	int pnn(int c,int n);
cout<<"give the limit upto which u want to print natural nos  in ascending order"<<endl;
	//cin>>c;   
	cin>>n;
	cout<<endl;
	pnn(1,n);

return 0;

}
