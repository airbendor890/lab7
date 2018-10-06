/*question 6-------c++ programm to find reverse of a number using recursion
473=400+70+3
473%10=3
473%100=73
473%1000=473



*/
#include<iostream>
using namespace std;

int reverse(int n,int sum)
{  
	if(n>0)
	{ int temp;
		temp=n%10;
	 
		sum=sum*10+temp;	
	
	 reverse(n/10,sum);
	}
	else
	return sum;


}


///DRIVER

int main()
{	int n,sum=0;
	cout<<"give the no of which u want find the reverse     ";
	cin>>n;

	int reverse(int n,int sum);
        int k=	reverse(n,sum);
	cout<<"reverse no is="<<k<<endl;


return 0;
}












