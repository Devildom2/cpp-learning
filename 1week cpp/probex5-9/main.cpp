#include <iostream>
#include <string>
#include <map>
#include <queue>
#include <list>

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
    list<string> li_str = {"room", "wonderful", "pork", "trap", "kind", "money", "dog", "given", "yellow", "eat", "apple", "neighbor"};
    map<string, string> map_str;

    for (auto itr = li_str.cbegin(); itr != li_str.cend(); itr++)
    {
        const string &first = *itr;
        string second = "";
        for (auto itr2 = li_str.cbegin(); itr2 != li_str.cend(); itr2++)
        {
            const string &second_candidate = *itr2;
            const char first_end = first.at(first.size() - 1);
            const char second_start = second_candidate.at(0);

            if (first_end == second_start)
            {
                second = second_candidate;
                break;
            }
        }
        map_str.insert(make_pair(first, second));
    }

    /*
    for (auto itr = map_str.cbegin(); itr != map_str.cend(); itr++)
    {
        cout << itr->first << ":" << itr->second << endl;
    }
    */
    auto itr = li_str.cbegin();
    for (; itr != li_str.cend(); itr++)
    {
        auto itr2 = map_str.cbegin();
        for (; itr2 != map_str.cend(); itr2++)
        {
            if (*itr == itr2->second)
            {
                break;
            }
        }
        if (itr2 == map_str.cend())
        {
            break;
        }
    }

    string &prev_str = const_cast<string &>(*itr);

    cout << "最初の単語" << prev_str << endl
         << endl;

    // 順に出力
    while (1)
    {
        cout << prev_str << endl;

        const string next_str = map_str[prev_str];
        if (next_str.empty())
        {
            break;
        }
        prev_str = next_str;
    }
    return 0;
}