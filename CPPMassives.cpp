

#include <iostream>
#include <ctime>
#include <cmath>
void print_value(int* ptr) {
	std::cout << *ptr;
}
void print_array_2d(int mas[][3],int rows,int columns ) {
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			std::cout << mas[i][j] << " ";
		}
		std::cout << std::endl;
	}
}
void fill_mass_2d(int mas[][3], int rows, int columns,int max,int min) {
	std::srand(static_cast<unsigned int>(std::time(nullptr)));


	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			mas[i][j] = std::rand() % (max - min + 1) + min;
		}
	}
}
int main()
{
	int numbers[5] = { 1,2,3,4,5 };
	double dnumbers[3] = { 1.0,2.33,4.14 };
	//std::cout << numbers[4] << std::endl;
	int* ptr = &numbers[0];
	double digit = 15;
	double* ptrd = &digit;
	double digit_1 = *ptrd;
	//std::cout << *ptrd << std::endl;
	int* arr = new int[5];
	delete[] arr;
	//print_value(ptr);
	int x = 42;
	int* ptr_3 = &x; // Указатель ptr теперь указывает на переменную x.
	//std::cout << *ptr_3 << std::endl;//* = значение
	//std::cout << ptr_3 << std::endl;//& = адрес или без &
///////////////////////////////////////////////////////////////////////////////////////
	int num[3][3];
	fill_mass_2d(num, 3, 3,10,5);
	print_array_2d(num, 3, 3);
}

