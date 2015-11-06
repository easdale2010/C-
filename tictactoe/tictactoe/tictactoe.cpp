// tic tac toe

#include<iostream>
#include<string>
#include<vector>
#include<algorithm>


using namespace std;

// global constants
const char O ='O';
const char X ='X';
const char EMPTY = ' ';
const char TIE ='T';
const char NO_ONE ='N';


// function prototypes
void instructions();
char askYesNo(string question);
int askNumber(string question,int high,int low =0);
char humanPiece();
char opponent(char piece);
void displayBoard(const vector<char>& board);
char winner(const vector<char>& board);
bool isLegal(const vector<char>& board,int move);
int humanMove(const vector<char>& board,char human);
int computerMove(vector<char>board,char computer);
void announceWinner(char winner, char computer,char human);

int main()
{
	int move;
	const int NUM_SQUARES =9;
	vector<char> board(NUM_SQUARES,EMPTY);

	instructions();
	char human= humanPiece();
	char computer = opponent(human);
	char turn = X;
	displayBoard(board);

	while(winner(board) == NO_ONE)
	{
		if(turn == human)
		{
			move = humanMove(board,human);
			board[move] = human;
		}
		else
		{
			move = computerMove(board,computer);
			board[move]= computer;
		}
		displayBoard(board);
		turn = opponent(turn);
	}

	announceWinner(winner(board),computer,human);

	return 0;
}

void instructions()
{
	cout<<"Pick a square your piece will g o in that square\n";
	cout<<"\n\t   0 | 1 | 2";
	cout<<"\n\t   ---------";
	cout<<"\n\t   3 | 4 | 5";
	cout<<"\n\t    ---------";
	cout<<"\n\t   6 | 7 | 8";

	cout<<"\n\n";
}

char askYesNo(string question)
{
	char response;
	do
	{
		cout<<question<<"(y/n)\n";
		cin >> response;
	} while(response != 'y' && response != 'n');

	return response;
}

int askNumber(string question,int high,int low)
{
	int number;
	do
	{
		cout<<question<<"("<< high<<" - "<< low<<"):";
		cin >> number;
	}while(number > high || number <low);

	return number;
}
char humanPiece()
{
	char go_first = askYesNo("do you require the first move/n");
	if(go_first == 'y')
	{
		cout<<"Chicken";
		return X;
	}
	else
	{
		cout<<"The brave die young\n";
		return O;
	}
}
char opponent(char piece)
{
	if(piece == X)
	{
		return O;
	}
	else
	{
		return X;
	}
}
void displayBoard(const vector<char>& board)
{
	cout<<"\n\n\t"<< board[0]<<" | "<<board[1]<<" | " << board[2];
	cout<<"\n\t----------";
	cout<<"\n\t"<< board[3]<<" | "<<board[4]<<" | " << board[5];
	cout<<"\n\t----------";
	cout<<"\n\t"<< board[6]<<" | "<<board[7]<<" | " << board[8];

	cout<<"\n\n";
}
char winner(const vector<char>& board)
{
	const int WINNING_ROWS[8][3] =
	{
		{0,1,2},
		{3,4,5},
		{6,7,8},
		{0,3,6},
		{1,4,7},
		{2,5,8},
		{0,4,8},
		{2,4,6}
	};

	//look for a winning row and return if found
	const int TOTAL_ROWS =8;
	for(int row = 0;row< TOTAL_ROWS;row++)
	{
		if((board[WINNING_ROWS[row][0]] != EMPTY) &&
			(board[WINNING_ROWS[row][0]] == board[WINNING_ROWS[row][1]]) &&
			(board[WINNING_ROWS[row][1]] == board[WINNING_ROWS[row][2]]))
		{
			return board[WINNING_ROWS[row][0]];
		}
	}

	// if no one has won check for a tie
	if(count(board.begin(),board.end(), EMPTY) ==0)
	{
		return TIE;
	}

	// if no one has won and the it isnt a tie, the game isnt over;
	return NO_ONE;
}

inline bool isLegal(int move, const vector<char>& board)
{
	return board[move] == EMPTY;
}
int humanMove(const vector<char>& board,char human)
{
	int move = askNumber("Where do you want to move?\n",board.size () -1);
	if(!isLegal(move,board))
	{
		cout<<"That square is already taken, pick anothor\n";
		move = askNumber("Where do you want ot move", board.size () -1);
	}
	cout<<"Fine...\n";

	return move;
	
}

int computerMove(vector<char>board,char computer)
{
	unsigned int move =0;
	bool found = false;

	while(!found && move< board.size())
	{
		if(isLegal(move,board))
		{
			board[move] = computer;
			found = winner(board) == computer;
			board[move] = EMPTY;
		}
		if(!found)
		{
			move ++;
		}
	}
	if(!found)
	{
		move =0;
		char human = opponent(computer);
		while(!found && move< board.size())
		{
			if(isLegal(move,board))
			{
				board[move] = human;
				found = winner(board) == human;
				board[move] = EMPTY;
			}
			if(!found)
			{
				++move;
			}
		}
	}
	if(!found)
	{
		move =0;
		unsigned int i =0;
		const int BEST_MOVES[] ={4,0,2,6,8,1,3,5,7};

		while(!found && i < board.size())
		{
			move = BEST_MOVES[i];
			if(isLegal(move,board))
			{
				found = true;
			}
			++i;
		}
	}
	cout <<"I pick the square number"<< move<<endl;

	return move;
}

void announceWinner(char winner,char computer, char human)
{
	if(winner == TIE)
	{
		cout<<winner<<" won";
		cout<<"Were are shit\n";
		
	}
	if(winner == computer)
	{
		cout<<winner<<" won";
		cout<<"You are shit\n";
		
	}
	if(winner == human)
	{
		cout<<winner<<" won";
		cout<<"Good game ";
		
	}
}