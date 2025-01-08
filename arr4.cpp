#include <iostream>
#include<cstdlib>
using namespace std;

int main() {
    int N;
    cout << "Enter the number of students: ";
    cin >> N;

    int* scores = new int[N]; // Dynamic memory allocation for scores

    int l = 0, m = 0, n = 0, o = 0, p = 0;

    cout << "Enter the test scores of " << N << " students:\n ";
    for (int i = 0; i < N; ++i) {
        cin >> scores[i];
        if (scores[i] >= 0 && scores[i] <= 24) {
            l++;
        } else if (scores[i] >= 25 && scores[i] <= 49) {
            m++;
        } else if (scores[i] >= 50 && scores[i] <= 74) {
            n++;
        } else if (scores[i] >= 75 && scores[i] <= 99) {
            o++;
        } else if (scores[i] >= 100 && scores[i] <= 124) {
            p++;
        }
    }

    cout << "Score Range   Number of Students" << endl;
    cout << "0-24          " << l << endl;
    cout << "25-49         " << m << endl;
    cout << "50-74         " << n << endl;
    cout << "75-99         " << o << endl;
    cout << "100-124       " << p << endl;

    delete[] scores; // Freeing dynamically allocated memory

    return 0;
}
