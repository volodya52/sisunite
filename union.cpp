// union.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>


struct MaritalStatus
{
	union Anketa
	{
		char fio;
		int borndata;
		char gender;

	};
	bool razvod;
	bool zhenat;
	bool nobrak;
};
struct Male
{
	bool voennoob;
};
struct Female
{
	char adress;
};

int main()
{
	setlocale(LC_ALL, "RU");
	MaritalStatus ms;
	Male male;
	
	Female female;
	printf("Введите фио");
	std::cin >> anketa.fio;
	printf("Введите год рождения");
	std::cin >> anketa.borndata;
	printf("Введите пол (М/Ж)");
	std::cin >> anketa.gender;
	if (anketa.gender == 'М'==anketa.gender=='м')
	{
		printf("Вы военнообязаны?(Y/N)");
		std::cin >> male.voennoob;
		if (male.voennoob == 'Y') {
			male.voennoob = true;
		}
		else {
			male.voennoob = false;
		}
	}
	else if (anketa.gender == 'Ж' || anketa.gender == 'ж') 
	{
		printf("Укажите свой адрес");
		std::cin >> female.adress;
	}
	else {
		printf("Такого гендера нет");
	}
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
