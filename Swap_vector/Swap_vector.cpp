#include <iostream>
#include <vector>

void swapvec(std::vector<int>& x, int* y) //Метод для замены данных из вектора в массив и наоборот
{
    for (int i = 0; i < x.size(); i++)
    {
        int k = x[i];
        x[i] = *(y + i);
        *(y + i) = k;
    }
}

int main()
{
    std::vector<int> a = { 1,2,3,4,5 };   //Вектор
    int b[] = { 2,4,6,8,10 };             //Массив

    swapvec(a, b);                        //Вызываем метод

    for (int i = 0; i < a.size(); i++)    //Выводим данные из вектора
    {
        std::cout << ' ' << a[i];
    }
    std::cout << std::endl;
    for (int i = 0; i < std::size(b); i++)//Выводим данные из массива
    {
        std::cout << ' ' << b[i];
    }
    std::cout << std::endl;
}
