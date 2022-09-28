#pragma once


class creation
{
    public:
    int expenses_rent;
    int expenses_creation;
};

creation init_cn(int expenses_rent, int expenses_creation);

void input_creat(class creation& creat);

void output_creat(class creation& creat);

int expenses_creat(class creation& creat);