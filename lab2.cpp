#include <iostream>
#include <iomanip>

int main()
{
    // ============ float ============
    float a, b, c, d, e, f, g, i, k, l;

    a = 1000.f;
    b = 0.0001f;

    c = a + b;        // (a + b)
    d = c * c;        // ПЕРВАЯ СКОБКА: (a + b)^2

    e = a * a;        // a^2
    f = 2 * a * b;    // 2ab
    g = e + f;        // ВТОРАЯ СКОБКА: a^2 + 2ab

    i = b * b;        // b^2
    k = g / i;        // (a^2 + 2ab) / b^2

    l = d - k;        // ЗНАЧЕНИЕ ВЫРАЖЕНИЯ

    std::cout << std::fixed << std::setprecision(10);
    std::cout << "float  l = " << l << std::endl;

    // ============ double ============
    double ad, bd, cd, dd, ed, fd, gd, id, kd, ld;

    ad = 1000.0;
    bd = 0.0001;

    cd = ad + bd;
    dd = cd * cd;       // (a + b)^2

    ed = ad * ad;
    fd = 2 * ad * bd;
    gd = ed + fd;       // a^2 + 2ab

    id = bd * bd;       // b^2
    kd = gd / id;       // (a^2 + 2ab) / b^2

    ld = dd - kd;

    std::cout << "double l = " << ld << std::endl;

    return 0;
}