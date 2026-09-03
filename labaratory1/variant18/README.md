# Вариант 18 — Лабораторная работа №1 (линейный алгоритм)

## Формула
$$y = \dfrac{\mathrm{arctg}(b^2+1) + \cos^3 a}{(a+b)e^{|b+c|}}$$

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

    y = (atan(pow(b, 2) + 1) + pow(cos(a), 3)) / ((a + b) * exp(fabs(b + c)));

    cout << "y = " << y << endl;
    return 0;
}
```

## Объяснение построчно
1. `#include <iostream>` — ввод/вывод.
2. `#include <cmath>` — `atan`, `pow`, `cos`, `exp`, `fabs`.
3. `using namespace std;` — упрощает запись.
4. `int main() {` — начало главной функции.
5. `double a, b, c, y;` — переменные для данных и результата.
6. `cout << "Vvedite a, b, c: ";` — приглашение к вводу.
7. `cin >> a >> b >> c;` — чтение чисел.
8. `y = (atan(pow(b, 2) + 1) + pow(cos(a), 3)) / ((a + b) * exp(fabs(b + c)));` — вычисление:
   - `pow(b, 2)` — это $b^2$; `atan(pow(b,2)+1)` — арктангенс $\mathrm{arctg}(b^2+1)$;
   - `cos(a)` — косинус $a$; `pow(cos(a), 3)` — куб косинуса $\cos^3 a$;
   - сумма даёт числитель;
   - `b + c` — сумма; `fabs(...)` — модуль $|b+c|$; `exp(...)` — экспонента $e^{|b+c|}$;
   - `(a + b) * exp(...)` — знаменатель;
   - деление даёт `y`.
9. `cout << "y = " << y << endl;` — вывод результата.
10. `return 0;` — успешное завершение.
11. `}` — конец `main`.

## Пример работы (тест)
Ввод: `a=0  b=1  c=0`
Расчёт: `b^2+1=2`, `arctg(2)≈1.107149`; `cos(0)^3=1`; числитель `≈2.107149`. `a+b=1`, `|b+c|=1`, `e^1≈2.718282`; знаменатель `≈2.718282`.
Вывод: `y ≈ 0.775177`

## Использование в Visual Studio
Вставить код в новый консольный проект C++.
