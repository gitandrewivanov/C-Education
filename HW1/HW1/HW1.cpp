#include <iostream>

using namespace std;

//������� 1. ������� �� ����� ���� ������ ��������
//������������� ��� �����, � ��������� ������ ��� �� -
//���������.����������� escape - ������������������ ���
//��������������.

//������� 2. ������� �� ����� ���� �Every hunter wants��
//����� �������, ����� ������ ����� ��������� � �����
//������ � ��������������� ����������� ���������.

//������� 3. �������� ���������� � ������� ���� - ������
//� �������� ��� �� �����, � ��� ���� ��� ��� ������ ����
//�� ���� ����������.

void Foo1();
void Foo2();
void Foo3();


int main()
{
    setlocale(LC_ALL, "Russian");
    Foo1();
    Foo2();
    Foo3();
}


void Foo1()
{
    cout << "From fairest creatures we desire increase, \n";
    cout << "That thereby beauty's rose might never die," << endl;
    cout << "But as the riper should by time decease," << endl;
    cout << "His tender heir might bear his memory :" << endl;
    cout << "But thou, contracted to thine own bright eyes," << endl;
    cout << "Feed'st thy light's flame with self - substantial fuel," << endl;
    cout << "Making a famine where abundance lies," << endl;
    cout << "Thyself thy foe, to thy sweet self too cruel." << endl;
    cout << "\t\tSonnet 1 by William Shakespeare � ���������" << endl;
}

void Foo2()
{
    cout << "Every" << endl;
    cout << "\thunter" << endl;
    cout << "\t\twants" << endl;
    cout << "\t\t\tto know" << endl;
    cout << "\t\t\t\twhere" << endl;
    cout << "\t\t\t\t\tthe pheasant" << endl;
    cout << "\t\t\t\t\t\t\tis." << endl;
}

void Foo3()
{
    cout << "Devil's attorney" << endl;
    cout << "..." << endl;
    cout << "���.: 222 - 22 - 22" << endl;
    cout << "      222   | 222 |" << endl;
    cout << "      22    | 22  |" << endl;
    cout << "      22    | 22  |" << endl;
}
