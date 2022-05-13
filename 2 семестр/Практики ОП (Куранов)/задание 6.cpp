// 2 сем. 6 задание.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <vector>
using namespace std;
// Задание 6. Вывести упорядоченну. последовательность наоборот, без повторений.
/*int main()
{
    int n, n1;
    cin >> n;
    n1 = n; vector <int>  a(n);
   
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 1; i < n; i++) {
        if (a[i] == a[i - 1]) {
            n1--;
        }
    }vector <int> a1(n1);
    a1[0] = a[n - 1];
    for (int i = 1; i < n1; i++) {
        for (int k = n - 2; k >= 0; k--) {
            if (a[k] != a[k + 1]) {
                a1[i] = a[k];
                i++;
            }
            if (i >= n1)break;
        }
    }
    for (int i = 0; i < n1; i++) {
        cout << a1[i]<<" ";
    }
}*/
// Задание 7 (наибольшие цифры на главной диагонали)
int max(int a[10][10], int max,int m, int anum[10][2]) {
    int difference = max - a[9][9], max2;
    for (int i = 0; i < 10; i++) {
        for (int k = 0; k < 10; k++) {
            if (max - a[i][k] <= difference && (anum[m-1][0] != i || anum[m-1][1] !=k) && a[i][k]<=max){
                int s = 0;
                if (a[i][k] == max) {
                    for (int l = 0; l < 10; l++) {
                        if (anum[l][0] != i || anum[l][1] != k)s++;
                    }
                }
                if (s==10||s==0){
                max2 = a[i][k];
                difference = max - a[i][k];
                anum[m][0] = i;
                anum[m][1] = k;}
            }
            
        }
    }
    return max2;
}
void Print(int *a) {
    for (int i = 0; i < 10; i++) {
        for (int k = 0; k < 10; k++) {

            cout << *(a + i*10 + k) << "\t";
        }
        cout << endl;
    }
    cout << endl << endl;
}
int main() {
    int a[10][10], anum[10][2];
    vector <int> amax(10);
    for (int i = 0; i < 10; i++) {
        for (int k = 0; k < 10; k++) {
            a[i][k] = rand() % 50;
        }
    } 
    amax[0] = a[9][9];
    anum[0][0] = 9;
    anum[0][1] = 9;
  
    for (int i = 0; i < 10; i++) {
        for (int k = 0; k < 10; k++) {
            if (a[i][k] > amax[0]) { amax[0] = a[i][k]; anum[0][0] = i; anum[0][1] = k; }
        }
    }

        for (int i = 1; i < 10; i++) {
            amax[i] = max(a, amax[i - 1], i, anum);
        } Print((int *)a);
        for (int v = 0; v < 10; v+=1) {
            swap(a[v][v], a[anum[v][0]][anum[v][1]]); 
            for (int i = 0; i < 10; i++) {
                if (anum[i][0] == anum[i][1] && anum[i][1] == v) {
                    anum[i][0] = anum[v][0]; anum[i][1] = anum[v][1];
                }
            }
        }
       Print((int*)a);
}
