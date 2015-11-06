// swap

#include<iostream>

using namespace std;

void badswap(int y, int x);
void goodswap(int& x, int& y);

int main()
{
	int myscore = 1000;
	int yourscore = 150;
	cout<<"Orignail scores\n ";
	cout<<"My score "<< myscore << endl;
	cout<<"Your score "<< yourscore << endl;

	cout<<"\n\nCalling bad function\n";
	badswap(myscore, yourscore);
	cout<<"My score "<< myscore<< endl;
	cout<<"Your score "<< yourscore << endl;

	cout<<"\n\nCalling god function\n";
	goodswap(myscore, yourscore);
	cout<<"My score "<< myscore << endl;
	cout<<"Your score "<< yourscore<< endl;



	return 0;
}
	void badswap(int x, int y)
	{
		int temp = x;
		x = y;
		y = temp;
	}
void goodswap(int& x,int& y)
{
	int temp = x;
	x =y;
	y = temp;
}