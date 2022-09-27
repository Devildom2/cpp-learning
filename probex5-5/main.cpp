#include <iostream>
#include <string>
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
    queue<string> qu_str;

    for (; cout << "文字列を入力：" && getline(cin, str) && !str.empty();)
    {
        qu_str.push(str);
    }
    
    // show_array(qu_str);
    while (!qu_str.empty())
    {
        cout << qu_str.front() << endl;
        qu_str.pop();
    }
}