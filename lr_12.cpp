// lr_12.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//


#include <iostream>
#include <windows.h>

using namespace std;

struct TelDovid
{
    int number[5] = { 1, 2, 3, 4, 5 };
    int age[5] = { 20, 16, 17, 23, 40 };
    string name[50] = { "Андрій", "Микола", "Сергій", "Наталя", "Василій" };
    string surname[50] = { "Соколов", "Скрипка", "Шевченко", "Костенко", "Харчук" };
    string midName[50] = { "Андрійович", "Олегович", "Сергійович", "Семенович" };
    string adress[50] = { "Айвозовського", "Космонавтів", "Пушкінська", "Артема", "Саймоловича" };
    int House[5] = { 2, 11, 9, 18, 5 };
    int Home[5] = { 3, 7, 12, 3, 22 };
    string Tel[50] = { "+380 068 312 12", "+380 097 312 21", "+380 097 123 22", "+380 096 433 33", "+380 098 244 43" };

    void Info(int k)
    {
        cout << "№ " << number[k - 1] << "\t   Информація" << endl;
        cout << "Ім'я \t\t" << name[k - 1] << endl;
        cout << "Прізвище \t" << surname[k - 1] << endl;
        cout << "По батькові \t" << midName[k - 1] << endl;
        cout << "Проживає на улиці " << adress[k - 1] << ", дім " << House[k - 1] << ", квартира " << Home[k - 1] << "." << endl;
        cout << "Телефон " << Tel[k - 1] << endl;
    };
};
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    cout << "Введіть номер по книжці: ";
    int person;
    TelDovid Abonent;
    cin >> person;
    if (person < 6) { Abonent.Info(person); }
    else { cout << "Помилка. \n"; }
}