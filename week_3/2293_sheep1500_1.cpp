#include <iostream>


using namespace std;

int main()
{
	int TypeOfCoin, DesiredValue;

	cin >> TypeOfCoin >> DesiredValue;

	int* coins = new int[TypeOfCoin];
	int** destValue = new int*[TypeOfCoin];
	for (int i = 0; i < TypeOfCoin; i++) {
		destValue[i] = new int[DesiredValue + 1];
	}


	for (int i = 0; i < TypeOfCoin; i++)
		cin >> coins[i];


	for (int i = 0; i < TypeOfCoin; i++) {
		for (int j = 0; j <= DesiredValue; j++) {
			if (i == 0)
				destValue[i][j] = 1;
			else {
				destValue[i][j] = destValue[i - 1][j];
				for (int k = 1; j >= (coins[i] * k); k++)
					destValue[i][j] += destValue[i - 1][j - (coins[i] * k)];
			}
		}
	}


	cout << destValue[TypeOfCoin - 1][DesiredValue] << endl;




	delete[] coins;
	for (int i = 0; i < TypeOfCoin; i++)
		delete[] destValue[i];



	return 0;
}
