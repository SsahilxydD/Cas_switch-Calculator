#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	float a, b;
	char op;

	while (true) 
	{
		cout << "Enter a Number: ";
		cin >> a;
		system("cls");

		cout << "Select The Operator: '+' , '-' , '*' , '/' , '%' \n";
		cin >> op;
		system("cls");

		cout << "Enter another number: ";
		cin >> b;
		system("cls");


		switch (op)
		{
		case '+': cout << a << " " << op << " " << b << " = " << a + b; Sleep(2000); system("cls"); break;
		case '-': cout << a << " " << op << " " << b << " = " << a - b; Sleep(2000); system("cls"); break;
		case '*': cout << a << " " << op << " " << b << " = " << a * b; Sleep(2000); system("cls"); break;
		case '/': cout << a << " " << op << " " << b << " = " << a / b; Sleep(2000); system("cls"); break;
		case '%':
			bool numA, numB;
			numA = ((int)a == a);
			numB = ((int)b == b);

			if (numA && numB)
			{
				cout << a << " " << op << " " << b << " = " << (int)a % (int)b; Sleep(2000); system("cls");
			}

			else if (!(numA) && !(numB))
			{
				cout << "Not Valid"; Sleep(2000); system("cls");
			}
			break;
		default: cout << "Bruh Select a proper operator"; Sleep(2000); system("cls"); break;
		}
	}
	
}
