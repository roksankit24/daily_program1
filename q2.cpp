#include<iostream>
#include<conio.h>
using namespace std;
float power(int,int);
int main()
{
	cout<<"Enter the base"<<endl;
	int b,r;
	cin>>b;
	cout<<"Enter the power"<<endl;
	cin>>r;
	float ans=power(b,r);
	cout<<"The answer is "<<ans<<endl;
	getch();
	return 0;
}
float power(int a,int n)
{
	if(n==0)
	{
		return 1;
	}
	else if(n<0)
	{
		return (1.0/a)*power(a,n+1);
	}
	else
	{
		return a*power(a,n-1);
	}
}
