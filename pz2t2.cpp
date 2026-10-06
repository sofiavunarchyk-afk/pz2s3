#include <iostream>
#include <forward_list>
#include <string>
using namespace std;
int main()
{
forward_list<string> devices = { "Ноутбук" };
devices.push_front("Маршрутизатор");
devices.push_front("Монітор");
cout << "Список пристроїв:" << endl;
for (string device : devices)
    {
    cout << device << endl;
    }
devices.pop_front();
cout << endl;
cout << "Після видалення першого пристрою:" << endl;
for (string device : devices)
    {
    cout << device << endl;
    }
return 0;
}