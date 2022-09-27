#include <iostream>
#include <list>
#include <algorithm>

#define _countof(array) (sizeof(array) / sizeof(array[0]))

using namespace std;

//  成分の表示
template <typename T>
void show_array(T &array)
{
    for (auto itr = array.begin(); itr != array.end(); itr++)
    {
        cout << "[" << *itr << "] ";
    }
    cout << endl;
}
void erase_list(list<string> &array, size_t over_len)
{
    auto itr = array.begin();

    for (; itr != array.end(); itr++)
    {
        if (itr->length() >= over_len)
        {
            itr = array.erase(itr);
        }
    }
}

bool Pred_Func(string &str)
{
    // 削除判定
    if (str.length() >= 5)
        return true;
    return false;
}

int main()
{
    string str;
    list<string> lStr;

    for (; getline(cin, str) && !str.empty();)
    {
        lStr.push_back(str);
    }

    cout << "入力完了" << endl
         << endl;

    //(void)erase_list(lStr, 5);
    lStr.erase(remove_if(lStr.begin(), lStr.end(), Pred_Func), lStr.end());

    (void)show_array(lStr);
}