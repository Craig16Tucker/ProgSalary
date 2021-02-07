#include <iostream>

using std::cout;
using std::cin;
using std::string;

union valuta
{
	short int dollars;
	int hryvna;
};

struct developer {
	string specialization;
	int salary;
	int colvo;
	int nalog;
};

developer* func(developer* prog)
{
	cout << "\nВведите кол-во заказов: \n";
	cin >> prog[1].colvo;
	cout << "\nВведите налог \n";
	cin >> prog[1].nalog;

	return prog;
}

int main()
{
	setlocale(LC_ALL, "RUS");

	int chooseValuta = 0;
	int chooseProg = 0;
	developer* prog = new developer[5];
	valuta result;

	cout << "\t\tК какой категории программистов вы относитесь?: \n 1 - Front-end разработчик \n 2 - Back-end разработчик \n 3 - Full-stack разработчик \n 4 - Game Developer \n 5 - Android разработчик";
	cin >> chooseProg;

	switch (chooseProg)
	{
	case 1:
		prog[1].salary = 500;
		break;
	case 2:
		prog[1].salary = 400;
		break;
	case 3:
		prog[1].salary = 300;
		break;
	case 4:
		prog[1].salary = 200;
		break;
	case 5:
		prog[1].salary = 100;
		break;
	}

	cout << "\t\tКакую валюту вы хотите использовать?: \n 1 - Гривна \n 2 - Доллары \n";
	cin >> chooseValuta;

	switch (chooseValuta) {
	case 1:
		func(prog);
		result.hryvna = prog[1].salary * prog[1].colvo - prog[1].nalog;
		cout << "Результат: " << result.hryvna;
		break;
	case 2:
		func(prog);
		result.dollars = prog[1].salary * prog[1].colvo - prog[1].nalog;
		cout << "Результат: " << result.dollars << "\n";
		break;
	}

	system("pause");
	return 0;
}