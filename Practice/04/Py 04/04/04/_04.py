a = int(input("Введите первое число (a): "))
b = int(input("Введите второе число (b): "))

temp = a
a = b
b = temp
print("Меняем числа с дополнительной переменной (a, b):", a, b)

a, b = b, a
print("Меняем числа без дополнительной переменной (a, b):", a, b)

input()
