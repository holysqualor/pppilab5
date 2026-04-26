#include <iostream>
#include <cstdlib>
#include <string.h>
#include "Calculator.h"

using namespace std;

int main(int argc, char** argv) {
    if (argc != 4 || strlen(argv[2]) != 1) {
        cout << "Can't u check ur parameters before writing them >:(((" << endl;
        return 1;
    }
    double a = atof(argv[1]), b = atof(argv[3]), res;
    Calculator calc;
    switch (*argv[2]) {
    case '+': res = calc.add(a, b);
        break;
    case '-': res = calc.sub(a, b);
        break;
    case '*': res = calc.mul(a, b);
        break;
    case '/': res = calc.div(a, b);
        break;
    default: {
        cout << "This operation does not exist :((((";
        return 1;
    }
    }
    cout << res << endl;
    return 0;
}