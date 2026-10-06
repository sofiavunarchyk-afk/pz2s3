#include <iostream>
#include <forward_list>
#include <string>
using namespace std;
int main()
{
forward_list<string>
devices = { "Ноутбук", "Смартфон", "Планшет", "Принтер", "Сервер" };

for (auto it = devices.begin(); it != devices.end(); ++it)
    {
    if (*it == "Сервер")
        {
        devices.insert_after(it, "Маршрутизатор");
        break;
        }
    }

cout << "Технологічні пристрої:" << endl;
for (string device : devices)
    {
    cout << device << endl;
    }
return 0;
}