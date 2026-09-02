# Вариант 29 — Лабораторная работа №1 (линейный алгоритм)

## Формула
$$y = \dfrac{10^{a+b} + \sin^3 c}{b\sqrt{a^2+b^2}}$$

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

    y = (pow(10, a + b) + pow(sin(c), 3)) / (b * sqrt(pow(a, 2) + pow(b, 2)));

    cout << "y = " << y << endl;
    return 0;
}
```

## Объяснение построчно
1. `#include <iostream>` — ввод/вывод.
2. `#include <cmath>` — `pow`, `sin`, `sqrt`.
3. `using namespace std;` — упрощает запись.
4. `int main() {` — начало главной функции.
5. `double a, b, c, y;` — переменные для данных и результата.
6. `cout << "Vvedite a, b, c: ";` — приглашение к вводу.
7. `cin >> a >> b >> c;` — чтение чисел.
8. `y = (pow(10, a + b) + pow(sin(c), 3)) / (b * sqrt(pow(a, 2) + pow(b, 2)));` — вычисление:
   - `pow(10, a + b)` — это $10^{a+b}$;
   - `sin(c)` — синус $c$; `pow(sin(c), 3)` — куб синуса $\sin^3 c$;
   - сумма даёт числитель;
   - `pow(a,2)` и `pow(b,2)` — квадраты $a^2$, $b^2$; `sqrt(...)` — корень $\sqrt{a^2+b^2}$;
   - `b * sqrt(...)` — знаменатель;
   - деление даёт `y`.
9. `cout << "y = " << y << endl;` — вывод результата.
10. `return 0;` — успешное завершение.
11. `}` — конец `main`.

## Пример работы (тест)
Ввод: `a=0  b=1  c=0`
Расчёт: `10^(a+b)=10`, `sin(0)^3=0`; числитель `=10`; `sqrt(a^2+b^2)=1`, `b*1=1`.
Вывод: `y = 10`

## Использование в Visual Studio
Вставить код в новый консольный проект C++.
