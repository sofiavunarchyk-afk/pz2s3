#include <iostream>
#include <forward_list>
#include <string>
using namespace std;
int main()
{
    forward_list<string> devices = { "Ноутбук", "Смартфон", "Планшет", "Принтер", "Сервер"};
    string searchElement = "Сервер";
    string newElement = "Маршрутизатор";

    auto it = devices.begin();
    while (it != devices.end())
    {
        if (*it == searchElement)
        {
            // Вставка нового елемента після знайденого
            devices.insert_after(it, newElement);
            break;
        }

        ++it;
    }

    for (auto i = devices.begin(); i != devices.end(); ++i)
    {
        cout << *i << " ";
    }

    return 0;
}