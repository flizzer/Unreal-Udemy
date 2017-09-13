#include <iostream>
#include <string>

using namespace std;

void PrintIntro();
void PlayGame();
string GetGuess();
void PrintGuess(string Guess);


int main()
{
	PrintIntro();
	PlayGame();
	return 0;
}

void PrintIntro()
{
	constexpr int WORD_LENGTH = 5;

	cout << "Welcome to Bulls and Cows, a fun word game.\n";
	cout << "Can you guess the " << WORD_LENGTH << " letter isogram ";
	cout << "I'm thinking of?\n";
	cout << endl;
	return;
}

void PlayGame()
{
	constexpr int NUMBER_OF_GUESSES = 5;
	for (int i = 0; i < NUMBER_OF_GUESSES; i++)
	{
		string Guess = GetGuess();
		PrintGuess(Guess);
		cout << endl;
	}
}

string GetGuess()
{
	cout << "Enter your guess: ";
	string Guess = "";
	getline(cin, Guess);
	return Guess;
}

void PrintGuess(string Guess)
{
	cout << "You guessed: " << Guess << endl;
}