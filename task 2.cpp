// homeworks.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main()
{
	int N;
	do {
		std::cout << "Input N: ";
		std::cin >> N;
	} while (N <= 0);
	for (int i = 1; i <= N; ++i) {
		for (int step = 1; step <= N; ++step) {
			for (int j = 1; j <= N-i; ++j) {
				std::cout << " ";
			}
			for (int j = 1; j <= 2 * i - 1; ++j) {
				std::cout << "*";

			}
			for (int j = 1; j <= N - i; ++j) {
				std::cout << " ";
			}
		}
			std::cout << std::endl;
		
	} 
	
	for (int i = N - 1; i >= 1; --i) {
		for (int step = 1; step <= N; ++step) {
			for (int j = 1; j <= N - i; ++j) {
				std::cout << " ";
			}
			for (int j = 1; j <= 2 * i - 1; ++j) {
				std::cout << "*";
			}
			for (int j = 1; j <= N - i; ++j) {
				std::cout << " ";
			}
		}
			std::cout << std::endl;
		
	}
}

