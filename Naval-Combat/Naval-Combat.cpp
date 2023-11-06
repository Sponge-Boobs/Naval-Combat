#include "Includes.h"

const int rows = 10;
const int elements = 10;
int PCArea[rows][elements];     // Zona PC
int MyArea[rows][elements];     // Zona Mine

// This function clears my field and the PC field.
void ClearAreas()
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < elements; j++)
		{
			PCArea[i][j] = 0;
			MyArea[i][j] = 0;
		}
	}
}

void ShowAreas()
{
	cout << " - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
	cout << " -                     Welcome to BattleShip!                    -" << endl;
	cout << " - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
	//cout << " -          PC Zone:                               My Area:      -" << endl;
	//cout << " - - - 0 1 2 3 4 5 6 7 8 9 -           - - - 0 1 2 3 4 5 6 7 8 9 -" << endl;

	cout << " -          PC Zone:       -" << endl;
	cout << " - - - 0 1 2 3 4 5 6 7 8 9 -" << endl;
	for (int i = 0; i < rows; i++)
	{
		cout << " | " << i << " | ";
		for (int j = 0; j < elements; j++)
		{
			cout << "* ";
		}

		cout << "|" << endl;
	}
}

int main()
{
	ClearAreas();
	ShowAreas();



	cin.get();
	return 0;
}