#include <iostream>
#include <vector>

#define _countof(array) (sizeof(array) / sizeof(array[0]))

using namespace std;

void show_ones_digit_match(vector<int>& array, int ones_digit)
{
    cout << "一の位が" << ones_digit << ":";
    bool matched = false;

    for (auto itr = array.begin(); itr != array.end(); itr++)
    {
        if ((*itr % 10) == ones_digit)
        {
            cout << "[" << *itr << "]";
            matched = true;
        }
    }

    if (true == matched)
    {
        cout << endl;
    }
    else
    {
        cout << "なし" << endl;
    }

    return;
}

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

    for (int i = -9; i < 10; i++)
    {
        (void)show_ones_digit_match(vInput, i);
    }

    return 0;
};