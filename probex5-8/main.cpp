#include <iostream>
#include <string>
#include <map>
#include <queue>

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
    map<const char, const string> trans = {
        {'0', "〇"},
        {'1', "一"},
        {'2', "二"},
        {'3', "三"},
        {'4', "四"},
        {'5', "五"},
        {'6', "六"},
        {'7', "七"},
        {'8', "八"},
        {'9', "九"},
    };

    while (true)
    {
        cout << "整数の値を入力してください。：";
        getline(cin, str);
        if (str.empty())
            break;

        try
        {
            stoi(str);
        }
        catch (...)
        {
            cout << "変換に失敗しました。";
            continue;
        }

        if (string::npos != str.find('+'))
        {
            str.erase(str.find('+'), 1);
            cout << "[正]";
        }

        if (string::npos != str.find('-'))
        {
            str.erase(str.find('-'), 1);
            cout << "[負]";
        }

        // show_array(str);
        queue<char> que_char;
        for (auto itr = str.cbegin(); itr != str.cend(); itr++)
        {
            que_char.push(*itr);
        }

        while (!que_char.empty())
        {
            cout << trans.find(que_char.front())->second;
            que_char.pop();

            if (que_char.size() % 3 == 0 && !que_char.empty())
                cout << ",";
        }
        cout << endl;
    }
    return 0;
}