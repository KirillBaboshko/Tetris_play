#include <iostream>
#include <string>
#include <time.h>
#include <windows.h>
using namespace std;
void Init(char** field)
{
	for (int i = 0; i < 20; i++)
	{
		field[i] = new char[10];
	}
}

void Fill(char** field)
{
	for (int i = 0; i < 20; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			field[i][j] = '·';
		}
	}
}

void Print(char** field)
{
	cout << "\n\n\n\n\n\n\n";
	for (int i = 0; i < 20; i++)
	{
		cout << "                                         ";
		for (int j = 0; j < 10; j++)
		{
			cout << field[i][j] << "   ";
		}
		cout << endl << endl;
	}
	cout << "\n\n\n\n\n\n\n";
}
void Printpad(char** field,bool u)
{
	cout << "\n\n\n\n\n\n\n";
	for (int i = 0; i < 20; i++)
	{
		cout << "                                         ";
		for (int j = 0; j < 10; j++)
		{
			cout << field[i][j] << "   ";
		}
		if (i == 19) 
		{
			u = false;
		}
		cout << endl << endl;
	}
	cout << "\n\n\n\n\n\n\n";
}

void S(char** field)
{
	field[0][4] = '@';
	field[0][5] = '@';
	field[1][3] = '@';
	field[1][4] = '@';
}

void Z(char** field)
{
	field[0][3] = '@';
	field[0][4] = '@';
	field[1][4] = '@';
	field[1][5] = '@';
}

void T(char** field)
{
	field[0][3] = '@';
	field[0][4] = '@';
	field[0][5] = '@';
	field[1][4] = '@';
}

void L(char** field)
{
	field[0][4] = '@';
	field[1][4] = '@';
	field[2][4] = '@';
	field[2][5] = '@';
}

void J(char** field)
{
	field[0][4] = '@';
	field[1][4] = '@';
	field[2][4] = '@';
	field[2][3] = '@';
}

void O(char** field)
{
	field[0][4] = '@';
	field[1][5] = '@';
	field[0][5] = '@';
	field[1][4] = '@';
}
void I(char** field)
{
	field[0][4] = '@';
	field[1][4] = '@';
	field[2][4] = '@';
	field[3][4] = '@';
}
void Padenie(char** field, int N)
{
	int temp;
	for (int s = 0; s < 1 % N; s++)
	{
		for (int j = 0; j < 10; j++)
		{
			temp = field[N - 1][j];
			for (int i = N - 1; i > 0; i--)
				field[i][j] = field[i - 1][j];
			field[0][j] = temp;
		}
	}
}
int main()
{
	setlocale(0, "");
	char** field = new char* [20];

	Init(field);
	Fill(field);
	//S(field);
	//Print(field);
	//Sleep(2000);
	//Fill(field);
	//Print(field);
	//T(field);
	//Print(field);
	//Padenie(field, 20);
	//Print(field);
	int n = rand() % 7;
	int y = 19;
	switch (n) 
	{
		case 0:S(field);Print(field); y -= 2; break;
		case 1:Z(field);Print(field); y -= 2; break;
		case 2:T(field);Print(field); y -= 2; break;
		case 3:L(field);Print(field); y -= 3; break;
		case 4:J(field);Print(field); y -= 3; break;
		case 5:O(field);Print(field); y -= 2; break;
		case 6:I(field);Print(field); y -= 4; break;
	
	}
	int u = true;
	while (u == true)
	{
		Padenie(field, 20);
		Print(field);
		if (y == 0)
		{
			u = false;
		}
		y--;
	}





	return 0;
}