#include <iostream>
using namespace std;

//1. ������������ ������ � ���������� �����
//� ��������.���������� �������� ���������, �������
//��������� ��������� ������������� ������� � ����,
//������, ������� � ������� �� �� �����.

//2. �������� ���������, ������� �����������
//��������� � ���������� ������� ����� � �������� ��� -
//���.��������, ����� 12, 5 ������ ���� �������������
//� ���� 12 ��� 50 ���.

//3. �������� ���������, �����������, � �����
//��������� ����� �������� ���������.�������������
//��� ������ �� ����� ���������� ��������� ��������
//���� :
// ���������� �������� ����.
// ������� ����� ���������(������) = 1000.
// ������� �����(���.���) = 3.25.
// ��������� : 1000 �.
// ����� : 3 ��� 25 ��� = 205 ���.
// �� ������ �� ��������� : 17.56 �� / �.

//4. ������������ ��������� ���� ����� ������
//���������� ������ � ������ ���������� ��������� �������,
//� ����� ����������������� ��������� � �������
//� ��������.���������� ��������� �������� ����� ��
//������� ��� ���������� ������.

//5. �������� ���������, ������� �����������
//��������� ������������� ���������� ���� � ����������
//������ ������ � ���������� ����.��������, �������� -
//���� ���� 17 ����, ��������� ������ ������� �� �����
//2 ������ � 3 ���.

void Foo1();
void Foo2();
void Foo3();
void Foo4();
void Foo5();

int main()
{
    //Foo1();
    //Foo2();
    //Foo3();
    //Foo4();
    Foo5();
}

void Foo5()
{
    cout << "Please enter days count:" << endl;
    int days;
    cin >> days;
    cout << "Weeks: " << (days / 7) << " days: " << (days % 7) << endl;
}

void Foo4()
{
    cout << "Please enter call price:" << endl;
    float pricePerMin;
    cin >> pricePerMin;
    cout << "Please enter call duration" << endl;
    float duration;
    cin >> duration;
    float pricePerSecond = pricePerMin / 60;
    int minutes = duration;
    int totalSeconds = (minutes * 60) + (duration - minutes) * 100;
    cout << "Total call price is "<< (totalSeconds * pricePerSecond) <<" ye." << endl;
}

void Foo3()
{
    cout << "Calculating speed of running." << endl;
    float distance;
    float time;
    cout << "Please enter distance in meters = ";
    cin >> distance;
    cout << "Please enter time (min.sec) = ";
    cin >> time;
    int minutes = time;
    int seconds = (time - minutes) * 100;
    int totalSeconds = (minutes * 60) + seconds;
    float speed = (distance / 1000) / ((float)totalSeconds / 3600);
    cout << "Distance : " << distance << " m." << endl;
    cout << "Time : " << minutes << " min " << seconds << " sec = " << totalSeconds << " sec." << endl;
    printf("Your speed was : %.2f km per h", speed);
}

void Foo2()
{
    cout << "Please enter amount:" << endl;
    float input;
    cin >> input;
    int whole = input;
    int fraction = (input - whole) * 100;
    cout << whole << " grn " << fraction << " kop" << endl;
}

void Foo1()
{
    cout << "Please enter time in seconds:" << endl;
    int input;
    cin >> input;
    int hours = input / 3600;
    int minutes = (input - hours * 3600) / 60;
    int seconds = input % 60;
    cout << "Hours: " << hours << ", minutes: " << minutes << ", seconds: " << seconds << endl;
}