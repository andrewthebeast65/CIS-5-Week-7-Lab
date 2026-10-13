// Andrew Savio
// CIS 5 - Week 7 Lab: Two arrays

#include <iostream>
using namespace std;

int main()
{
    const int N = 5;
    int quiz[N] = { 88, 92, 70, 95, 81 };
    int lab[N]  = { 70, 70, 70, 70, 70 };

    // Quiz array
    cout << "Quiz" << endl;
    int sum = 0;
    int hi = quiz[0];
    for (int i = 0; i < N; ++i)
    {
        cout << "[" << i << "] " << quiz[i] << endl;
        sum += quiz[i];
        if (quiz[i] > hi)
            hi = quiz[i];
    }
    cout << "Sum: " << sum << endl;
    cout << "High: " << hi << endl;

    // Lab array
    cout << "Lab" << endl;
    sum = 0;
    hi = lab[0];
    for (int i = 0; i < N; ++i)
    {
        cout << "[" << i << "] " << lab[i] << endl;
        sum += lab[i];
        if (lab[i] > hi)
            hi = lab[i];
    }
    cout << "Sum: " << sum << endl;
    cout << "High: " << hi << endl;

    return 0;
}
