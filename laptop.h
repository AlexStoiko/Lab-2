#pragma once
#include <iostream>
#include <string>
using namespace std;

class laptop
{
    public:
    string model_lt;
    int quantity_lt;
    int price_lt;
};

laptop init_lt(string model, int quality, int price);