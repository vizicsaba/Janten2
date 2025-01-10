#include <iostream>
using namespace std;

// Rekurzív függvény a faktoriális kiszámítására
//comment
int faktorialis(int n) {
    if (n <= 1) return 1;
    return n * faktorialis(n - 1);
}

int main() {
    int szam;
    cout << "Add meg a szamot: ";
    cin >> szam;

    cout << szam << "! = " << faktorialis(szam) << endl;

    return 0;
}
