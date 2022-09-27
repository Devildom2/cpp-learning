#include <iostream>
#include <list>

#define _countof(array) (sizeof(array) / sizeof(array[0]))

using namespace std;

//  成分の表示
template <typename T>
void show_array(T array)
{
    for (auto itr = array.begin(); itr != array.end(); itr++)
    {
        if (*itr != 2)
        {
            cout << "[" << *itr << "] ";
        }
    }
    cout << endl;
}

int main()
{
    string str;
    list<int> lInt;
    int iInput = 0;

    for (; cin >> iInput && iInput != -1;)
    {
        lInt.push_back(iInput);
    }

    cout << "入力完了" << endl
         << endl;

    (void)show_array(lInt);
}