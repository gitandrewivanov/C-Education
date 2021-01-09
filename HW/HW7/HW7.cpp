#include <iostream>
#include <math.h>
using namespace std;

//1. Пользователь вводит с клавиатуры число больше нуля, необходимо вывести все его цифры, начиная с конца.
//Примечание.Например, пользователь ввел число 12345. На экране должно появиться число наоборот — 54321.

//2. Пользователь вводит с клавиатуры число, необходимо показать на экран сумму его цифр.
//Примечание.Например, пользователь ввел число 12345. На экране должно появиться сообщение о том, что сумма цифр числа 15.

//3. В первый день улитка проползла 15 см.Каждый следующий день она проползала на 2 см дальше.
//Определить какое общее расстояние проползет улитка через N дней.
//Примечание.Например, пользователь ввел число 4. Следовательно, улитка ползла 4 дня,
//поэтому суммарный путь составит 72 см.

//4. Для принятия решения студент Д. подбрасывал монетку 9 раз. Если в результате количество выпавших монеток
//стороной «орел» было четным числом, принимал решение в положительную сторону, иначе в отрицательную.
//Напишите программу, которая 9 раз запрашивает число 1 или 0 (орел / решка) и выдает соответствующий
//результат решения проблемы студента Д.

//5. Вывести на дисплей календарь на выбранный месяц с учетом указанного номера дня недели для начала месяца.
//Бонусное задание : определить количество выходных в заданном месяце.

//6. Напишите программу, которая вычисляет сумму целых чисел от N до 500 (значение N вводится с клавиатуры)

//7. Напишите программу, которая запрашивает два целых числа x и y, после чего вычисляет и выводит значение x в степени y

//8. Найти среднее арифметическое всех целых чисел от 1 до 1000

//9. Найти произведение всех целых чисел от N до 20 (значение N вводится с клавиатуры 1 <= N <= 20)

//10. Написать программу, которая выводит на экран таблицу умножения на k, где k - номер варианта.


void Foo1();
void Foo2();
void Foo3();
void Foo4();
void Foo5();
int GetDaysCountByMonthNumber(int yearNumber, int monthNumber);
void Foo6();
void Foo7();
void Foo8();
void Foo9();
void Foo10();

int main()
{
    //Foo1();
    //Foo2();
    //Foo3();
    //Foo4();
    //Foo5();
    //Foo6();
    //Foo7();
    //Foo8();
    //Foo9();
    Foo10();
}

void Foo10()
{
    int input = 0;
    cin >> input;
    for (int i = 0; i < 10; i++)
    {
        cout << input << " * " << i << " = " << input * i << endl;
    }
}

void Foo9()
{
    cout << "Please enter value (1 - 20)" << endl;
    int input = 0;
    cin >> input;
    if (input < 1 || input > 20)
    {
        return;
    }
    long long res = 1;
    for (int i = 1; i <= 20; i++)
    {
        res *= i;
    }
    cout << res << endl;
}

void Foo8()
{
    int sum = 0;
    for (int i = 1; i <= 1000; i++)
    {
        sum += i;
    }
    cout << sum / 1000<<endl;
}

void Foo7()
{
    int x;
    cin >> x;
    int y;
    cin >> y;
    cout << pow(x, y) << endl;
    int result = 1;
    for (int i = 0; i < y; i++)
    {
        result *= x;
    }
    cout << result << endl;
}

void Foo6()
{
    const int maxValue = 500;
    int input;
    cin >> input;

    if (input > maxValue)
    {
        return;
    }
    int sum = 0;
    for (; input < maxValue; input++)
    {
        sum += input;
    }
    cout << sum << endl;
}

void Foo5()
{
    int yearNumber;
    cout << "Please enter year number" << endl;
    cin >> yearNumber;

    int monthNumber;
    cout << "Please enter month number (1 - 12)" << endl;
    cin >> monthNumber;

    int startMonthDayNumber;
    cout << "Please enter start month day number (1 - 7)" << endl;
    cin >> startMonthDayNumber;

    int daysCount = GetDaysCountByMonthNumber(yearNumber, monthNumber);

    cout << "mn\ttu\twe\tth\tfr\tsa\tsu" << endl;
    
    for (int j = 0; j < startMonthDayNumber - 1; j++)
    {
        cout << "  \t";
    }
    int weekendCount = 0;
    for (int i = 0; i < daysCount; i++)
    {
        int dayNumber = i + 1;

        if (startMonthDayNumber == 6 || startMonthDayNumber == 7)
        {
            weekendCount++;
        }

        cout << dayNumber;

        if (dayNumber < 9)
        {
            cout << " ";
        }
        cout << "\t";

        if (startMonthDayNumber == 7)
        {
            cout << "\n";
            startMonthDayNumber = 1;
        }
        else
        {
            startMonthDayNumber++;
        }
    }
    cout << "\n";

    cout << "Weekends " << weekendCount << endl;
}

int GetDaysCountByMonthNumber(int yearNumber, int monthNumber)
{
    switch (monthNumber)
    {
        case 4:
        case 6:
        case 9:
        case 11:
        {
            return 30;
        }
        case 2:
        {
            if (yearNumber % 4 == 0)
            {
                return 29;
            }
            else
            {
                return 28;
            }
        }
        default:
        {
            return 31;
        }
    }
}

void Foo4()
{
    int retryCount = 9;
    int eagleCount = 0;
    while (retryCount-- > 0)
    {
        int input;
        cin >> input;
        if (input == 1)
        {
            eagleCount++;
        }
    }
    if (eagleCount % 2 == 0)
    {
        cout << "+" << endl;
    }
    else
    {
        cout << "-" << endl;
    }
}

void Foo3()
{
    const int delta = 2;
    int distance = 15;
    int days;
    cout << "Please enter days: " << endl;
    cin >> days;
    int totalDistance = 0;
    for (int i = 0; i < days; i++)
    {
        totalDistance += distance;
        distance += 2;
    }
    cout << totalDistance << endl;
}

void Foo2()
{
    int input;
    cout << "Please enter value: " << endl;
    cin >> input;
    int sum = 0;
    while (input > 0)
    {
        sum += input % 10;
        input /= 10;
    }
    cout << sum << endl;
}

void Foo1()
{
    int input;
    cout << "Please enter value: " << endl;
    cin >> input;
    while (input > 0)
    {
        cout << (input % 10);
        input /= 10;
    }
}