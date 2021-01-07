#include <iostream>
using namespace std;

//1. �������� ���������, ����������� �����, ���������
//� ���������� �� ��������.

//2. ���� ����������� ����� � (a < 100). �������� ���������,
//��������� �� ����� ���������� ���� � ����
//����� � ����� ���� ����

//3. ��������, ��� 1 ���� ����� 2.54 ��.����������� ����������,
//����������� ����� � ���������� � ��������.
//������ � ������������� ����������� ����� ������� ����.

//4. �������� ��������� - �����������. ������������ ������
//��� ����� � �������� �������������� ��������(+, -, *, / , ��������, �������)
//������� �� ����� ��������� ��������.

void Foo1();
void Foo2();
void Foo3();
void Foo4();

int main()
{
    //Foo1();
    //Foo2();
    //Foo3();
    Foo4();
}

void Foo4()
{
    cout << "Please enter first value" << endl;
    int value1;
    cin >> value1;
    cout << "Please enter second value" << endl;
    int value2;
    cin >> value2;
    cout << "Please enter operation" << endl;
    string operation;
    cin >> operation;
    if (operation == "+")
    {
        cout << (value1 + value2) << endl;
    }
    else if (operation == "-")
    {
        cout << (value1 - value2) << endl;
    }
    else if (operation == "*")
    {
        cout << (value1 * value2) << endl;
    }
    else if (operation == "/")
    {
        cout << (value1 / value2) << endl;
    }
    else if (operation == "%")
    {
        cout << (value1 % value2) << endl;
    }
    else if (operation == "min")
    {
        cout << (value1 < value2 ? value1 : value2) << endl;
    }
    else if (operation == "max")
    {
        cout << (value1 > value2 ? value1 : value2) << endl;
    }
    else
    {
        cout << "Wrong operation" << endl;
    }
}

void Foo3()
{
    const float inch = 2.54;
    cout << "Please enter value to convert" << endl;
    float input;
    cin >> input;
    cout << "Please enter operation. Inches to sm - 1, sm to inches = 2" << endl;
    int operation;
    cin >> operation;
    if (operation == 1)
    {
        cout << (input * inch) << " sm in " << input << " inches" << endl;
    }
    else if (operation == 2)
    {
        cout << (input / inch) << " inches in " << input << " sm" << endl;
    }
    else
    {
        cout << "Wrong operation" << endl;
    }
}

void Foo2()
{
    cout << "Please enter value: " << endl;
    int input;
    cin >> input;
    int count = 0;
    int sum = 0;
    while (input > 0)
    {
        sum += input % 10;
        count++;
        input /= 10;
    }
    cout << "Sum of digits : " << sum << endl;
    cout << "Count of digits : " << count << endl;
}

void Foo1()
{
    cout << "Please enter value: " << endl;
    int input;
    cin >> input;
    cout << (input % 2 == 0 ? "even" : "odd") << endl;
}
