#pragma once
#include <iostream>
#include <string>
using namespace std;

struct smartphone
{
    string model_sp;
    int quantity_sp;
    int price_sp;
};

smartphone init_sp(string model, int quality, int price);

void input_smartp(struct smartphone& smartp);

void output_smartp(struct smartphone& smartp);