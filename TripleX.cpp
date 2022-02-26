#include <iostream>
#include <ctime>
using namespace std;

void PrintIntro(int LevelDifficulty)
{
	cout << "You are a secret agent breaking into a level " << LevelDifficulty;
	cout << " secure server room...\nEnter the corroct codes to continue...\n";
}


bool PlayGame(int LevelDifficulty=1)
{
	PrintIntro(LevelDifficulty);

	int CodeA = rand() % LevelDifficulty + LevelDifficulty; 
	int CodeB = rand() % LevelDifficulty + LevelDifficulty;
	int CodeC = rand() % LevelDifficulty + LevelDifficulty;

	const int CodeSum = CodeA + CodeB + CodeC;
	const int CodeProduct = CodeA * CodeB * CodeC;

	cout << endl;
	cout << "+ There are three numbers in the code" << endl;
	cout << "+ The codes add-up to: " << CodeSum << endl;
	cout << "+ The codes multiply to give: " << CodeProduct << endl;

	int GuessA, GuessB, GuessC;

	cin >> GuessA >> GuessB >> GuessC;


	int GuessSum = GuessA + GuessB + GuessC;
	int GuessProduct = GuessA * GuessB * GuessC;

	if (GuessProduct == CodeProduct && GuessSum == CodeSum)
	{
		cout << "\nWell done agent! data extracted! keep going! ***\n";
		return true;
	}
	else
	{
		cout << "\nWrong Code! Permisson Denied! ***\n";
		return false;
	}

}



int main()
{
	srand(time(NULL));

	int const MaxDifficulty = 5;
	int LevelDifficulty = 1;
	while (MaxDifficulty >= LevelDifficulty)
	{
		bool bLevelComplete = PlayGame(LevelDifficulty);
		cin.clear(); // clears any error
		cin.ignore(); // Discards the buffer

		if (bLevelComplete)
		{
			++LevelDifficulty;
		}

	}
	cout << "\nMission Accomplished! good job agent. now get out of there! ****";
	return 0;
}

