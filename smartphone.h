#pragma once
#include <iostream>
#include <string>
using namespace std;

class Smartphone
{
    public:
    string model_sp;
    int quantity_sp;
    int price_sp;

    void input_smartp();

    void output_smartp();

    Smartphone(string model, int quality, int price);

    Smartphone();

    Smartphone(string model);

    Smartphone(const Smartphone & smart_ref);

    ~Smartphone();
};
