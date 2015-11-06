// my projcet
//demonstrates counting with loops


#include <iostream>;

using namespace std;

int main()
{
	cout << "\n\nCounting Foward\n";
	for(int i=0;i < 10 ;i++)
		cout << i << "  ";

	cout <<"\n\nCpunting BackWards\n";
	for(int i = 9 ;i >= 0 ;i --)
		cout << i << "  ";

	cout << "\n\nCounting By Fives\n";
	for(int i=0; i <= 50 ;i+=5)
		cout << i << "  ";

	cout <<"\n\nCounting Using Nulls\n";
	int count = 0;
	for(; count < 10 ;)
	{
		cout << count <<"  ";
		++ count;
	}

	cout <<"\n\nCounting Using Nested For Loops\n";

	const int ROWS =5;
	const int COLUMNS = 3;

	for(int i=0; i < ROWS ;i++)
	{
		for(int j=0; j < COLUMNS;j++)
		{
			cout <<i << "," << j << "  ";
	
		}
					cout<< endl;
		
	}

	return 0;
}