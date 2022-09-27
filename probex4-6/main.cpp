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
        cout << "[" << *itr << "] ";
    }
    cout << endl;
}

template <typename T>
void push_list(list<T>& array, T input)
{
    auto itr = array.begin();
    for (; itr != array.end(); itr++)
    {
        if (input < *itr)
        {
            break;
        }
    }
    array.insert(itr, input);
}

int main()
{
    string str;
    list<int> lInt;
    int iInput = 0;

    for (; cin >> iInput && iInput != -1;)
    {
        (void)push_list(lInt, iInput);
        (void)show_array(lInt);
    }

    cout << "入力完了" << endl
         << endl;
}