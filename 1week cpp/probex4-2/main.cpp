#include <iostream>
#include <vector>

#define _countof(array) (sizeof(array) / sizeof(array[0]))

using namespace std;

template <typename T>
T get_max(vector<T> &array)
{
    T imax = *(array.begin());
    auto itr = array.begin();
    for (itr++; itr != array.end(); itr++)
    {
        imax = (*itr > imax) ? *itr : imax;
    }
    return imax;
}

template <typename T>
T get_min(vector<T> &array)
{
    T imin = *(array.begin());
    auto itr = array.begin();
    for (itr++; itr != array.end(); itr++)
    {
        imin = (*itr < imin) ? *itr : imin;
    }
    return imin;
}

/*
template <typename T>
T get_min(vectoter<T> &array)
{
    for (auto itr = array.begin(), auto imin = *itr; itr != array.end(); itr++)
    {
        imin = (input < imin ? input : imin;
    }
    retur imin;
}
*/

int main()
{
    int input;
    vector<int> vInput;

    for (; (cin >> input) && (input != -1);)
    {
        vInput.push_back(input);
    }

    cout << "入力完了" << endl
         << endl;

    cout << "最大値：" << get_max(vInput) << endl;
    cout << "最小値：" << get_min(vInput) << endl;

    auto max = get_max(vInput);
    auto min = get_min(vInput);

    cout << "最大値型名：" << typeid(max).name() << endl;
    cout << "最小値型名：" << typeid(min).name() << endl;

    return 0;
};