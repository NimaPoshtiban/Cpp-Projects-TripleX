#include <iostream>;

int changeGameDifficulty()
{
	std::cout << "You are a secret agent breaking into a secure server room\n"; 
	std::cout << "You need to enter the corroct codes to continue...\n";

	int CodeA = 4;
	int CodeB = 3;
	int CodeC = 2;

	const int CodeSum = CodeA + CodeB + CodeC;
	const int CodeProduct = CodeA * CodeB * CodeC;

	std::cout << std::endl;
	std::cout << "+ There are three numbers in the code" << std::endl;
	std::cout << "+ The codes add-up to: "<< CodeSum << std::endl ;
	std::cout << "+ The codes multiply to give: " << CodeProduct << std::endl ;

	int playerGuess;

	return 0;
}


int main()
{
	changeGameDifficulty();
	return 0;
}

