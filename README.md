# module_26_3

Задание 3. Реализация программы управления окном рабочего стола


Что нужно сделать

Реализуйте симуляцию работы окна в визуальном интерфейсе пользователя.

Окно располагается на виртуальном экране монитора, размером 80 × 50 точек. У окна есть несколько параметров, которые также задаются в пикселях: двумерные координаты левого верхнего угла и размеры, ширина и высота. Ширина и высота при этом не могут быть отрицательными, а координаты не могут выходить за область экрана.

Пользователь взаимодействует с программой с помощью команд:

    Команда move принимает вектор, на который надо сместить окно на экране. Сообщение с новыми координатами окна появляется на экране.
    Команда resize запрашивает из стандартного ввода новый размер окна. После изменения размера сообщение с новым размером выводится на экране.
    Команда display выводит текущее изображение монитора в консоль. 0 — это пиксель вне области окна, 1 — с окном.
    Команда close закрывает окно, выход из программы.
