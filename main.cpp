#include <iostream>

using namespace std;

int main()
{
    int a[20],nr, i;
    cout << "Numarul de elemente din sirul a (maximum 20) : ";
    cin >> nr;
    for (i = 0; i < nr; i++) {
    cout << "a[" << i << "] = ";
        cin >> a[i];
    }
    for (i = 0; i < nr; i++) {
        if(a[i] < 0)
            a[i] = -a[i];
    }
    for (i = 0; i < nr; i++) {
        cout << a[i] << ", ";
    }
    cout << endl;
    return 0;
}
