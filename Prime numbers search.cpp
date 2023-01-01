// Знайти прості числа.


#include <iostream>
using namespace std;
int main()
{
    long long i, k, divider, num;
start:
    cout << "введіть число від якого почнемо пошук простих чисел\n";
    cin >> num;  // вводимо число для перевірки
    cout << "\nрезультати перевірки:\n";
    if (num <= 0) // захист від тролів
    {
        cout << "\n\n перевіряємо лише додатні числа! \n спробуйте знову! \n\n";
        goto endspiel;
    }

    else if (num <= 3) // усі числа до 3 - прості

    {
        cout << "--------------" << endl << "ПРОСТЕ" << endl << endl;
        goto endspiel;
    }

    else if (num % 2 == 0) // усі парні числа

    {
        cout << "--------------" << endl << "парне" << endl << endl;
        goto search;
    }

    else // для всіх чисел після 5
        for (divider = 3; divider < num; divider += 2) // перевіряємо непарні дільники починаючи від 3
        {
            if (num % divider == 0) // поїхали

            {
                cout << num << " ділиться на " << divider << "\n "; // необов’язковий рядок, програма звітує
                num++;
                goto search;
            }

        }
    cout << num << " - ПРОСТЕ" << endl;
    goto folowing;

search:
    if (num % 2 == 0) // усі парні числа
    {
        num++;
        goto search;

    }
    else
        for (divider = 2; divider < num; divider++) // перевіряємо дільники починаючи від 2
        {
            if (num % divider == 0) // перевіряємо, чи ділиться на 2

            {
                cout << "тестували: " << num << " - ділиться на " << divider << "\n "; // необов’язковий рядок, програма звітує
                num++;
                goto search;
            }
        }

    cout << endl << num << " - ПРОСТЕ" << endl;

folowing:
    bool more;
    cout << "\nшукати наступне?\n 1 - так \t 0 - ні \t 2 - програма заглючить\n" << endl;
    cin >> more;
    if (more)
    {
        num++;
        goto search;
    }

endspiel:
    cout << "\nспробувати ще?\n 1 - так \t 0 - ні \t 2 - програма заглючить\n" << endl;
    bool restart;
    cin >> restart;
    if (restart)
    {
        goto start;
    }

    return num;
}


