#include <iostream>
#include<vector>
#include<fstream>
#include <string>

using namespace std;
// Задание 7
/*int main()
{
    string input1 = "input1.txt";
    ifstream fin;
    fin.open(input1);
    if (!fin.is_open()) { cout << "Error2"; }
    else {

        string now;
        double k = 0, sum = 0, f;
        while (!fin.eof()) {
            fin >> f;
            k++;
            sum += f;
        }
        cout << sum / k;
        fin.close();
    }
}*/
// Задание 9
/*int main()
{
    string input1 = "input2.txt", file, word;
    ifstream fin;
    fin.open(input1);
    cin >> word;
    if (!fin.is_open()) { cout << "Error2"; }
    else {
        while (!fin.eof()) {
            getline(fin, file);
            for (int i = 0; i < file.size(); i++) {
                if (file[i] == word[0])
                    i++;
                int k = 1;
                for (; k < word.size() && file[i] == word[k]; k++) i++;
                if (k == word.size()) cout << file<<endl;
            }
        }
        fin.close();
    }
}*/
// Задание 10
int main() {
    string input1 = "input2.txt", file, word;
    int k = 0;
    ifstream fin;
    fin.open(input1);
    cin >> word;
    if (!fin.is_open()) { cout << "Error2"; }
    else {
        while (!fin.eof()) {
            fin >> file;


            if (file == word) k++;
        }
        cout << k;
    }
}