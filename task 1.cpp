// homeworks.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main()
{
	
	double X, N;
	std::cout << "Input X: ";
	std::cin >> X; 
	do {
		std::cout << "Input N: ";
		std::cin >> N;
	} while (N < 1);
	
	double S = 0,  i = X;
	
	for (int  k = 0; k <= N; ++k) {
		S += i;
		i *= (-1) * X * X / (2.0 * k + 2) / (2.0 * k + 3);
	}
	std::cout << "result: " << S << std::endl;



}

