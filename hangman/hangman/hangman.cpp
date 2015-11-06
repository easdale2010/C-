// Hangman

#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cctype>
#include<ctime>

using namespace std;

int main()
{
	const int MAX_WRONG =8;

	vector<string>words;
	words.push_back("GUESS");
	words.push_back("DIFICULT");
	words.push_back("HANGMAN");
	srand(static_cast<unsigned int >(time(0)));
	random_shuffle(words.begin(),words.end());
	const string THE_WORD = words[0];
	int wrong =0;
	string soFar (THE_WORD.size(),'-');
	string used ="";

	cout<<"Welcome to Hangman Good Leck!";
	while((wrong < MAX_WRONG ) && ( soFar != THE_WORD))
	{
		cout<<"\nYou have "<< MAX_WRONG - wrong;
		cout<<"incorrect guesses left\n";
		cout<<"\nThe letters you have used are "<< used<<endl;
		cout<<"The word so far is "<< soFar<< endl;
	
	char guess;
	cout<<"\nEnter your guess: ";
	cin >> guess;
	guess =toupper(guess);
	while(used.find(guess) != string::npos)
	{
		cout<<"You have already guess "<< guess <<endl;
		cout<<"\nEnter your guess: ";
		cin >> guess;
		guess = toupper(guess);
	}
	used += guess;

	if(THE_WORD.find(guess) != string::npos)
	{
		cout<<"That is correct "<< guess <<"Is in the word"<<endl;
		for(int i=0;i<THE_WORD.length();++i)
		{
			if(THE_WORD[i] == guess)
			{
				soFar[i] = guess;
			}
		}
	}
	else
	{
		cout<<"That attempt is incorrect\n";
		wrong++;
	}
	}
	if(wrong == MAX_WRONG)
	{
		cout<<"You have been hanged ";
	}
	else
	{
		cout<<"Weldone you guess it ";
	}

	cout<<"\n The word was "<<THE_WORD<< endl;
	return 0;
}