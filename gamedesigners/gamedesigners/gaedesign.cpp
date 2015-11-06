// Game Designers Network

// Demostraights combined lojigal operators


#include<iostream>

#include<string>

using namespace std;

int main()
{
	string username;
	string password;
	bool sucess;

	cout <<"Game Designer Netwrok\n\n";
	cout <<"Please Log in to enter the sire\n\n"; 
	do
	{
		cout <<"User Name\n\n";
		cin >> username;
		cout <<"Pass Word\n";
		cin >> password;

		if(username == "A.Easdale" && password == "sooty1")
		{
			cout <<"Hey Alan How Are you today>\n\n";
			sucess = true;
		}
		else if(username == "jordan" && password == "gl")
		{
			sucess = true;
			cout <<"Welcome Jodran bug How goea it?\n\n";
		}
		else if(username == "chriss" && password == "game")
		{
			sucess = true;
			cout <<"Welcome Hodalski my man\n\n";
		}
		else
		{
			sucess = false;
			cout <<"The detail you enter are incorrect please try again\n\n";
		}
	}while(!sucess);

		return 0;
}