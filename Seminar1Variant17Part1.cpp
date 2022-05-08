//Семинар 1 вариант 17, часть 1

#include <iostream>
#include <cmath>
#include <locale.h>



int main()
{
	{} {}
	double m, z, a, b, x, c;
	setlocale(LC_ALL, "Rus");
	std::cout << "Введите m \n";
	std::cin >> m;
	if (m <= 0)
	{
		std::cout << "Функция не имеет значений \n";
	}
	else
	{
		x = 3 * m + 2;
		a = (sqrt(pow(x, 2) - 24 * m));
		c = sqrt(m);
		b = (3 * (sqrt(m)) - 2 / c);
		z = a / b;
		std::cout << "результат  =  " << z;
	}
	return 0;

}