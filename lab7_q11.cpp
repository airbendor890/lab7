#include<iostream>
using namespace std;

/* programm to find lcm of two numbers using recursion
lcm is the lowest number which is devided by both numbers under
study
*/

int lcm(int a,int b,int temp)
{	if(temp%a==0 && temp%b==0)
	{ return temp;

	}
	else
	{ 	temp++;
		lcm(a,b,temp);
	}

}

/////DRIVER
int main()
{  int lcm(int a,int b,int temp); 
	int a,b,l;
	cout<<"\n give two nos for finding lcm"<<endl;
	cout<<"number 1 = ";cin>>a;cout<<endl;
	cout<<"number 2 = ";cin>>b;cout<<endl;
	l=lcm(a,b,1);
	cout<<"lcm("<<a<<","<<b<<") =  "<<l<<endl;

	return 0;
}

