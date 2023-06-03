fun deleteFromStart(arr: IntArray) {
    var i = 0
    while (arr[i] != 0) {
        arr[i] = arr[i + 1]
        i++
    }
}

fun deleteFromEnd(arr: IntArray) {
    var i = 0
    while (arr[i] != 0) {
        i++
    }
    arr[i - 1] = 0
}

fun deleteAtIndex(arr: IntArray, index: Int) {
    var i = index
    while (arr[i] != 0) {
        arr[i] = arr[i + 1]
        i++
    }
}

fun printArr(arr: IntArray) {
    var i = 0
    while (arr[i] != 0) {
        print("${arr[i]} ")
        i++
    }
    println()
}

fun main() {
    val arr = intArrayOf(1, 2, 3, 4, 5, 6, 7, 8, 9, 10)
    deleteFromStart(arr)
    deleteFromEnd(arr)
    deleteAtIndex(arr, 5)
}
