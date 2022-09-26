#pragma once
#include <iostream>
#include <string>
using namespace std;

struct laptop
{
    string model_lt;
    int quantity_lt;
    int price_lt;
};

laptop init_lt(string model, int quality, int price);