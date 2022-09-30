#include "creation.h"


Creation::Creation(int exp_rent, int exp_creation)
{
    expenses_rent = exp_rent;
    expenses_creation = exp_creation;
}

Creation::Creation()
{
    expenses_rent = 0;
    expenses_creation = 0;
}

Creation::Creation(int exp_rent)
{
    expenses_rent = exp_rent;
    expenses_creation = 0;
}

Creation::~Creation() {}


void Creation::input_creat()
{
    cout << "Введите постоянные издержки" << endl;
    cin >> expenses_rent;
    cout << "Введите переменные издержки" << endl;
    cin >> expenses_creation;
}

void Creation::output_creat()
{
    cout << "Постоянные издержки = " << expenses_rent << endl;
    cout << "Переменные издержки = " << expenses_creation << endl;
}

int Creation::expenses_creat()
{
    return expenses_rent + expenses_creation;
}