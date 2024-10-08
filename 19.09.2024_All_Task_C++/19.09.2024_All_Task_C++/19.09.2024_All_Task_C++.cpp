﻿// 8.Дано тризначне число n, в якому усі числа різні. Отримати 6 чисел, які утворюються при перестановці цифр даного числа.
#include <iostream> // Підключення бібліотеки введення-виведення
using namespace std; // Підключення простору імен std
int main() // Головна функція
{
	int number; // Змінна з числом
	cout << "Enter three different numbers: "; // Введення числа
	cin >> number; // Зчитування числа з клавіатури
	int a = number / 100;      // Отримуємо число сотень
	int b = (number / 10) % 10; // Отримуємо число десятків
	int c = number % 10;       // Отримуємо число одиниць
	if (number < 100 || number > 999) // Перевірка умови чи число є тризначним
	{
		cout << "The number is not in three digits."; // Число не є тризначним
		return 1; // Завершення програми з помилкою
	}
	else if (a == b || b == c || a == c) // Перевірка умови чи числа не є різні
	{
		cout << "All numbers must be different."; // Всі цифри повинні бути різними.
		return 2; // Завершення програми з помилкою
	}
	cout << "1 - " << a << b << c << "\n"; // Виведення результату
	cout << "2 - " << c << b << a << "\n"; // Виведення результату
	cout << "3 - " << b << a << c << "\n"; // Виведення результату
	cout << "4 - " << b << c << a << "\n"; // Виведення результату
	cout << "5 - " << a << c << b << "\n"; // Виведення результату
	cout << "6 - " << c << a << b << "\n"; // Виведення результату
	return 0; // Успішне завершення програми, без помилок
}
