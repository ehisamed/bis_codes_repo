# Вариант 17 — Лабораторная работа №1 (линейный алгоритм)

## Формула
$$y = \dfrac{\mathrm{arctg}(a^2+1) + \cos b}{a\,e^{c}}$$

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

    y = (atan(pow(a, 2) + 1) + cos(b)) / (a * exp(c));

    cout << "y = " << y << endl;
    return 0;
}
```

## Объяснение построчно
1. `#include <iostream>` — ввод/вывод.
2. `#include <cmath>` — `atan` (арктангенс), `pow`, `cos`, `exp`.
3. `using namespace std;` — упрощает запись.
4. `int main() {` — начало главной функции.
5. `double a, b, c, y;` — переменные для данных и результата.
6. `cout << "Vvedite a, b, c: ";` — приглашение к вводу.
7. `cin >> a >> b >> c;` — чтение чисел.
8. `y = (atan(pow(a, 2) + 1) + cos(b)) / (a * exp(c));` — вычисление:
   - `pow(a, 2)` — это $a^2$; `pow(a,2) + 1` — прибавляем 1;
   - `atan(...)` — арктангенс $\mathrm{arctg}(a^2+1)$;
   - `cos(b)` — косинус $b$; сумма даёт числитель;
   - `exp(c)` — вычисляет $e^{c}$; `a * exp(c)` — знаменатель $a\,e^{c}$;
   - деление даёт `y`.
9. `cout << "y = " << y << endl;` — вывод результата.
10. `return 0;` — успешное завершение.
11. `}` — конец `main`.

## Пример работы (тест)
Ввод: `a=1  b=0  c=0`
Расчёт: `a^2+1=2`, `arctg(2)≈1.107149`; `cos(0)=1`; числитель `≈2.107149`; `a*e^0=1`.
Вывод: `y ≈ 2.107149`

## Использование в Visual Studio
Вставить код в новый консольный проект C++.
