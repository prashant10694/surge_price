#include <iostream>
using namespace std;

int main()
{
	double surge;
	double discount;
	cout.precision(2);
	cout<<"Cases where users will get the surge price"<<endl;
	for (int i = 1 ; i < 11 ; i++)
	{
		for (int j = i ; j < 11 ; j++)
		{
			surge = 2*(j-i)*j;
			surge = surge/10;
			surge = surge/(i+j);
			cout<<"cars "<<i<<" users "<<j<<" surge "<<1 + surge<<endl;
		}
		cout<<endl;
	}
	cout<<endl<<endl;
	cout<<"Cases where user will see the discount"<<endl;
	for (int i = 1 ; i < 11; i++ )
	{
		for(int j = 1; j < i ; j++ )
		{
			 discount = 2.5 * (i - j) * i;
			 discount = discount/(j+i);
			 cout<<"cars "<<i<<" users "<<j<<" discount "<<discount<<endl;
		}
		cout<<endl;
	}
	return 0;
}