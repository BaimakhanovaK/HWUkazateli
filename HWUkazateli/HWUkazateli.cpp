// HWUkazateli.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include<iostream>
#include<time.h>

using namespace std;

int main()
{
	srand(time(NULL));

	//1 zadanie Создать массив из 10 целых чисел. Заполнить массив случайным образом в диапазоне от -45 до 45. 
	//Пользуясь указателем(и) на массив целых чисел, посчитать процент положительных и отрицательных элементов массива.
	/*int a[10];
	int* p=a;
	for (; p < a + 10; p++) {
		*p = -45 + rand() % 45;
		cout << *p << " ";
	}
	cout << endl;
	int f=0;
	int d = 0;
	for (p = a; p < a + 10; p++)
	{
		if (*p < 0)
			f++;
		else if (*p > 0)
			d++;
	}
	cout << "procent polozhitelnix=" << d * 100 / 10 << endl;
	cout << "procent otricatelnix=" << f * 100 / 10 << endl;
*/
	//2 zadanie Создать массив из 10 целых чисел. Заполнить массив случайным образом. 
	//Пользуясь указателем на массив целых чисел, посчитать сумму элементов массива с четными номерами.
	/*int a[10];
	int *p = a;
	for (; p < a + 10; p++) {
		*p = 1 + rand() % 20;
		cout << *p << " ";
	}
	cout << endl;
	int sum = 0;
	for (p = a; p < a + 10; p++)
	{
		if ((p-a) % 2 == 0)
		sum+=*p;
	}
	cout << "summa elementov s chetnimi nomerami=" << sum << endl;*/

	//3 zadanie Создать массив из 10 целых чисел. Заполнить массив случайным образом. 
	//Пользуясь указателем на массив целых чисел, посчитать сумму элементов массива с нечетными номерами.
	/*int a[10];
	int *p = a;
	for (; p < a + 10; p++) {
		*p = 1 + rand() % 20;
		cout << *p << " ";
	}
	cout << endl;
	int sum = 0;
	for (p = a; p < a + 10; p++) {
		if ((p - a) % 2 != 0)
			sum += *p;
	}
	cout << "summa elementov s nechetnimi nomerami=" << sum << endl;*/

	//4 zadanie Создать массив из 10 целых чисел. Заполнить массив случайным образом. 
	//Пользуясь указателем на массив целых чисел, посчитать сумму элементов массива с номерами кратными трем.
	//int a[10];
	//int *p = a;
	//for (; p < a + 10; p++) {
	//	*p = 1 + rand() % 20;
	//	cout << *p << " ";
	//}
	//cout << endl;
	//int sum = 0;
	//for (p = a; p < a + 10; p++) {
	//	if ((p - a) % 3 == 0)
	//		sum += *p;
	//}
	//cout << "summa elementov s nomerami kratnimi trem=" << sum << endl;

	//5 zadanie Создать массив из 10 целых чисел. Заполнить массив случайным образом. 
	//Пользуясь указателем на массив целых чисел, посчитать сумму элементов массива с номерами кратными 7.
	/*int a[10];
	int *p = a;
	for (; p < a + 10; p++) {
		*p = 1 + rand() % 20;
		cout << *p << " ";
	}
	cout << endl;
	int sum = 0;
	for (p = a; p < a + 10; p++) {
		if ((p - a) % 7 == 0)
			sum += *p;
	}
	cout << "summa elementov s nomerami kratnimi semi=" << sum << endl;*/

	//6 zadanie Создать массив из 20 целых чисел. Заполнить массив случайным образом в диапазоне от 1 до 12. 
	//Каждое число это оценка по 12 бальной системе. Пользуясь указателем на массив целых чисел, посчитать процент двоек, троек, четверок и пятерок. 
	//Двойка от 1 до 3 включительно, тройка от 4 до 6, четверка от 7 до 9, пятерка от 10 до 12.
	int a[20];
	int *p = a;
	for (; p < a + 20; p++) {
		*p = 1 + rand() % 12;
		cout << *p << " ";
	}
	cout << endl;
	int b = 0, c = 0, d = 0, e = 0;
	for (p = a; p < a + 20; p++) {
		if ( *p >= 1 && *p <= 3)
			b++;
		else if (*p >= 4 && *p <= 6)
			c++;
		else if ( *p >= 7 && *p <= 9)
			d++;
		else if (*p >= 10 && *p <= 12)
			e++;
	}
	cout << "procent dvoek=" << b * 100 / 20 << endl;
	cout << "procent troek=" << c * 100 / 20 << endl;
	cout << "procent chetverok=" << d * 100 / 20 << endl;
	cout << "procent pyaterok=" << e * 100 / 20 << endl;
	

	system("pause");
    return 0;
}

