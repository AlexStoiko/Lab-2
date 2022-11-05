#pragma once
#include <iostream>
#include <string>
using namespace std;

class Smartphone
{
    private:
    string model_sp;
    int quantity_sp;
    int price_sp;
    public:
    void input_sp();
    void output_sp();
    int income_sp();
    friend void outsmartp(Smartphone& smartphone, int n_sp);
    string getstr_sp();

    Smartphone(string model_sp, int quantity_sp, int price_sp);

    Smartphone();

    Smartphone(string model_sp);

    Smartphone(const Smartphone & smart_ref);

    ~Smartphone();
};
