def insert_to_start(arr, key):
    i = 0
    while arr[i] != 0:
        i += 1
    j = i
    while j >= 0:
        arr[j + 1] = arr[j]
        j -= 1
    arr[0] = key

def insert_to_end(arr, key):
    i = 0
    while arr[i] != 0:
        i += 1
    arr[i] = key

def insert_at_index(arr, index, key):
    i = 0
    while arr[i] != 0:
        i += 1
    j = i
    while j >= index:
        arr[j + 1] = arr[j]
        j -= 1
    arr[index] = key

def print_arr(arr):
    i = 0
    while arr[i] != 0:
        print(arr[i], end=" ")
        i += 1
    print()

arr = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
insert_to_start(arr, 10)
insert_to_end(arr, 30)
