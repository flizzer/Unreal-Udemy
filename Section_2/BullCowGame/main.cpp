#include <iostream>
#include <string>

using namespace std;

void PrintIntro();
string GetGuessAndPrintBack();


int main()
{
	PrintIntro();
	GetGuessAndPrintBack();
	GetGuessAndPrintBack();
	cout << endl;
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

string GetGuessAndPrintBack()
{
	cout << "Enter your guess: ";
	string Guess = "";
	getline(cin, Guess);
	cout << "You guessed: " << Guess << endl;
	return Guess;
}