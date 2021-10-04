# Our Excel

Задан CSV-файл (comma-separated values) с заголовком, в котором перечислены названия столбцов. Строки нумеруются положительными числами, необязательно в порядке возрастания. В ячейках CSV-файла могут хранится или целые неотрицательные числа или выражения вида
= ARG1 OP ARG2
где ARG1 и ARG2 - адреса ячеек в формате Имя_колонки Номер_строки, а OP – арифметическая операция из списка: +, -, *, /.
Например, таблица
| |**A**|**B**|**Cell**|
|:-:|:----:|:---:|:------:|
|**1**|1|0|1|
|**2**|2|=A1+Cell30|0|
|**30**|0|=B1+A1|5|


может быть представлена в CSV-формате следующим образом:

```
,A,B,Cell
1,1,0,1
2,2,=A1+Cell30,0
30,0,=B1+A1,5
```
(обратите внимание на пропуск первого значения в первой строке CSV-представления, он обозначает пустую левую верхнюю ячейку таблицы).
Требуется написать программу, которая читает произвольную CSV-форму из файла (количество строк и столбцов может быть любым), вычисляет значения ячеек, если это необходимо, и выводит получившуюся табличку в виде CSV-представления в консоль. Решением задания будет файл или несколько файлов с исходным кодом программы на языке C++, а также тестовые примеры (см. ниже, на Ваше усмотрение). 

Программа должна компилироваться компилятором GCC или Clang в Linux, mingw или Cygwin в Windows. Рекомендуется использование стандартной библиотеки (STL). Использование любых сторонних библиотек (не STL) запрещено. Имя CSV-файла можно передавать первым аргументом командной строки, например:
```
$ cvsreader.exe file.csv
```
где **csvreader.exe** – имя исполняемого файла, **file.csv** – имя файла с таблицей, **$** - приглашение командного интерпретатора.

Для приведённого примера результат, напечатанный в консоль, будет таким:
```
,A,B,Cell
1,1,0,1
2,2,6,0,
30,0,1,5
```
__________
Дополнительные требования:
- Используем *С++17* с современными фичами;
- Пишем Unit-тесты с помощью *GoogleTest*;
- После выполнения основного задания можно приделать графический интерфейс с помощью библиотеки *ImGui*.
