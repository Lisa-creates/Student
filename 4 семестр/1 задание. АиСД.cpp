#include <fstream>
#include <stack>

using namespace std;

int main() {
    char input1[25] = "inp.txt", output[25] = "out.txt";
    std::ifstream inFile;
    inFile.open(input1);
    std::ofstream outFile;
    outFile.open(output);
    char c; 
    stack <int> s_push, s_pop, s_min_push, s_min_pop;
    int N, inp, current_min;
    inFile >> N;
    for (int i = 0; i < N; i++) {
        // int c;
        inFile >> c;
        if (c == '+') {
            int inp;
            inFile >> inp;
            s_push.push(inp);
            if (s_min_push.empty() || inp < s_min_push.top()) {
                s_min_push.push(inp);
            }
            else
                s_min_push.push(s_min_push.top());
        }
        else if (c == '-') {
            if (s_pop.empty()) {
                while (!s_push.empty())
                {
                    int tmp = s_push.top();
                    s_push.pop();
                    s_pop.push(tmp);
                    if (s_min_pop.empty() || tmp < s_min_pop.top())
                        s_min_pop.push(tmp);
                    else
                        s_min_pop.push(s_min_pop.top());
                    s_min_push.pop();
                }
            }
            s_pop.pop();
            s_min_pop.pop();
        }
        else if (c == '?')
        {
            if (s_pop.empty())
                current_min = s_min_push.top();
            else if (s_push.empty())
                current_min = s_min_pop.top();
            else
                current_min = s_min_pop.top() > s_min_push.top() ? s_min_push.top() : s_min_pop.top();
            outFile << current_min << endl;
        }

    }
    return 0;
} 