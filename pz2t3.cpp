#include <iostream>
#include <forward_list>
#include <string>
using namespace std;
int main()
{
    forward_list<string> devices = 
    {
        "Ноутбук",
        "Смартфон",
        "Планшет",
        "Принтер",
        "Сервер"
    };
string searchDevice;
cout << "Введіть назву пристрою для пошуку"<<endl;
cin>>searchDevice;
auto it = devices.begin();
while (it != devices.end())
    {
        if (*it == searchDevice)
        {
            cout << "Елемент знайдено";
            break;
        }

        ++it;
    }
    if (it == devices.end())
    {
        cout << "Елемент не знайдено";
    }
    return 0;
}