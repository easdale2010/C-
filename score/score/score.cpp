// score

#include<iostream>
#include<vector>
#include<algorithm>
#include<ctime>
#include<cstdlib>

using namespace std;

int main()
{
	vector<int>::const_iterator iter;

	cout<<"creating table of scores\n";
	vector<int>scores;
	scores.push_back(1500);
	scores.push_back(3000);
	scores.push_back(7000);

	cout<"High Scores\n";
	for(iter = scores.begin();iter != scores.end();iter++)
	{
		cout<< *iter << endl;
	}

	cout<<"Finding a score\n";
	int score;
	cout<<"Enter a socre\n";
	cin >> score;

	iter = find (scores.begin(),scores.end(), score);

	if(iter != scores.end())
	{
		cout<<"A score was found";
	}
	else
	{
		cout<<"A score was not found";
	}

	cout<<"\n\nRandomizing a score\n";
	srand(static_cast<unsigned int>(time(0)));
	random_shuffle(scores.begin(), scores.end());
	cout<<"Jigh scores\n";
	for(iter = scores.begin(); iter != scores.end();++iter)
		cout<< * iter << endl;


	cout<<"\n\nSorting score\n";
	sort(scores.begin(), scores.end());
	cout<<"High score\n";
		for(iter = scores.begin(); iter != scores.end();++iter)
		{
			cout<< * iter<< endl;
		}
		return 0;
}