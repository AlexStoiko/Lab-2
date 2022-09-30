#pragma once
#include <iostream>
#include <string>
using namespace std;

class Creation
{
    public:
    int expenses_rent;
    int expenses_creation;

    void input_creat();

    void output_creat();

    int expenses_creat();

    Creation(int expenses_rent, int expenses_creation);

    Creation();

    Creation(int expenses_rent);

    ~Creation();
};
