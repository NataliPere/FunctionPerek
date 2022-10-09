#include <iostream>

template<typename T>
void show_arr(T arr[], const int length) {
	std::cout << "[";
	for (int i = 0; i < length; i++)
		std::cout << arr[i] << ", ";
	std::cout << "\b\b]\n";
}

template<typename T>
void masPositive(T arr[], const int length, int number) {

	for (int i = 0; i < length; i++) {

		if (arr[i] > 0) {
			arr[i] = arr[i] + number;
		}
		if (arr[i] < 0) {
			arr[i] = arr[i] - number;
		}
		if (arr[i] == 0) {

		}
	}

}

int range_sum(int arr1[], int arr2[], const int length1, const int length2) {
	int sum1 = 0;
	for (int i = 0; i < length1; i++) {
		sum1 += arr1[i];
	}
	int sum2 = 0;
	for (int i = 0; i < length2; i++) {
		sum2 += arr2[i];
	}
	if (sum1 > sum2)
		return sum1;
	return sum2;

}

template<typename T>
T mean_arr(T num1, T num2, T num3) {
	T max1 = 0;
	T max2 = 0;

	if (num1 > max1) {
		max2 = max1;
		max1 = num1;
	}


	if (num2 > max1) {
		max2 = max1;
		max1 = num2;
	}

	if (num3 > max2) {
		max2 = num3;
	}
	if (num2 > max2) {
		max2 = num2;
	}


	int res = (max1 + max2) / 2;
	std::cout << res;
	return res;
}


template<typename T>
void DevideArray(T arr[], const int length) {
	for (int i = 0; i < length; i++) {
		int num1 = arr[i - length / 2];
		int num2 = arr[i] - num1;
		std::swap(num2, num1);

	}
}

int main() {

	setlocale(LC_ALL, "Russian");

	int n1, n2, n3;

	std::cout << "Задача 1. Увеличение значений положительных элементов. \n";
	const int size = 7;
	int arr[size] = { 1, -1, 2, -3, 4, -6, 0 };
	int num = 2;

	show_arr(arr, size);
	masPositive(arr, size, num);
	show_arr(arr, size);
	std::cout << "\n\n";

	std::cout << "Задача 2. Сумма элементов массивов. \n";
	const int size1 = 5;
	int arr1[size1] = { 1, 2, 3, 4, 5 };
	std::cout << "Первый массив: ";
	std::cout << "[";
	for (int i = 0; i < size1; i++)
		std::cout << arr1[i] << ", ";
	std::cout << "\b\b]\n";

	const int size2 = 5;
	int arr2[size2] = { 6, 7, 8, 9, 10 };
	std::cout << "Второй массив: ";
	std::cout << "[";
	for (int i = 0; i < size2; i++)
		std::cout << arr2[i] << ", ";
	std::cout << "\b\b]\n";
	std::cout << "Максимальная сумма из двух массивов: ";
	std::cout << range_sum(arr1, arr2, size1, size2) << "\n";
	std::cout << "\n";

	std::cout << "Задача 3. Среднее арифметическое двух максимальных элементов. \n";
	std::cout << "Введите 1-е число: ";
	std::cin >> n1;
	std::cout << "Введите 2-е число: ";
	std::cin >> n2;
	std::cout << "Введите 3-е число: ";
	std::cin >> n3;
	std::cout << "Среднее арифметическое двух максимальных элементов: ";
	mean_arr(n1, n2, n3);
	std::cout << "\n\n";


	std::cout << "Задача 4. Поменять местами две половины массива. \n";
	const int size4 = 8;
	int arr4[size4] = { 1, 2, 3, 4, 5, 6, 7, 8 };

	show_arr(arr4, size4);
	DevideArray(arr4, size4);
	show_arr(arr4, size4);

	return 0;
}