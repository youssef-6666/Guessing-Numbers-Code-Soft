#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
int main()
{

	int Guesses = 5;
	int guess;
	int answer;
	srand(time(0));
	answer = rand()% 20;       //  function to find rando number
	cout << "welcom to gussing numbers game" << endl;
	cout << "iam thinking of a number between 0 and 20 in 5 guesses" << endl;
	
	
	
		for (int i = 0; i < 5; i++)
		{
			cout << "Guess#" << i + 1 << ":";
			cin >> guess;
			if (guess > 20 || guess < 0) {
				cout << "you should choose number between 0 and 20 " << endl;
				
			}
			else {
				if (guess != answer)
				{
					if (guess > answer)
						cout << "too haigh !" << endl;
					else
						cout << "too low !" << endl;
				}
				else {
					cout << "you win" << endl;

					break;
				}
			}
			}

			
	return 0;
}