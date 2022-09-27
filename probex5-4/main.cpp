#include <iostream>
#include <string>
#include <map>
#include <random>
#include <set>

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

int main()
{
    string str;
    set<char> set_char;

    for (;cout << "英単語を入力：" && getline(cin, str) && !str.empty();)
    {
        for (auto itr = str.cbegin(); itr != str.cend(); itr++)
        {
            set_char.insert(*itr);
        }

        show_array(set_char);
        set_char.clear();
    }
}