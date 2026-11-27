#include <iostream>
using namespace std;


template <class T>
T larger(T a, T b)
{
    if (a > b)
        return a;
    else
        return b;
}

int main()
{
    cout << "Larger student mark: " << findLarger(66, 100) << endl;

    cout << "Larger product price: " << findLarger(34.6, 75.9) << endl;

    cout << "Larger sensor reading: " << findLarger(48.7, 82.8) << endl;

    return 0;
}


