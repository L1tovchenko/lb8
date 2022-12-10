// lr_12.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <windows.h>

using namespace std;

struct TelDovid{
    int number[5] = { 1, 2, 3, 4, 5 };
    int age[5] = { 20, 16, 17, 23, 40 };
    string name[50] = { "Андрій", "Микола", "Сергій", "Наталя", "Василій" };
    string surname[50] = { "Соколов", "Скрипка", "Шевченко", "Костенко", "Харчук" };
    string midName[50] = { "Андрійович", "Олегович", "Сергійович", "Семенович" };
    string adress[50] = { "Айвозовського", "Космонавтів", "Пушкінська", "Артема", "Саймоловича" };
    int House[5] = { 2, 11, 9, 18, 5 };
    int Home[5] = { 3, 7, 12, 3, 22 };
    int nomer[5] = { 563121212, 563129171, 971242233, 965433328, 987594383 };

    void Info(int k){
        cout << "№ " << number[k] << "\t   Информація" << endl;
        cout << "Ім'я \t\t" << name[k] << endl;
        cout << "Прізвище \t" << surname[k] << endl;
        cout << "По батькові \t" << midName[k] << endl;
        cout << "Проживає на улиці " << adress[k] << ", дім " << House[k] << ", квартира " << Home[k] << "." << endl;
        cout << "Телефон " << "\t +380 " << nomer[k] << " " << endl;
    };
};
int main(){
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    cout << "Введіть 1 або 2:\n(1 - номер телефона, 2 - ім'я): " << endl;
    int a,b;
    string c;
    TelDovid Abonent;
    cin >> a;
    switch (a) {
    case 1:
    cout << "Введіть телефон: ";
    cin >> b;
        for (int i = 0; i < 6; i++){
            if (b == Abonent.nomer[i]){
                Abonent.Info(i);
            }
        }
        break;
    case 2:
    cout << "Введіть ім'я: ";
    cin >> c;
        for (int i = 0; i < 5; i++){
            if (c == Abonent.name[i]){
                Abonent.Info(i);
            }
        }
        break;
    default:
        cout << "ошибка!" << endl;
        break;
    }
    system("pause");
    return 0;
}

