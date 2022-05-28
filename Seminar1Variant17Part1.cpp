﻿//Семинар 1 вариант 17 

#include <iostream>
#include <cmath>     // библиотека для работы с математическими функциями 
#include <locale.h>  // библиотека для преобразования символов в кирилицу
#include <conio.h>   // библиотека для функции _getch


using namespace std;
int main()
{
	double m = 0.0;  // объявление переменных и присвоение им значения 0
	double z = 0.0;
	double a = 0.0;
	double b = 0.0;
	double x = 0.0;
	double c = 0.0;
	double d = 0.0;
	double y = 0.0;

	char t;
	setlocale(LC_ALL, "Rus");  // поддержка русского языка в консоли
	cout << "Введите m \n";
	cin >> m;                  // ввод значения, по которому будет расчитана формула
	
	if (m <= 0)                //  проверка на область допустимых значений
	{
		cout << "Функции не имеют значений \n";
		cout << "Нажмите Enter для выхода, или любую клавшу для продолжения \n";
		t = _getch();          //  функция чтения символа с клавиатуры
		if (t == 13)
		{
			exit(0);          // выход при нажатии Enter
		}
		else
		{
			system("CLS");    // отчиска окна консоли
			main();           // повторный запуск функции для вычесления по формуле
		}
	}
	else
	{
		x = 3 * m + 2;
		a = (sqrt(pow(x, 2) - 24 * m));         // sqrt - вычисление корня, pow - возведение в квадрат 
		c = sqrt(m);
		b = (3 * (sqrt(m)) - 2 / c);
		z = a / b;
		y = sqrt(m);                                    // квадратный корень числа
		cout << "результат z1  = " << z << endl;  // вывод результата
		cout << "результат z2  = " << y << endl;
		cout << "Нажмите Enter для выхода, или любую клавшу для продолжения";
		t = _getch();                          //  функция чтения символа с клавиатуры
		if (t == 13)
		{
			exit(0);                          // выход при нажатии Enter
		}
		else
		{
			system("CLS");                     // отчиска окна консоли
			main();                            // повторный запуск функции для вычесления по формуле
		}
	}

	return 0;

}
