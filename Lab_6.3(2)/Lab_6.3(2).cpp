// 2 Спосіб --- "Рекурсивний"
#include <iostream>
#include <time.h>
#include <iomanip>
#include <Windows.h>

template < typename L>

void value_elements1(L* masuv_a, L elements, L Low, L High, L index)
{
	masuv_a[index] = Low + rand() % (High - Low + 1);
	if (index < elements - 1)
		value_elements1(masuv_a, elements, Low, High, index + 1);
}

template < typename G>

void vuvestu1(G* masuv_a, G elements, G index)
{
	std::cout << std::setw(5) << masuv_a[index];
	if (index < elements - 1)
		vuvestu1(masuv_a, elements, index + 1);
	else;
}

template < typename F>

int suma1(F* masuv_a, F elements, F index, F sum)
{
	sum += masuv_a[index];
	if (index < elements - 1)
		return suma1(masuv_a, elements, index + 1, sum);
	else
		return sum;
}

// 1

void value_elements(int* b, const int elements, int Low, int High, int index);
void vuvestu(int* b, const int elements, int index);
int suma(int* masuv_a, const int elements, int index, int sum);

int main(void)
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	srand((unsigned)time(NULL));
	const int elements = 5;
	int masuv_a[elements];

	int Low = -30;
	int High = 40;

	value_elements(masuv_a, elements, Low, High, 0);
	std::cout << "сформований масив: " << std::endl;
	std::cout << std::endl;
	vuvestu(masuv_a, elements, 0);

	std::cout << std::endl;
	std::cout << std::endl;
	int sum = suma(masuv_a, elements, 0, 0);
	std::cout << "Сума елементів які задовольняють вказаному критерію: " << sum << std::endl;
	std::cout << std::endl;

	value_elements1(masuv_a, elements, Low, High, 0);
	std::cout << "сформований масив: " << std::endl;
	std::cout << std::endl;
	vuvestu1(masuv_a, elements, 0);

	std::cout << std::endl;
	std::cout << std::endl;
	int sum1 = suma1(masuv_a, elements, 0, 0);
	std::cout << "Сума елементів які задовольняють вказаному критерію: " << sum1 << std::endl;

	return 0;
}

void value_elements(int* masuv_a, const int elements, int Low, int High, int index)
{
	masuv_a[index] = Low + rand() % (High - Low + 1);
	if (index < elements - 1)
		value_elements(masuv_a, elements, Low, High, index + 1);

}

void vuvestu(int* masuv_a, const int elements, int index)
{
	std::cout << std::setw(5) << masuv_a[index];
	if (index < elements - 1)
		vuvestu(masuv_a, elements, index + 1);
	else;
}


int suma(int* masuv_a, const int elements, int index, int sum)
{
	sum += masuv_a[index];
	if (index < elements - 1)
		return suma(masuv_a, elements, index + 1, sum);
	else
		return sum;
}