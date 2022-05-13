// 2 сем задание 2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
// 12345 123 124 125 134 135 145 234 235 245 345

// Определитель

/*#include <iostream>
using namespace std;
#include <ctime>
double matrixc(int** matrixt, int sizet) {
    if (sizet > 2) {
        double back = 0;
        for (int sizeh = 0; sizeh < sizet; sizeh++) {
            int** matrixo = new int* [sizet - 1];
            for (int i = 0; i < sizet - 1; i++)  matrixo[i] = new int[sizet - 1];
            for (int i = 0; i < sizet - 1; i++) {
                int startminus = 0;
                for (int j = 0; j < sizet - 1; j++) {
                    if (sizeh == j) startminus = 1;
                    int m = j;
                    if (startminus) m++;
                    matrixo[i][j] = matrixt[i + 1][m];
                }
            }
            if ((sizeh + 1 + 1) % 2 == 0) back += matrixt[0][sizeh] * matrixc(matrixo, sizet - 1);
            else back -= matrixt[0][sizeh] * matrixc(matrixo, sizet - 1);
        }
        return back;
    }
    else return  matrixt[0][0] * matrixt[1][1] - matrixt[0][1] * matrixt[1][0];
}

int main() {
    srand(time(0));
    int size;
    cin >> size;
    int** matrix = new int* [size];
    for (int i = 0; i < size; i++)  matrix[i] = new int[size];
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            //cin >> matrix[i][j];
            matrix[i][j] = (double)(rand() % 21);
            if (matrix[i][j] < 0) cout << " ";
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    if (size == 1) cout << matrix[0][0]; else if (size > 1)  cout << matrixc(matrix, size);
    return 0;
}*/

// Последовательность.

/*#include <iostream>
using namespace std;
#include <sstream>

void addnum(string rec, int count, int maxnum) {
    if (count > 0)
        for (int i = 1; i <= maxnum; i++)
            addnum(rec + to_string(i), count - 1, maxnum);
    else
        cout << rec << endl;
}

int main() {
    int count, max;
    cin >> count;
    cin >> max;
    addnum("", count, max);
    return 0;
}*/

// Ханойская башня
#include <iostream>
using namespace std;
void hanoi(int n,int i, int k) {
	if (n == 1) 
		cout << "Преложить диск 1 с " << i << " на " << k << endl;
	else {
		
		int tmp = 6 - i - k;
		hanoi(n - 1, i, tmp);
		if (n%10==0) cout << "Преложить диск " << n << " с " << i << " на " << k << endl;
		hanoi(n - 1, tmp, k);
	}
}
	
int main() {
	setlocale(LC_ALL, "Russian");
	hanoi(64, 1, 3);
}
