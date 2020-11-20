#include <iostream>

using namespace std;

int countWords(char str[]);
int findShorteWordLenth(char str[]);
void getNunOfVolvesAndNotVolves(char str[]);
bool isVolve(char letter);

int main()
{
	//char str[] = "I love C#";
	char str[] = "Programing launguagas develops very fast";
	cout << str << endl;	
	cout << "The are " << countWords(str) << " words in the string" << endl;
	cout << "The shortes word`s lenght = " << findShorteWordLenth(str) << endl;
	getNunOfVolvesAndNotVolves(str);

	char str1[256];
	cin >> str1;
	cin.ignore(256, '\n');
	cout << str1 << endl;
	cin.getline(str1, 256);
	cout << str1;

	return 0;
}

int countWords(char str[])
{							
	int counter = 0;		
	//int i = 0;			
	//while (str[i] != '\0')
	//{						
	//	if (str[i] == '32')	
	//		counter++;		
	//	i++;				
	//}				

	//for (int i = 0; str[i] != '\0'; i++)
	//{
	//	if (str[i] == ' ')
	//		counter++;
	//}

	for (int i = 0; i < strlen(str); i++)
	{
		if (str[i] == 32)
			counter++;
	}
	counter++;
	return counter;
}

int findShorteWordLenth(char str[])
{
	int min = 10000;
	for (int i = 0; i <= strlen(str); i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			int counter = 0;
			for (int j = i - 1; (j >= 0 && str[j] != ' '); j--)
			{
				counter++;
			}
			if (counter < min)
			{
				min = counter;
			}
		}
	}
	return min;
}

void getNunOfVolvesAndNotVolves(char str[])
{
	int volves = 0;
	int notVolves = 0;
	for (int i = 0; i < strlen(str); i++)
	{
		char letter = toupper(str[i]);
		if (isVolve(letter) == true)
			volves++;
		else if((letter >= 65 && letter <= 90))
			notVolves++;
	}
	cout << "Volves = " << volves << endl;
	cout << "Not Volves = " << notVolves << endl;
	if (volves > notVolves)
	{
		cout << "Num of volves is great" << endl;
	}
	else
	{
		cout << "Num of not volves is great" << endl;
	}
}

bool isVolve(char letter)
{
	if (letter == 'A' || letter == 'O' || letter == 'Y' || letter == 'I' || letter == 'J' || letter == 'E' || letter == 'U')
		return true;
	else
		return false;

}
