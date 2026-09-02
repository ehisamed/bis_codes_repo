# Вариант 13 — Лабораторная работа №1 (линейный алгоритм)

## Формула
$$y = \dfrac{\sqrt{e^{a}+\mathrm{tg}^2 b}}{(a+b)c}$$

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

    y = sqrt(exp(a) + pow(tan(b), 2)) / ((a + b) * c);

    cout << "y = " << y << endl;
    return 0;
}
```

## Объяснение построчно
1. `#include <iostream>` — ввод/вывод.
2. `#include <cmath>` — `sqrt`, `exp`, `pow`, `tan`.
3. `using namespace std;` — упрощает запись.
4. `int main() {` — начало главной функции.
5. `double a, b, c, y;` — переменные для данных и результата.
6. `cout << "Vvedite a, b, c: ";` — приглашение к вводу.
7. `cin >> a >> b >> c;` — чтение чисел.
8. `y = sqrt(exp(a) + pow(tan(b), 2)) / ((a + b) * c);` — вычисление:
   - `exp(a)` — вычисляет $e^{a}$;
   - `tan(b)` — тангенс $b$; `pow(tan(b), 2)` — квадрат тангенса $\mathrm{tg}^2 b$;
   - сумма под корнем; `sqrt(...)` — квадратный корень — числитель;
   - `(a + b) * c` — знаменатель $(a+b)c$;
   - деление даёт `y`.
9. `cout << "y = " << y << endl;` — вывод результата.
10. `return 0;` — успешное завершение.
11. `}` — конец `main`.

## Пример работы (тест)
Ввод: `a=1  b=0  c=1`
Расчёт: `e^1≈2.718282`, `tan(0)=0`; `sqrt(2.718282)≈1.648721`; `(a+b)*c=1*1=1`.
Вывод: `y ≈ 1.648721`

## Использование в Visual Studio
Вставить код в новый консольный проект C++.
