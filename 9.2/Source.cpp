#include <iostream>
#include "macros.h"
using namespace std;

// Значення z задається макросом
// Має бути цілим числом (вимога директиви #if).
#define Z 0

int main()
{
    double x, y, w;

    cout << "x = "; cin >> x;
    cout << "y = "; cin >> y;
    cout << "z = " << Z << endl;

#if Z > 1
    // гілка z > 1
    cout << "branch: z > 1  ->  w = min((x-z)^2, x-y)" << endl;
    w = MIN(SQR(x - Z), x - y);
#else
    // гілка z <= 1
    cout << "branch: z <= 1  ->  w = max(x-y, y-z)" << endl;
    w = MAX(x - y, y - Z);
#endif

    PRINT(w);

    cin.get(); cin.get();
    return 0;
}