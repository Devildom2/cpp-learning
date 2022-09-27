#include <iostream>
#include "collection.h"

#define _countof(array) (sizeof(array) / sizeof(array[0]))

using namespace std;

//_countof(arrayInt)

int main()
{
    //  配列変数の定義
    int arrayInt[] = {1, 5, 4, 2, 3};
    Collection<int> *Cint = new Collection<int>(arrayInt, _countof(arrayInt));
    Cint->showArray();
    cout << "最大値 : " << Cint->getMax() << endl;
    cout << "最小値 : " << Cint->getMin() << endl;
    delete Cint;

    double arrayDouble[] = {1.2, 3.5, 8.1, 4.9, 2.0, 2.2};
    auto *Cdouble = new Collection<double>(arrayDouble, _countof(arrayDouble));

    Cdouble->showArray();
    cout << "最大値 : " << Cdouble->getMax() << endl;
    cout << "最小値 : " << Cdouble->getMin() << endl;
    delete Cdouble;

    return 0;
}