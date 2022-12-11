#include <iostream>
#include <string>
#include <map>
#include <random>
#include <set>

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

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

uint64_t get_rand_range(uint64_t min_val, uint64_t max_val)
{
    // 乱数生成器
    static std::mt19937_64 mt64(0);

    // [min_val, max_val] の一様分布整数 (int) の分布生成器
    std::uniform_int_distribution<uint64_t> get_rand_uni_int(min_val, max_val);

    // 乱数を生成
    return get_rand_uni_int(mt64);
}

int main()
{
    srand((unsigned int)time(NULL));

    cout << "乱数：";
    set<uint> ui_set;
    for (uint ui_cnt = 0; ui_cnt < 10; ui_cnt++)
    {
        // uint ui_randam = get_rand_range(1, 10);
        uint ui_randam = (rand() % 10) + 1;
        cout << ui_randam << " ";
        ui_set.insert(ui_randam);
    }
    cout << endl
         << "出現した数：";

    show_array(ui_set);
}