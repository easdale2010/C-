// return values

#include<iostream>

using namespace std;

int glob = 10;

void access_glob ();
void hide_glob();
void change_glob();

int main()
{
	cout<<"In main() glob is "<< glob << "\n\n";
	access_glob();

	hide_glob();
	cout<<"In main() glob is "<< glob << "\n\n";

	change_glob();
	cout<<"In main () glob is " << glob<<"\n\n";

	return 0;
}

void access_glob()
{
	cout<<"in main glob os "<< glob<<"\n\n";
}

void hide_glob()
{
	int glob =0;
	cout<<"In hide_globe() glob is "<< glob<<"\n\n";
}
void change_glob()
{
	int glob = -55;
	cout<<"in change_glob() glob is "<< glob << "\n\n";
}