/*
    ЄРШОВ АНДРІЙ ВАСИЛЬОВИЧ
    14.06.21
    Завдання 6. Створіть додаток «Телефонна книга». Необхідно зберігати дані про абонента (ПІБ, домашній телефон) всередині відповідного класу.
                Наповніть клас змінними-членами, функціямми-членами, конструкторами, використовуйте ініціалізатор, реалізуйте деструктор. 
                Обовязково необхідно виділяти динамічно пам'ять під ПІБ. Надайте користувачеві можливість шукати абонентів за ПІБ, за номером телефону, 
                показувати всіх абонентів.
                Примітка: Клас винести зовні, наповнення бази не менше 10 абонентів, програма повинна запускатись з .ехе файлу.
*/
#include "Contact.h"
#include<iostream>
#include<Windows.h>
#include<cstring>
#include<string>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    const int SIZE = 10;
    Contact* contact = new Contact[SIZE]
    {
        {new char[] {"ПЕТРЕНКО Петро Петрович"}, 637493635},
        {new char[] {"СИДОРЕНКО Іван Іванович"}, 637493335},
        {new char[] {"МАКАРЕНКО Макар Макарич"}, 637493235},
        {new char[] {"ФЕДОРЕНКО Симон Іванович"}, 672345670},
        {new char[] {"КУЛЕБА Іннеса Василівна"}, 993451237},
        {new char[] {"БАБИЧ Андрій Григорович"}, 931458991},
        {new char[] {"ТУРЧИН Андрій Семенович"}, 731450121},
        {new char[] {"БОЙКО Олена Михайлівна"}, 973450110},
        {new char[] {"СИРОТІН Євген Федорович"}, 995771330},
        {new char[] {"ШИЛО Григорій Савович"}, 661234567}
    };
    
    cout << "\t\t\t== МОЯ ТЕЛЕФОННА КНИГА ==" << endl << endl;
    
    char exit;
    do 
    {
        cout << "Якщо хочеш переглянути список усіх контактів натисни - 1, а далі клавішу Enter" << endl;
        cout << "Якщо хочеш знайти контакт за номером телефону натисни - 2, а далі клавішу Enter" << endl;
        cout << "Якщо хочеш знайти контакт за прізвищем, ім'ям і по-батькові натисни - 3, а далі клавішу Enter" << endl;
        char key;
        cout << "Будь-ласка оберіть опцію: "; cin >> key;
        cout << endl;
        system("cls");
        switch (key)
        {
        case'1':
            for (int i = 0; i < SIZE; i++)
            {
                cout << i + 1 << ". ";
                contact[i].ShowPhoneBook();
            }
            break;
        case'2':
            long long findPhoneNumber;
            cout << "Введіть номер телефону для пошуку абонента, а потім клавішу Enter:" << endl;
            cin >> findPhoneNumber;
            for (int i = 0; i < SIZE; i++)
            {
                if (contact[i].getPhone() == findPhoneNumber)
                    contact[i].ShowPhoneBook();
            }
            break;
        case '3':
            cin.get();
            string findName;
            cout << "Введіть прізвище, ім'я, по-батькові для пошуку абонента, а потім клавішу Enter:" << endl;
            getline(cin, findName);

            for (int i = 0; i < SIZE; i++)
            {
                if (contact[i].getName() == findName)
                    contact[i].ShowPhoneBook();
            }
            break;
        }
        cout << "\nЯкщо бажаєш продовжити натисни клавішу 'т', якщо ні - 'н', а потім клавішу Enter ";
        cin >> exit;
        cout << endl<<endl;
    } while (exit != 'н');
      
    delete[]contact;
      
    system("pause");
    return 0;
}
