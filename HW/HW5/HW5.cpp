#include <iostream>
using namespace std;

//1. Пользователь вводит с клавиатуры расстояние
//до аэропорта и время, за которое нужно доехать.
//Вычислить скорость, с которой ему нужно ехать.

//2. Пользователь вводит с клавиатуры время начала
//и время завершения телефонного разговора(часы,
//минуты и секунды). Посчитать стоимость разговора, если
//стоимость минуты — 30 копеек.

//3. Пользователь вводит с клавиатуры расстояние,
//расход бензина на 100 км и стоимость трех видов бензина.
//Вывести на экран сравнительную таблицу со стоимостью
//поездки на разных видах бензина.

//4. Пользователь вводит с клавиатуры время
//в секундах, прошедшее с начала дня.Вывести на экран
//текущее время в часах, минутах и секундах.Посчитать,
//сколько часов, минут и секунд осталось до полуночи.

//5. Пользователь вводит с клавиатуры время
//в секундах, прошедшее с начала рабочего дня.Посчитать,
//сколько целых часов ему осталось сидеть на работе, если
//рабочий день — 8 часов.

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
	int input = 12345;
	int secondsPerWorkingDay = 8 * 3600;
	int secondsLeft = secondsPerWorkingDay - input;
	cout << "To workday end\t" << secondsLeft / 3600 << ":" << (secondsLeft % 3600) / 60 << ":" << secondsLeft % 60 << endl;
}

void Foo4()
{
	int input = 45236;
	int secondsPerDay = 24 * 3600;
	int secondsToMidnight = secondsPerDay - input;
	cout <<"Current time\t" << input / 3600 << ":" << (input % 3600) / 60 << ":" << input % 60 << endl;
	cout<<"To midnight\t" << secondsToMidnight / 3600 << ":" << (secondsToMidnight % 3600) / 60 << ":" << secondsToMidnight % 60 << endl;
}

void Foo3() 
{
	int distance = 123405;
	float consumption = 3.6;
	float a1Cost = 49.4;
	float a2Cost = 46.5;
	float a3Cost = 43.7;

	cout << "A1\t" << ((float)distance / 1000) << " \t" << (distance * a1Cost * (consumption / 100 / 1000)) << endl;
	cout << "A2\t" << ((float)distance / 1000) << " \t" << (distance * a2Cost * (consumption / 100 / 1000)) << endl;
	cout << "A3\t" << ((float)distance / 1000) << " \t" << (distance * a3Cost * (consumption / 100 / 1000)) << endl;
}


void Foo2()
{
	const int costPerMin = 30;
	int beginHours = 12;
	int beginMinutes = 47;
	int beginSeconds = 56;
	int endHours = 13;
	int endMinutes = 1;
	int endSeconds = 12;

	int beginTotalSeconds = beginHours * 3600 + beginMinutes * 60 + beginSeconds;
	int endTotalSeconds = endHours * 3600 + endMinutes * 60 + endSeconds;

	int totalCallTime = endTotalSeconds - beginTotalSeconds;

	int totalCallMinutes = totalCallTime / 60;

	if (totalCallTime % 60 != 0)
	{
		totalCallMinutes++;
	}

	cout << "Total call price: " << ((totalCallMinutes * costPerMin) / 100) << " rub, "
		<< ((totalCallMinutes * costPerMin) % 100) << " kop." << endl;
}

void Foo1()
{
	cout << "Please enter distance to airport:" << endl;
	float distance;
	cin >> distance;
	cout << "Please enter required time" << endl;
	float time;
	cin >> time;
	printf("Required speed is: %.2f km/h", (distance / 1000) / (time / 60));
}
