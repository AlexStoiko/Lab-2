#pragma once
#include <iostream>
#include <string>
using namespace std;

class Laptop
{
    private:
    string model_lt;
    int quantity_lt;
    int price_lt;
    public:
    void input_lt();
    void output_lt();
    int income_lt();
    string getstr_lt();

    Laptop(string model_lt, int quantity_lt, int price_lt);

    Laptop();

    Laptop(string model_lt);

    Laptop(const Laptop& lap_ref);

    ~Laptop();
};
