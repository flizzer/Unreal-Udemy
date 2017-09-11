#include <iostream>
#include <string>

using namespace std;

int main()
{
	constexpr int WORD_LENGTH = 5;

	cout << "Welcome to Bulls and Cows, a fun word game.\n";
	cout << "Can you guess the " << WORD_LENGTH << " letter isogram ";
	cout << "I'm thinking of?\n";

	cout << "Enter your guess: ";
	string Guess = "";
	cin >> Guess;
	cout << "\nYou guessed: " << Guess << endl;
	
	cout << "Enter your guess: ";
	cin >> Guess;
	cout << "\nYou guessed: " << Guess << endl;

	return 0;
}