# Реализация алгоритма нахождения выпуклой оболочки множества точек на плоскости

Выпуклой оболочкой множества точек А называется наименьшее выпуклое множество, содержащее А.
Очевидно, что выпуклой оболочкой конечного множества точек плоскости будет являться
многоугольник, вершины которого принадлежат этому множеству.

В данной работе требуется реализовать алгоритм, который будет выделять из заданного конечного множества
точек вершины его выпуклой оболочки.
На вход алгоритму подаётся множество из N двухмерных точек вида (x, y).
На выходе алгоритм даёт подмножество исходного множества точек, элементы которого
являются вершинами выпуклой оболочки.

Будем использовать для хранения входа и выходы программы текстовые файлы следующего формата:
```
x1 y1
x2 y2
...
x_n y_n
```

## Описание алгоритма Грэхема нахождения выпуклой оболочки:

1. Пусть p0 -- точка из множества A с минимальной координатой y или самая левая из таких точек при наличии совпадений
2. Пусть p1, p2, ... pN-1 -- остальные точки множества A, отсортированные в порядке возрастания полярного угла, измеряемого против часовой стрелки относительно точки p0 (если полярные углы нескольких точек совпадают, то по расстоянию до точки p0)
3. Положить в стек S точку p0
4. Положить в стек S точку p1
5. for i = 2 to N-1 do

        while угол, образованный точками NextToTop(S),Top(S) и p_i, образуют не левый поворот
            (тип поворота можно определить по знаку векторного произведения векторов (NextToTop(S),Top(S)) и (Top(S),p_i))
        do Pop(S)
        Положить в стек S точку p_i
6. То, что останется в стеке S и будет выпуклой оболочкой.

## Требования к реализации алгоритма

- Программа должна читать входные данные и записывать выходные в указанном ранее формате. Весь ввод-вывод осуществляется через файлы.
- При реализации запрещается использовать все структуры данных из STL, кроме std::vector. Также нельзя использовать функции для сортировки массивов и создания бинарной кучи.
- В процессе работы должны быть реализованы структуры данных стек и приоритетная очередь.
- На шаге 2 с помощью процедуры окучивания создаётся бинарная куча, являющаяся основой приоритетной очереди, далее по мере необходимости из очереди извлекаются точки p_i. Приоритет задаётся полярным углом и расстоянием, как описано в алгоритме Грэхема.
- Про бинарную кучу можно посмотреть [здесь](https://ru.wikipedia.org/wiki/Двоичная_куча). Необходимо реализовать алгоритм окучивания, который работает за O(N).

## Оценка сложности алгоритма Грэхема

Сложность первого шага O(N). При верной реализации алгоритма окучивания второй шаг будет иметь такую же сложность. На каждой итерации цикла for сложность извлечения точки p_i из очереди равна O(log(N)), всего цикл делает порядка N итераций. Суммарно за всё время работы цикла for, цикл while делает не больше N итераций, поскольку через стек S не может за это время пройти больше N точек. Таким образом, сложность всего алгоритма O(N*log(N)).
