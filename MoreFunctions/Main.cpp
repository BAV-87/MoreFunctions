﻿#include <iostream>

short NUM;
const double PI = 3.14;
const int GL_SIZE = 3;
int GL_ARR[GL_SIZE]{ 10, 20, 30 };

void set_NUM(short new_value) {
	NUM = new_value;

}
void increase() {
	static int a = 1;
	std::cout << a << std::endl;
	a++;
}
int power(int a, int b = 2) {
	int result = 1;
	for (int i = 1; i <= b; i++)
		result *= a;
	return result;
}
inline int absolute(int num) {
	return num < 0 ? -num : num;
}
int sum(int num1, int num2) {
	std::cout << "TWO INTS\n";
	return num1 + num2;
}double sum(double num1, double num2) {
	std::cout << "TWO DOUBLES\n";
	return num1 + num2;
}char sum(char sym1, char sym2) {
	std::cout << "TWO CHARS\n";
	return sym1 + sym2;
}int sum(int num1, int num2, int num3) {
	std::cout << "THREE INTS\n";
	return num1 + num2 + num3;
}
template <typename T>
void print_arr(T arr[], const int length) {
	for (int i = 0; i < length; i++)
		std::cout << arr[i] << ' ';
	std::cout << std::endl;
}

int main() {
	setlocale(LC_ALL, "Russian");
	int n;
	// Глобальный элемент
	/*set_NUM(42);
	std::cout << "NUM = " << NUM << std::endl;*/

	// Статические элементы
	/*increase(); // 1
	increase(); // 2
	increase(); // 3*/

	// Параметры по умолчанию
	/*std::cout << "7^5 = " << power(7, 5) << std::endl;
	std::cout << "5^2 = " << power(5) << std::endl;
	std::cout << "11^5 = " << power(11, 5) << std::endl;
	std::cout << "200^2 = " << power(200) << std::endl;*/

	// Встраиваемая функция
	/*std::cin >> n;
	int result = absolute(n);
	std::cout << '|' << n << "| = " << result << std::endl;*/

	// Перегруженные функции
	/*std::cout << sum(5, 6) << std::endl;
	std::cout << sum(4.7, 0.5) << std::endl;
	std::cout << sum('+', '-' ) << std::endl;
	std::cout << sum(1, 2, 3 ) << std::endl;*/

	//Шаблонная функция
	const int size = 3;
	int arr1[size]{ 10, 20, 30 };
	print_arr(arr1, size);

	double arr2[size]{ 5.5, 6.6, 7.7 };
	print_arr(arr2, size);

	bool arr3[size]{ true, false, true };
	print_arr(arr3, size);


	return 0;
}
