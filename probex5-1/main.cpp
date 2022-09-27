#include <iostream>
#include <string>
#include <map>

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
    map<const string, const string> trans = {
        {"cat", "猫"},
        {"dog", "犬"},
        {"bird", "鳥"},
        {"tiger", "虎"}};

    while (true)
    {
        cout << "英語で動物の名前を入力してください：";
        getline(cin, str);
        if (str.empty())
            break;

        auto itr = trans.find(str);
        if (trans.end() != itr)
        {
            cout << "「" << itr->second << "」 です。" << endl;
        }
        else
        {
            cout << "吾輩の辞書にありません。" << endl;
        }
    }
}