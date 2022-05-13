// 2 сем.задание 5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
// Задача 1.
/*#include <iostream>
#include<vector>

using namespace std;
int main()
{

	int n, min, j;
	cin >> n;
	vector <int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n - 1; i++) {
		min = i;
		for (int j = i + 1; j < n; j++) {
			if (a[min] > a[j]) min = j;
		}
		if (min != i) swap(a[min], a[i]);
	}
	for (int i = 0; i < 5; i++) {
		cout << a[i] << " ";
	}
}*/
// Задача 2.
/*#include <iostream>
#include<vector>

using namespace std;
int main()
{

	int n, key, j;
	cin >> n;
	vector <int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n; i++) {
		key = a[i];
		j = i - 1;
		while (j >= 0 && a[j] > key) {
			a[j + 1] = a[j];
			a[j] = key;
			j--;
		}

	}
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
}*/
// Задача 11

#include <iostream>
#include<vector>

using namespace std;
void print(vector <int> &a) {
	for (int i = 0; i < a.size(); i++) {
		cout << a[i] <<' ';
	}
	cout << endl;
}
void random(vector <int> &a) {
	srand(time(NULL));
	for (int i = 0; i < a.size(); i++) {
		if (i<a.size()/2){ a[i] = rand() % 10; }
		else { a[i] = rand() % 30; }
		if (i > 0 && a[i - 1] >= a[i]) i--;
	}
}
int main()
{
	int n, m,n1=0,m1=0;
	cin >> n >> m;
	vector <int> a(n), b(m), c(n+m);
	random(a);
	random(b);
	print(a);
	print(b);
	for (int i = 0; i < n + m; i++) {
		if (n1 < n && m1 < m) {
			if (a[n1] >= b[m1]) {
				c[i] = b[m1]; m1++;
			}
			else { c[i] = a[n1]; n1++; }
		}
		else if (n1>=n){ c[i] = b[m1]; m1++; }
		else if (m1>=m) { c[i] = a[n1]; n1++; }
	}
	print(c);
}