#include <iostream>
#include <forward_list>
#include <string>
using namespace std;
int main()
{
forward_list<string>
devices = { "Ноутбук", "Смартфон", "Планшет", "Принтер", "Сервер" };
cout << "Технологічні пристрої:" << endl;
for (string device : devices)
    {
    cout << device << endl;
    }
return 0;
}
