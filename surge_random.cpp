#include <iostream>
#include <stdlib.h> 
#include <cstdio>
using namespace std;

int main()
{
	double surge;
	double discount;
	cout.precision(2);
	int choice;
	int cars,users;
	cars = rand() % 11;
	users = rand() % 11;
	if(cars<=users)
	{
		surge = 2*(users-cars)*users;
		surge = surge/10;
		surge = surge/(users+cars);
		cout<<"cars "<<cars<<" users "<<users<<" surge "<<1 + surge<<endl;
	}
	else
	{
		 discount = 2.5 * (cars - users) * cars;
		 discount = discount/(users+cars);
		 cout<<"cars "<<cars<<" users "<<users<<" discount "<<discount<<endl;
	}
	return 0;
}