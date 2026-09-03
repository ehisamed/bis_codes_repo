# Вариант 23 — Лабораторная работа №1 (линейный алгоритм)

## Формула
$$y = \dfrac{\mathrm{tg}^2 a + \arccos^2 b}{a(c+\cos b)}$$

## Блок-схема
Файл `scheme.drawio`.

## Код (`solution.cpp`)
```cpp
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c, y;
    cout << "Vvedite a, b, c: ";
    cin >> a >> b >> c;

    y = (pow(tan(a), 2) + pow(acos(b), 2)) / (a * (c + cos(b)));

    cout << "y = " << y << endl;
    return 0;
}
```

## Объяснение построчно
1. `#include <iostream>` — ввод/вывод.
2. `#include <cmath>` — `pow`, `tan`, `acos`, `cos`.
3. `using namespace std;` — упрощает запись.
4. `int main() {` — начало главной функции.
5. `double a, b, c, y;` — переменные для данных и результата.
6. `cout << "Vvedite a, b, c: ";` — приглашение к вводу.
7. `cin >> a >> b >> c;` — чтение чисел.
8. `y = (pow(tan(a), 2) + pow(acos(b), 2)) / (a * (c + cos(b)));` — вычисление:
   - `tan(a)` — тангенс $a$; `pow(tan(a), 2)` — $\mathrm{tg}^2 a$;
   - `acos(b)` — арккосинус $b$; `pow(acos(b), 2)` — $\arccos^2 b$;
   - сумма даёт числитель;
   - `cos(b)` — косинус $b$; `c + cos(b)` — сумма;
   - `a * (...)` — знаменатель;
   - деление даёт `y`.
9. `cout << "y = " << y << endl;` — вывод результата.
10. `return 0;` — успешное завершение.
11. `}` — конец `main`.

## Пример работы (тест)
Ввод: `a=1  b=0  c=1`
Расчёт: `tan(1)≈1.557408`, в квадрате `≈2.425519`; `arccos(0)≈1.570796`, в квадрате `≈2.467401`; числитель `≈4.892920`; `cos(0)=1`, `c+cos(b)=2`, `a*2=2`.
Вывод: `y ≈ 2.446460`

## Использование в Visual Studio
Вставить код в новый консольный проект C++.
