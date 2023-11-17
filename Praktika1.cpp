
#include <iostream>
using namespace std;

//Задание 1
int wok1()
{
    setlocale(0, "");
    system("title Возведение в квадрат и куб");

    cout << "Введите число: ";
    int num1;
    cin >> num1;
    system("cls");

    int num2 = num1;
    int num3 = num1;

    int sq;
    int cube;
    for (int i = 0; i < 1; i++)
    {
        sq = num1 *= num1;
    }

    for (int i = 0; i < 2; i++)
    {
        cube = num2 *= num3;
    }
    
    system("cls");
    cout << "Квадрат числа " << num3 << endl;
    cout << sq;
    cout << " " << endl;
    cout << "Куб числа " << num3 << endl;
    cout << cube << endl;
    system("pause");

    exit;
    return 0;
}

//Задание 2
int wok2()
{
    setlocale(0, "");
    system("title Среднее арефметическое 2-х чисел");

    cout << "Введите первое число: ";
    int pere1;
    cin >> pere1;
    system("cls");

    cout << "Введите второе число: ";
    int pere2;
    cin >> pere2;
    system("cls");

    int pere3 = pere1 + pere2;
    int pere4 = pere3 / 2;

    cout << "Стреднее арефметичесоечисел " << pere1 << " и " << pere2 << endl;
    cout << pere4 << endl;
    system("pause");

    exit;
    return 0;
}

//Задание 3
int wok3()
{
    setlocale(0, "");
    system("title Сумма чётных чисел в диапозоне");

    cout << "Введите первое число: ";
    int down;
    cin >> down;
    system("cls");

    cout << "Введите второе число число: ";
    int up;
    cin >> up;
    system("cls");

    int sum = 0;

    for (int i = down + (down % 2); i <= up; i += 2)
        sum += i;

    cout << "Сумма: " << sum << endl;
    system("pause");

    exit;
    return 0;
}

//Задание 4
int wok4()
{
    setlocale(0, "");
    system("title Числа кратные 5 и 7");

    int sum1 = 0;
    for (int i = 1; i <= 150; ++i) {
        if (i % 5 == 0 || i % 7 == 0) {
            sum1 += i;
        }
        else {

        }


    }

    cout << "Сумма чисел кратных 5 и 7:" << endl;
    cout << sum1 << endl;
    system("pause");

    exit;
    return 0;
}

//Задание 5
int wok5()
{
    setlocale(0, "");
    system("title 10 чисел Фибоначи");

    const int FIB0 = 0;
    const int FIB1 = 1;
    int fib1 = FIB0;
    int fib2 = FIB1;
    for (int i = 0; i <= 4; i++)
    {
        cout << fib1 << endl;
        cout << fib2 << endl;
        fib1 = fib1 + fib2;
        fib2 = fib1 + fib2;
    }
    system("pause");
    exit;
    return 0;
}

//Задание 6
int wok6()
{
    setlocale(0, "");
    system("title Все делители числа");

    cout << "Введите число:" << endl;
    int n;
    cin >> n;
    for (int i = n; i > 0; i--)
    {
        if (n % i == 0)
        {
            cout << "Делитель: " << i << endl;
        }
    }
    system("pause");

    exit;
    return 0;
}

int main()
{
    setlocale(0, "");
    //wok1();
    //wok2();
    //wok3();
    //wok4();
    //wok5();
    wok6();
}

