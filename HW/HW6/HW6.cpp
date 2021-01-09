#include <iostream>
#include <map>
using namespace std;

//1. Разработать программу, которая выводит на экран горизонтальную линию из символов.
//Число символов, какой использовать символ, и какая будет линия — вертикальная,
//или горизонтальная — указывает пользователь.

//2. Написать программу, которая находит сумму всех целых нечетных чисел в диапазоне,
//указанном пользователем.

//3. Дано натуральное число n. Написать программу, которая вычисляет факториал неотрицательных целых
//чисел n(т.е.число целое и больше 0).Формула вычисления факториала приведена ниже.
//n != 1 * 2 * 3*....*n, (формула вычисления факториала числа n)
//0 != 1 (факториал 0 равен 1 (по определению факториала))

//4. У швеи имеется ткань длиной L. Ей необходимо пошить подушки длиной P.
//Условно договоримся, что ширина ткани совпадает с шириной подушки.
//Определить сколько подушек сможет пошить швея, если умножать и делить она не умеет.

//5. На складе имеется определенное количество ящиков с яблоками(N >= 0 — запрашивается у пользователя).
//Необходимо освободить склад. Машины по очереди подъезжают и забирают определенное количество ящиков.
//Определить сколько машин подъехало к складу.

//6. Написать программу подсчета стоимости разговора для разных мобильных операторов.
//Пользователь вводит стоимость разговора и выбирает с какого на какой оператор он звонит.
//Вывести стоимость на экран.

void Foo1();
void Foo2();
void Foo3();
long Factorial(int input);
void Foo4();
void Foo5();
void Foo6();
char GetOperatorCode(map<char, string> operators, bool isTargetOperator);
string GetMapData(map<char, string> mapToPrint);

int main()
{
    //Foo1();
    //Foo2();
    //Foo3();
    //Foo4();
    //Foo5();
    Foo6();
}

void Foo6()
{
    float cost;
    cout << "Please enter call cost:" << endl;
    cin >> cost;

    int callTime;
    cout << "Please enter call time:" << endl;
    cin >> callTime;

    map<char, string> operators = 
    {
        { '1', "Megafon" },
        { '2', "Beeline" },
        { '3', "MTS" },
    };
    
    char peronalOperatorCode = GetOperatorCode(operators, false);
    char targetOperatorCode = GetOperatorCode(operators, true);

    cout << "Cost for 1 minute from " << operators[peronalOperatorCode] << " to " << operators[targetOperatorCode]
        << " = " << (cost / callTime) << endl;
}

char GetOperatorCode(map<char, string> operators, bool isTargetOperator)
{
    const int retryCount = 5;
    char operatorCode;
    int operatorCodeRetry = 0;

    do
    {
        cout << "Please choose" << (isTargetOperator ? " target " : " your ")<< "mobile operator " << GetMapData(operators) << endl;
        cin >> operatorCode;
        if (!operators.count(operatorCode))
        {
            cout << "Wrong Code" << endl;
        }
        operatorCodeRetry++;
        if (operatorCodeRetry >= retryCount)
        {
            throw exception("Wrong Code");
        }
    }
    while (!operators.count(operatorCode));
    return operatorCode;
}

string GetMapData(map<char, string> mapToPrint)
{
    string s = "(";
    for (auto i = mapToPrint.begin(); i != mapToPrint.end(); i++)
    {
        s += i->first;
        s += " - ";
        s += i->second;
        s += ", ";
    }
    s = s.substr(0, s.size() - 2);
    s += ")";
    return s;
}

void Foo5()
{
    int appleBoxQty = 12340;
    int carVolume = rand() % 100 + 1;
    int carCount = 0;
    while (appleBoxQty > 0)
    {
        carCount++;
        appleBoxQty -= carVolume;
    }
    cout << carCount << endl;
}

void Foo4()
{
    int yarnLength = 1230;
    int yarnPerPillow = 12 * 4;
    int pillowCount = 0;
    while (yarnLength >= yarnPerPillow)
    {
        pillowCount++;
        yarnLength -= yarnPerPillow;
    }
    cout << pillowCount << endl;
}

void Foo3()
{
    int input = 12;
    long result = 1;
    for (int i = 1; i <= input; i++)
    {
        result *= i;
    }
    cout << "Cycle: " << result << endl;
    cout << "Recursion: " << Factorial(input) << endl;
}

long Factorial(int input)
{
    if (input <= 1)
    {
        return 1;
    }
    return input * Factorial(input - 1);
}

void Foo2()
{
    int begin = 1;
    int end = 100;
    int sum = 0;
    for (int i = begin; i <= end; i++)
    {
        if (i % 2 == 0)
        {
            sum += i;
        }
    }
    cout << sum << endl;
}

void Foo1()
{
    bool isVertical = true;
    char c = '*';
    int charsQty = 12;

    for (int i = 0; i < charsQty; i++)
    {
        cout << c;
        if (isVertical)
        {
            cout << "\n";
        }
    }
}