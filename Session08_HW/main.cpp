#include <iostream>
#include "Matice.h"

int main() {
    Matice<int> m{3, 3};
    int jednaDpole[] = {0, 1, 2, 3, 4, 5, 6, 7, 8};
    m.setZ(jednaDpole);
    Matice<int> mt = m.transponuj();
    mt.print();
    Matice<int> mmt = m.vynasob(mt);
    mmt.print();
    Matice<double> mmt_d = mmt.cast<double>();
    mmt_d.print();
    Matice<double> n_d{3, 3};
    double jednodpole_d[] = {5.5, 3, 2, 1, -1.3, 9, 3.6, 10, 7};
    n_d.setZ(jednodpole_d);

    n_d.print();

    Matrix<double> mmtn_d = mmt_d.vynasob(n_d);

    mmtn_d.print();
    Matice<int> r = mmtn_d.cast<int>();
    r.print();
    Matice<int> t{3, 3};
    int tpole[] = {816, 771, 515, 670, 631, 423, 365, 697, 756};
    t.setZ(tpole);
    t.print();
    std::cout << "r==t ? " << (r.jeStejna(t) ? "true" : "false") << std::endl;

    return 0;
}