#include <iostream>

using namespace std;

int main()
{
    int n, cnt = 0;
    int m1, m2,t;
    int num[10000];  
    while (cin >> n) {
        num[cnt++] = n;
        for (int i = 0; i < cnt; i++) {
            for (int j = i + 1; j < cnt; j++) {
                if (num[i] > num[j]) {
                    t = num[i];
                    num[i] = num[j];
                    num[j] = t;
                }
            }
        }
        if (cnt % 2 == 0) {
            m1 = num[cnt / 2 - 1];
            m2 = num[cnt / 2];
            cout << (m1 + m2) / 2 << endl;
        }
        else {
            cout << num[cnt / 2] << endl;
        }
    }
    return 0;
}


