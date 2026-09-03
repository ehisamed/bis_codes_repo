# Вариант 21 — Лабораторная работа №1 (линейный алгоритм)

## Формула
$$y = \dfrac{\sqrt{\sin^2 a^3}}{a\,\mathrm{arctg}\dfrac{b}{c}}$$

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

    y = sqrt(pow(sin(pow(a, 3)), 2)) / (a * atan(b / c));

    cout << "y = " << y << endl;
    return 0;
}
```

## Объяснение построчно
1. `#include <iostream>` — ввод/вывод.
2. `#include <cmath>` — `sqrt`, `pow`, `sin`, `atan`.
3. `using namespace std;` — упрощает запись.
4. `int main() {` — начало главной функции.
5. `double a, b, c, y;` — переменные для данных и результата.
6. `cout << "Vvedite a, b, c: ";` — приглашение к вводу.
7. `cin >> a >> b >> c;` — чтение чисел.
8. `y = sqrt(pow(sin(pow(a, 3)), 2)) / (a * atan(b / c));` — вычисление:
   - `pow(a, 3)` — это $a^3$; `sin(...)` — синус этого значения;
   - `pow(sin(...), 2)` — квадрат синуса $\sin^2 a^3$; `sqrt(...)` — корень из него — числитель;
   - `b / c` — деление; `atan(...)` — арктангенс отношения $\mathrm{arctg}(b/c)$;
   - `a * atan(b / c)` — знаменатель;
   - деление даёт `y`.
9. `cout << "y = " << y << endl;` — вывод результата.
10. `return 0;` — успешное завершение.
11. `}` — конец `main`.

## Пример работы (тест)
Ввод: `a=1  b=1  c=1`
Расчёт: `a^3=1`, `|sin(1)|≈0.841471`; `b/c=1`, `arctg(1)≈0.785398`; `a*0.785398≈0.785398`.
Вывод: `y ≈ 1.071394`

## Использование в Visual Studio
Вставить код в новый консольный проект C++.
