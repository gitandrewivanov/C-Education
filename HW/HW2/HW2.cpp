#include <iostream>
using namespace std;

//1. Напишите программу, которая выводила бы на экран
//текстовую таблицу(используйте escape - последовательности)

//2.Дана диагональ телевизора в дюймах.Написать про -
//грамму, определяющую эту же диагональ в сантиметрах
//(1 дюйм = 2.54 сантиметров).
//Ниже представлен пример для проверки программы
//на корректность.

//3.Емкость аккумулятора смартфона составляет N мАч.
//Написать программу, определяющую минимальную
//емкость переносного зарядного устройства(powerbank),
//если необходимо 3 полных заряда смартфона.
//Ниже представлен пример для проверки программы на корректность.

//4.За один день хомячок съедает K грамм корма.Написать программу,
//определяющую закупку корма в килограммах на 30 дней.
//Ниже представлен пример для проверки программы на корректность.

void Foo1();
void Foo2();
void Foo3();
void Foo4();


int main()
{
    Foo1();
    Foo2();
    Foo3();
    Foo4();
}

void Foo4()
{
    const int daysCount = 30;
    const int grammsPerKg = 1000;
    float feedQty;
    cout << "Please enter feed qty:" << endl;
    cin >> feedQty;
    system("cls");
    cout << "Input parameters:" << endl;
    cout << "Feed qty per day (gr.) -> " << feedQty << endl;
    cout << "=---------------------=" << endl;
    cout << "Output data:" << endl;
    cout << "Total feed qty for "<< daysCount<< "days : " << (feedQty * daysCount) / grammsPerKg << " kg." << endl;
}

void Foo3()
{
    const int chargeTimes = 3;
    float accumVolume;
    cout << "Please enter accumulator volume:" << endl;
    cin >> accumVolume;
    system("cls");
    cout << "Input parameters:" << endl;
    cout << "Volume of smartphone accumulator (mAh.) -> " << accumVolume << endl;
    cout << "=---------------------=" << endl;
    cout << "Output data:" << endl;
    cout << "Min capacity: " << (accumVolume * chargeTimes) << " mAh." << endl;
}

void Foo2()
{
    const float smPerInch = 2.54;
    float tvDiag;
    cout << "Please enter TV diag in inches:" << endl;
    cin >> tvDiag;
    system("cls");
    cout << "" << endl;
    cout << "TV diag(inch) -> "<< tvDiag << endl;
    cout << "=---------------------="<< endl;
    cout << "Output data:" << endl;
    cout << "TV diag : "<< (tvDiag * smPerInch) << " sm." << endl;
}

void Foo1()
{
    cout << "======================================================" << endl;
    cout << "|    X    |    Y    |  X AND Y  |  X OR Y  |  NOT X  |" << endl;
    cout << "======================================================" << endl;
    cout << "|    0    |    0    |     0     |     0    |    1    |" << endl;
    cout << "|    0    |    1    |     0     |     1    |    1    |" << endl;
    cout << "|    1    |    0    |     0     |     1    |    0    |" << endl;
    cout << "|    1    |    1    |     1     |     1    |    0    |" << endl;
    cout << "======================================================" << endl;
}
