#include<iostream>
using namespace std;
int main()
{
	int a;
	cout<<"enter the integer a"<<endl;
	cin>>a;
	
	switch(a)//to the condition in this paranthesis 
	{
		case 1:
			cout<<"the value of a is 1"<<endl;
		case 2:
			cout<<"the value of a is 2"<<endl;
		case 3:
			cout<<"the value of a is 3"<<endl;	
		default:
			cout<<"default will always printed";
			break;
	}
}
