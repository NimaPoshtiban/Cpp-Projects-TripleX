#include <iostream>;
using namespace std;

int changeGameDifficulty()
{
	cout << "You are a secret agent breaking into a secure server room\n"; 
	cout << "You need to enter the corroct codes to continue...\n";

	int CodeA = 4;
	int CodeB = 3;
	int CodeC = 2;

	const int CodeSum = CodeA + CodeB + CodeC;
	const int CodeProduct = CodeA * CodeB * CodeC;

	cout << endl;
	cout << "+ There are three numbers in the code" << endl;
	cout << "+ The codes add-up to: "<< CodeSum << endl ;
	cout << "+ The codes multiply to give: " << CodeProduct << endl ;

	int GuessA;
	int GuessB;
	int GuessC;

	std::cin >> GuessA >> GuessB >> GuessC;
	return 0;
}


int main()
{
	changeGameDifficulty();
	return 0;
}

