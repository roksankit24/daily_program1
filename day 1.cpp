#include<iostream>
#include<conio.h>
using namespace std;
class array
{
	int sum=0;
	public:
		
	int func(int A[], int key)
	{
		for(int i=0;i<11;i++)
		{
			for(int j=1;j<11;j++)
			{
				sum=A[i]+A[j];
				if(sum==key)
				return 1;
			}
		}
		return 0;
	}
};
int main()
{
	array ob;
	int key;
	int A[11]={1,2,3,4,5,6,7,8,9,10,11};
	cout<<"Enter the key ";
	cin>>key;
	int a=ob.func(A,key);
	if(a)
	cout<<"\nArray consist of two element which sum in key";
	else
	cout<<"Array doesnot consist two elements which sum is key";
	getch();
	return 0;
}
