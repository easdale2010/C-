// the use of clling functions

#include<iostream>

using namespace std;

void func();

int main()
{
	int var =5;
	cout<<"In main() var is "<< var <<"\n\n";
	func();

	cout<<"Back in main var is "<< var <<"\n\n";

	{
		cout<<"Creating a subselection\n";
		cout<<"in th sub selection var is "<< var <<"\n\n";

		int var =10;
		cout<<"Declaring a new var , neow var = "<<var <<"\n\n";
	}
	cout<<"the subselection is now deleted\n\n";
	cout<< "var in main() = "<< var <<"\n\n";

	return 0;
}
void func()
{
	int var =-1;
	cout<<"The values of avar in the function is "<< var <<"\n\n";
}