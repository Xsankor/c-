#include <stdio.h>
#include <stdlib.h>
#include <clocale>
#include <iostream>
#include <ctime>
using namespace std;


int main()
{
	setlocale(LC_ALL, "Russian");
	const int phys_sizeA = 100, phys_sizeB = 100;
	int n = 0, m = 0;
	cout << " оличество элементов массива A = ";
	cin >> n;
	cout << " оличество элементов массива B = ";
	cin >> m;

	if ((n <= 0 || n > phys_sizeA) || (m <= 0 || m > phys_sizeB))
	{
		cout << "ќшибочный размер массива";
	}
	else
	{
		int* A = new int[n];
		int* B = new int[m];
		int k = 0;
		int* C = new int[k];
		int rand_num;
		srand(static_cast<unsigned int>(time(0)));
		cout << "A ";
		for (int i = 0; i < n; i++) {
			
			cin >> A[i];
		}
		cout << "B ";
		for (int i = 0; i < m; i++) {
			
			cin >> B[i];
		}
		int count = 0;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++) {
				if (A[i] == B[j]) {
					C[k] = A[i];
					k++;
				}
			}
		}

		cout << "Ёлементы массива A:" << endl;
		for (int i = 0; i < n; i++) {
			cout << A[i] << " ";
		}
		cout << endl;
		cout << "Ёлементы массива B:" << endl;
		for (int i = 0; i < m; i++) {
			cout << B[i] << " ";
		}
		cout << endl;
		cout << "Ёлементы массива C:" << endl;
		for (int i = 0; i < k; i++) {
			cout << C[i] << " ";
		}
		cout << endl;

		// —ортировка выбором
		for (int i = 0; i < k - 1; i++)
		{
			int min_ind = i;
			int min_val = C[i];
			for (int j = i + 1; j < k; j++)
			{
				if (C[j] < min_val)
				{
					min_ind = j;
					min_val = C[j];
				}
				C[min_ind] = C[i];
				C[i] = min_val;
			}
		}

		cout << "Ёлементы массива — по возрастанию:" << endl;
		for (int i = 0; i < k; i++) {
			cout << C[i] << " ";
		}
		cout << endl;
		delete[] A;
		delete[] B;
		delete[] C;
	}

	getchar();
	getchar();
}