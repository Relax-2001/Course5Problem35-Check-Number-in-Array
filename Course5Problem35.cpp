#include <iostream>

using namespace std;

int ReadPositiveNumber(string Message)
{
	int Number = 0;
	do
	{
		cout << Message << endl;
		cin >> Number;
	} while (Number <= 0);
	return Number;
}

int RandomNumber(int From, int To)
{

	int RandomNum = rand() % (To - From + 1) + From;

	return RandomNum;
}

void FillArrayWithRandomNumbers(int Arr[100], int& ArryLength)
{

	ArryLength = ReadPositiveNumber("Enter a positive number");

	for (int i = 0; i < ArryLength; i++)
	{
		Arr[i] = RandomNumber(1, 100);
	}

}

short FindNumberPositionInArray(int Arr[100], int Length, int Number)
{

	for (int i = 0; i < Length; i++)
	{
		if (Arr[i] == Number)
			return i;
	}

	return -1;
}

bool IsNumberInArray(int Arr[100], int Length, int Number)
{
	return (FindNumberPositionInArray(Arr , Length , Number) != -1);
}

void PrintArray(int Arr[100], int ArrayLength)
{
	cout << "Array elements :\n";
	for (int i = 0; i <= ArrayLength - 1; i++)
		cout << Arr[i] << " ";

	cout << "\n";
}

int main()
{
	srand((unsigned)time(NULL));


	int Arr[100], Length = 0, NumberToSearch = 0;

	FillArrayWithRandomNumbers(Arr, Length);
	PrintArray(Arr, Length);

	NumberToSearch = ReadPositiveNumber("\nEnter a number to search in array:");

	if (!IsNumberInArray(Arr , Length , NumberToSearch))
	{
		cout << "Number is not exist :-(\n";
	}
	else
	{
		cout << "Number is  exist :-)\n";
	}

	


}