#include <iostream>

using namespace std; 

void Merge(int* A, int f, int middle, int l, long long &k) {
    int* tmp = new int[l - f + 1];
    int s1 = f, e1 = middle, s2 = middle + 1, e2 = l, ind = 0; 
    while (s1 <= e1 && s2 <= e2) {
        if (A[s1] <= A[s2])
            tmp[ind++] = A[s1++];
        else{
            tmp[ind++] = A[s2++];
            k += e1 - s1 + 1;
        }
    }
    while (s1 <= e1)
        tmp[ind++] = A[s1++];
    while (s2 <= e2){
        tmp[ind++] = A[s2++];
    }
    for (int i = 0; i < l - f + 1; i++) {
        cout << tmp[i] << ' ';
    }
  //  cout << endl << k << endl;
    ind = 0;
    while (f <= l)
        A[f++] = tmp[ind++];
    delete[] tmp;
}

void Split(int* A, int f, int l, long long &k) {
    if (f < l) {
        int middle = f + (l - f) / 2;
     //   cout << "middle:" << middle << endl;
        Split(A, f, middle, k);
        Split(A, middle + 1, l, k);
        Merge(A, f, middle, l, k);
    }
}


int main()
{
    int N;
    cin >> N;
    int* a = new int[N];
    long long m, k = 0;
    for (int i = 0; i < N; i++) {
        cin >> m;
        a[i] = m;
    }
   // cout << Split(a, 0, N, k) << ' ';
    Split(a, 0, N-1, k);
    for (int i = 0; i < N; i++) {
        cout << a[i] << ' ';
    }
    cout << endl << k;
} 

/*vector<int> merge(vector <int> &a, vector <int>& b) {
    int i = 0, j = 0; 
    vector <int> res[a.lenght + b.lenght];
    for (int m = 0; k < res.length, i++) {
        if (j == b.lenght || i < a.length && a[i] < b[j]) {
            res[m] = a[i];
            i++;
        }

    }
    return res;
}


int vector mergeSort(vector <int>& a) {
    
}   
*/

/*int merge(vector <int>& a, int start, int end, int k) {
    if (end - start < 2)
        return k;
    else if (end - start == 2) {
        if (a[start] > a[end - 1]) {
            swap(a[start], a[end - 1]);
            k++;
        }
        return k;
    }
    else {//cout << endl << "k before " << k << endl;
        k = merge(a, start, start + (end - start) / 2, k);
        k = merge(a, start + (end - start) / 2, end, k);
        // k = k1 + k2 - k;
        vector<int> a1;
        int s1 = start, e1 = start + (end - start) / 2;
        int s2 = e1; 
        cout << start << e1 << end; //<< endl << k;
        while (a1.size() < end - start)
        {
            if (s1 >= e1) {
                a1.push_back(a[s2]);
                s2++;
            }
            else if (s2 < end && a[s2] < a[s1])
            {
                k +=  s2 - e1 + 1;
                a1.push_back(a[s2]);
                s2++;
                while (s2 < end && a[s2] < a[s1] && a1.size() < end - start) {
                    a1.push_back(a[s2]);
                    k++;
                    s2++;                 
                }
                    a1.push_back(a[s1]);
                    s1++;
            }
            else {
                a1.push_back(a[s1]);
                if (s2 == end) {
                    k += end - e1;// k 
                }
                s1++;
            }
        }
        for (int i = start; i < end; i++)
            a[i] = a1[i - start];
    cout << endl << k << " end" <<endl;
    return k;
    }   // return k;
}*/
