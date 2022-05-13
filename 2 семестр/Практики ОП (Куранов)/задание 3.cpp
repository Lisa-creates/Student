#include <iostream>
#include<vector>
#include<fstream>
#include <string>

using namespace std;
// Задание 1 (не закончено)
/*int main(int argc, char* argv[])
{
    string input1; //= "input1.txt";
    if (argc == 2) {  
        input1 = argv[1];
    }

    ifstream fin;
    fin.open(input1);
    if (!fin.is_open()) { cout << "Error2"; }
    else {
        int n, k = 0;
        cin >> n;
        char* str = new char[1024];
        while (!fin.eof())
        {
            fin.getline(str, 1024, '\n');
            k++;
        }
        fin.seekg(0); //встать в конец файла
        for (int i = 0; i < k; i++) {
            fin.getline(str, 1024, '\n');
            if (i >= k - n) { cout << str << endl; }
        }
        fin.close();
    }
}*/
//cd source\repos\2 сем задание 3\Debug
// 2 сем задание 3.exe input.txt
// Задание 3.
int main() {
    string input1 = "input2.txt";
    ifstream fin;
    fin.open(input1);
    if (!fin.is_open()) { cout << "Error2"; }
    else {
        string now;
        while (!fin.eof()) {
            fin >> now;
            for (int i = 0; i < now.size() - 1; i++) {
                if (now[i] == ')' && now[i + 1] == '{')
                    cout << now<<endl;
            }
        }
    }
}
// Задание 4.
/*int main() {
    string input1 = "input1.txt";
    ifstream fin;
    fin.open(input1);
    if (!fin.is_open()) { cout << "Error2"; }
    else {
        char now;
        int k = 0;
        while (!fin.eof()) {
            fin.get(now);
            if (now == '"') {
                k += 1; if (k % 2 == 0) cout << '"' << endl;
            }
            if (k % 2) { cout << now; }
        }
    }
            fin.close();


}*/
//Задание 5
/*int main() {
    string input1 = "input1.txt";
    ifstream fin;
    fin.open(input1);
    if (!fin.is_open()) { cout << "Error2"; }
    else {
        string now, max;
        int k = 0;
        while (!fin.eof()) {
            fin >> now;
            if (now.size() > k) {
                k = now.size();
                max = now;
            }
        }
        cout << max;
    }
    fin.close();
}*/
