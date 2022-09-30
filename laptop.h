#pragma once
#include <iostream>
#include <string>
using namespace std;

class Laptop
{
    public:
    string model_lt;
    int quantity_lt;
    int price_lt;

    void input();

    void output();

    Laptop(string model, int quality, int price);

    Laptop();

    Laptop(string model);

    Laptop(const Laptop& lap_ref);

    ~Laptop();
};
