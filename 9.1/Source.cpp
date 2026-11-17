#include <iostream>
#include <cmath>
#include <iomanip>
#include "dod.h"
#include "sum.h"
#include "var.h"
using namespace std;
using namespace nsDod;
using namespace nsSum;
using namespace nsVar;

int main() {
    cout << "x_p = "; cin >> x_p;
    cout << "x_k = "; cin >> x_k;
    cout << "dx  = "; cin >> dx;
    cout << "e   = "; cin >> e;
    cout << endl;

    // заголовок і шапка таблиці
    cout << "Table: ln(x) via Taylor series" << endl;
    cout << "-----------------------------------------------" << endl;
    cout << setw(10) << "x" << setw(14) << "ln(x)"
         << setw(14) << "S" << setw(6) << "n" << endl;
    cout << "-----------------------------------------------" << endl;

    x = x_p;
    while (x <= x_k) {
        sum();
        cout << fixed << setprecision(6)
             << setw(10) << x
             << setw(14) << log(x)
             << setw(14) << s
             << setw(6)  << n << endl;
        x += dx;
    }
    cin.get(); cin.get();
    return 0;
}