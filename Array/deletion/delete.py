def delete_from_start(arr):
    i = 0
    while arr[i] != 0:
        arr[i] = arr[i + 1]
        i += 1

def delete_from_end(arr):
    i = 0
    while arr[i] != 0:
        i += 1
    arr[i - 1] = 0

def delete_at_index(arr, index):
    i = index
    while arr[i] != 0:
        arr[i] = arr[i + 1]
        i += 1

def print_arr(arr):
    i = 0
    while arr[i] != 0:
        print(arr[i], end=" ")
        i += 1
    print()

arr = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
delete_from_start(arr)
delete_from_end(arr)
delete_at_index(arr, 5)
