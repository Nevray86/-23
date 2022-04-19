#include<iostream>
#include<cstdlib>
#include<ctime>
#include<algorithm>
using namespace std;

//Задача 1
int max (int &a, int &b,int &c) {
	int max = 0;
	if (a > b && a > c) {
		max = a;
		b = max;
		c = max;
	}
		
	if (b > a && b > c) {
		max = b;
		a = max;
		c = max;
	}
		
	if (c > b && c > a) {
		max = c;
		a = max;
		b = max;
	}
	return max;
	
}
//Задача 2

int& lin (int ar[], int length) {
	
	for (int i = 0; i < length; i++)
		if (ar[i] < 0)
			return ar[i];

	for (int i = 0; i < length; i++)
		if (ar[i] > 0)
			return ar[0];
}
//Задача 3
 
void showArray(int ar1[], int length1, int ar2[], int length2) {
	cout << "[";
	for (int i = 0; i < length1; i++)
		cout << ar1[i] << ", ";
	cout <<"\b\b]"<< endl;
	cout << "[";
	for (int i = 0; i < length2; i++)
		cout << ar2[i] << ", ";
	cout << "\b\b]";
}

void Arrey3(int ar1[], int length1, int ar2[], int length2) {
	int *pAr1 = ar1;
	int* pAr2 = ar2;
	
	for (int i = 0; i < length1; i++) {
		for (int j = 0; j < length2; j++)

			if (pAr1[i] == pAr2[j])
				
				pAr2[j] = 0;
	}
	cout << "[";
	for (int i = 0; i < length2; i++)
		cout << ar2[i] << ", ";
	cout << "\b\b]";
		
}

int main() {
	setlocale(LC_ALL, "ru");
	srand(time(NULL));

	//Задача 1
	cout << "Задача 1\nВведите 3 числа:";
	int a, b, c;
	cin >> a >> b >> c;
	max(a, b, c);
	cout << a << " ," << b << " ," << c << endl;

	//Задача 2
	cout << "Задача 2\n";
	int arr[10]={8,7,-2,4,5,3,17,-22,3,9};
	cout <<  lin(arr, 10) << endl;
	
	//Задача 3
	cout << "задача 3\n";
	int Array1[5] = { 3,8,0,9,0 };
	int Array2[5] = { 1,3,9,4,8 };
	cout << "Два изначальных массива "<< endl;
	showArray(Array1, 5, Array2, 5);
	cout << endl;
	cout << "====================\n";
	cout << "Массив после функции\n";
	Arrey3(Array1, 5, Array2, 5);
	return 0;
}
