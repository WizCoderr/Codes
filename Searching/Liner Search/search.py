def search(arr,key):
    for i in range(len(arr)):
        if arr[i] == key:
            return i
    return -1

arr = [1,2,3,4,5,6,7,8,9,10]
key = 5
print(search(arr,key))