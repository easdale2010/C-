// Demonstraets the use of retunrn valuse an dparameters

#include<iostream>
#include<string>

using namespace std;

char askYesNo1();
char askYesNo2(string question);

int main()
{
	char anwser1 = askYesNo1();
	cout<<"Thank you for anwsering "<< anwser1<<"\n\n";

	char anwser2 = askYesNo2("Do you want to save your game?");
	cout<<"Thank you for anwsering "<<anwser2;

	return 0;

}

char askYesNo1()
{
	char response1;
	do
	{
		cout<<"Anwser yes or no;";
		cin >> response1;
	} while(response1 != 'y' && response1 != 'n');
	return response1;
}

char askYesNo2(string question)
{
	char response2;
	do
	{
		cout<< question <<"(y/n)";
		cin >> response2;
	} while(response2 != 'y'  && response2 != 'n');

	return response2;
}