def fact(num):
    if num == 1:
        print(num)
        return
    print(num)
    fact(num - 1)

fact(5)
