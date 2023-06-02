def insertionSort(arr):
    for i in range(1, len(arr)):
        key = arr[i]
        j = i-1
        while j >= 0 and key < arr[j]:
            arr[j+1] = arr[j]
            j -= 1
        arr[j+1] = key
    return arr

arr = {12,12,4,2,4,467}
insertionSort(arr)
print ("Sorted array is: \n")
for i in range(len(arr)):
    print ("%d" %arr[i])
