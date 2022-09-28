#pragma once
#include <iostream>
#include <string>
using namespace std;

class smartphone
{
    public:
    string model_sp;
    int quantity_sp;
    int price_sp;
};

smartphone init_sp(string model, int quality, int price);

void input_smartp(class smartphone& smartp);

void output_smartp(class smartphone& smartp);