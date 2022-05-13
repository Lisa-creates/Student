#include<vector>
#include <iostream>
using namespace std;
//Задание 3 (готово) 
/*int main()
{
    int n, m;
    cin >> n >> m;

    int** pp = new int* [n];
    for (int i = 0; i < n; i++)
        pp[i] = new int[m];
    for (int i = 0; i < n; i++) {
        for (int k = 0; k < m; k++) {
            pp[i][k] = rand() % 50;
            cout << pp[i][k] << "\t";
        }
        cout << endl;
    }
    int max, min, nmin = 0,nmax;
    for (int i = 0; i < n; i++) {
        min = pp[i][0];
        for (int j = 0; j < m; j++) {
            if (pp[i][j] <= min) { min = pp[i][j]; nmin = j; }
        }
        max = pp[0][nmin];
        for (int k = 0; k < n; k++) {
            if (pp[k][nmin] >= max) max = pp[k][nmin];
        }
        if (min == max) { cout << min<< " " <<"Number:  "<< i << " " <<nmin; break; }
        else if (i == n - 1) { cout << "No"; }
    }
delete pp;
} */

// Задание 4 (готово)

/*int main() {
   int n, null, mnull =0, k=0;
   cin >> n;
   vector  <int> a(n);
   srand(time(0));
   for (int i = 0; i < n; i++) {
       a[i] = rand() % 2;
       cout << a[i] << "  ";
       if (a[i] == 0) {
           k++;
           if (k > mnull) mnull = k;
       }
       else k = 0;
   }
   cout <<endl<< mnull;
}*/

// Задание 5 (готово)
int main() {
    int n, now;
    cin >> n;
    vector  <int> a(n);
    srand(time(0));
    for (int i = 0; i < n; i++) { a[i] = rand() % 4; cout << a[i] << "   "; }
    for (int i = 0; i < a.size(); i++) {
        for (int k = i + 1; k < a.size(); k++) { if (a[i] == a[k]) a.erase(a.begin() + k);
        }
    }
    cout << endl << a.size();
}
