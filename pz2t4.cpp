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
int sum = 0;
for (string device : devices)
{
    sum = sum + device.length();
}
cout << "Загальна кількість символів: " << sum;
    return 0;
}