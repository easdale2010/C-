// MY project

// Demonstrates the arry strings

#include<iostream>

using namespace std;

int main()
{
	const int ROWS =3;
	const int COLUMNS = 3;
	char board [ROWS] [COLUMNS] = { {'O' , 'X','O'},
									{' ' , 'X','X'},
									{'X','O','O' }};
	
	cout<<"The tic tac board look like this\n";

	for(int i=0;i<ROWS;i++)
	{
		for(int j =0; j< COLUMNS;j++)
		{
			cout<<board[i][j];
		}
		cout << endl;
	}

	cout <<" You inset a X in to the empty space\n";
	board [1][0] = 'X';

	cout<<"The board now look like\n";
	for(int i=0;i<ROWS;i++)
	{
		for(int j=0;j<COLUMNS;j++)
		{
			cout<<board[i][j];
		}
		cout<<endl;
	}
	cout<<"\n\nX Wins\n\n";
	return 0;
}