#include <iostream>
#include <vector>
#include <string>

#define _countof(array) (sizeof(array) / sizeof(array[0]))

using namespace std;

void get_maxlen(const vector<string> &in_array, vector<string> &out_array)
{
    auto itr = in_array.begin();
    out_array.push_back(*itr);

    for (itr++; itr != in_array.end(); itr++)
    {
        if (itr->length() >= out_array.at(0).length())
        {
            if (itr->length() != out_array.at(0).length())
            {
                out_array.clear();
            }
            out_array.push_back(*itr);
        }
    }
    return;
}

void get_minlen(const vector<string> &in_array, vector<string> &out_array)
{
    auto itr = in_array.begin();
    out_array.push_back(*itr);

    for (itr++; itr != in_array.end(); itr++)
    {
        if (itr->length() <= out_array.at(0).length())
        {
            if (itr->length() != out_array.at(0).length())
            {
                out_array.clear();
            }
            out_array.push_back(*itr);
        }
    }
    return;
}

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

int main()
{
    string str;
    vector<string> vStr;

    //  for (; (cin >> str) && (str.length() != 1) ;)
    // for (; cin.get() != '\n';)
    // for (; cin >> str ;)
    for (; getline(cin, str) && !str.empty();)
    {
        vStr.push_back(str);
    }

    cout << "入力完了" << endl
         << endl;

    auto itr = vStr.begin();
    vector<string> vStrMax{*itr};
    vector<string> vStrMin{*itr};

    (void)get_maxlen(vStr, vStrMax);
    (void)get_minlen(vStr, vStrMin);

    cout << "最大値：";
    (void)show_array(vStrMax);

    cout << "最小値：";
    (void)show_array(vStrMin);
};