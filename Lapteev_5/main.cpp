#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	setlocale(LC_ALL, "russian");

	int m[3][3];
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << "M[" << i << "][" << j << "] = ";
			cin >> m[i][j];
		}
	}

	cout << "\nВы ввели матрицу\n";
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << setw(3) << m[i][j] << " ";
		}
		cout << "\n";
	}

	int arr[9];
	for (int i = 0; i < 9; i++)
	{
		arr[i] = m[i / 3][i % 3];
	}

	cout << "\nArr: ";
	for (int i = 0; i < 9; i++)
	{
		cout << arr[i] << " ";
	}
	cout << "\n";

	system("pause");

	return 0;
}
