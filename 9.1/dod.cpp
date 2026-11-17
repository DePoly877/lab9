#include "dod.h"
#include "var.h"
using namespace nsVar;

void nsDod::dod() {
    double q = (x - 1) / (x + 1);
    // коефіцієнт рекурентності
    a *= q * q * (2.0 * n - 1) / (2.0 * n + 1);
}