# Задача
Дана строка (в кодировке UTF-8)
Найти самый часто встречающийся в ней символ.
Если несколько символов встречаются одинаково часто, то можно вывести любой.

# Решение №1
Переберем все позиции и для каждой позиции в строке еще раз
переберем все позиции и в случае совпадения прибавим к счетчику
единицу. Найдем максимальное значение счетчика

# Решение №2
Переберем все символы, встречающиеся в строке, а затем переберем все позиции и в случае совпадения прибавим к счетчику единицу.
Найдем максимальное значение счетчика

# Решение №3
Заведем словарь, где ключом является символ, а значением - сколько раз он встретился. Если символ встретился впервые - создаем элемент словаря с ключом, совпадающем с этим символом и значением ноль. Прибавляем к элементу словаря с ключом, совпадающем с этим символом, единицу

# Задача покрытия тестами
Задача: даны три целых числа а, b, с.
Найдите все корни уравнения ах^2 + bx + c = 0 и выведите их в порядке возрастания

# Решение №1
d = b ** 2 - 4 * a * c 

    if d == 0:
    x1 = -b / (2 * a)
    print(x1)
else:

    x1 = (-b - sqrt (d)) / (2 * a)
    x2 = (-b + sqrt(d)) / (2 * a)

print (x1, ×2)

# Решение №2 
if a == 0:
if b != 0:
print (-c / b)
if b == 0 and c == 0:
print('Infinite number of solutions")
else:
d= b ** 2 - 4 * a * c
print(sart (d))
if d == OR
x1 = -b / (2 * a)
print (x1)
elif d > 0:
x1 = (-b - sqrt (d)) / (2 * a)
x2 = (-b + sqrt (d)) / (2 * a)
if x1 < ×2:
print (x1, ×2) else:
print (X2, ×1)