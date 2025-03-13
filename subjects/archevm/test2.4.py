isFrom = False
flag = False
num1 = input()
num2 = input()
res = (bin(int(num1,2)+int(num2,2)))[2:].zfill(17)
if res[0] == "1":
	flag = (not flag)
	isFrom = True
	print("Из разряда")
if bool(res[1]) != bool(num1[0])+bool(num2[0]):
	flag = (not flag)
	print("В разряд")
print("Переполнение" if flag==True else "Переполнения нет")
print("Со знаком "+ ("верно" if (flag == False) else "неверно"))
print("Без знака "+ ("верно" if (isFrom == False) else "неверно"))
