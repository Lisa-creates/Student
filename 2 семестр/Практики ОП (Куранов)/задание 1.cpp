//2
/*#include <iostream>
#include <string>

using namespace std;

bool number(string a) {
    int m = 0, k = 0;
    for (int size = a.size(); k < size; k++) {
        if ('0' == a[k] || a[k] == '1')
            m+=1;}
    if (m == a.size()) return true;
    else return false;
}

int main()
{
    string a;
    cin>> a;
    if (number(a))
        cout << "YES"; 
    else cout << "NO";
}*/

// 4
/*#include <iostream>

using namespace std;

int main()
{
    int a, base, new_a=0, k=1;
    cin >> a >> base;
    if (base >= 2 && base < 10)
    {
        while (a>0) {
            new_a += k * (a % base);
            a /= base;
            k *= 10;
        }
        cout << new_a;
    }
    else if (base == 10) {
        cout << a;
    }
    else cout << "Error";
}
*/
//6

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    string a;
    getline(cin, a);
    for (int i = 0; i < a.size(); i++) {

        if ('0' <= a[i] && a[i] <= '9') // Печвть цифр
        {int  number= (int)a[i] - '0';
        if (number <= 5)  cout << string(number,'.') << string(5 - number, '-') << " "; 
        else cout << string(number - 5,'-')<<  string(10 - number,'.') << " "; 
        }

        switch (a[i]) { //Печать символов
        case ' ': {cout << "   "; break; }
        case '.': {cout << ".-.-.-" << " "; break; }
        case ',': {cout << "--..--" << " "; break; }
        case ':': {cout << "---..." << " "; break; }
        case '?': {cout << "..--.." << " "; break; }
        case '-': {cout << "-....-" << " "; break; }
        case '/': {cout << "--..-" << " "; break; }
        }
        if (a[i] == 'A' || a[i] == 'a')// Печать букв
                    cout << ".-" << " ";
                else if (a[i] == 'B' || a[i] == 'b')
                    cout << "-..." << " ";
                else if (a[i] == 'C' || a[i] == 'c')
                    cout << "-.-." << " ";
                else if (a[i] == 'D' || a[i] == 'd')
                    cout << "-.." << " ";
                else if (a[i] == 'E' || a[i] == 'e')
                    cout << "." << " ";
                else if (a[i] == 'F' || a[i] == 'f')
                    cout << "..-." << " ";
                else if (a[i] == 'G' || a[i] == 'g')
                    cout << "--." << " ";
                else if (a[i] == 'H' || a[i] == 'h')
                    cout << "...." << " ";
                else if (a[i] == 'I' || a[i] == 'i')
                    cout << ".." << " ";
                else if (a[i] == 'J' || a[i] == 'j')
                    cout << ".---" << " ";
                else if (a[i] == 'K' || a[i] == 'k')
                    cout << "-.-" << " ";
                else if (a[i] == 'L' || a[i] == 'l')
                    cout << ".-.." << " ";
                else if (a[i] == 'M' || a[i] == 'm')
                    cout << "--" << " ";
                else if (a[i] == 'N' || a[i] == 'n')
                    cout << "-." << " ";
                else if (a[i] == 'O' || a[i] == 'o')
                    cout << "---" << " ";
                else if (a[i] == 'P' || a[i] == 'p')
                    cout << ".--." << " ";
                else if (a[i] == 'Q' || a[i] == 'q')
                    cout << "--.-" << " ";
                else if (a[i] == 'R' || a[i] == 'r')
                    cout << ".-." << " ";
                else if (a[i] == 'S' || a[i] == 's')
                    cout << "..." << " ";
                else if (a[i] == 'T' || a[i] == 't')
                    cout << "-" << " ";
                else if (a[i] == 'U' || a[i] == 'u')
                    cout << "..-" << " ";
                else if (a[i] == 'V' || a[i] == 'v')
                    cout << "...-" << " ";
                else if (a[i] == 'W' || a[i] == 'w')
                    cout << ".--" << " ";
                else if (a[i] == 'X' || a[i] == 'x')
                    cout << "-..-" << " ";
                else if (a[i] == 'Y' || a[i] == 'y')
                    cout << "-.--" << " ";
                else if (a[i] == 'Z' || a[i] == 'z')
                    cout << "--.." << " ";

    }
}
