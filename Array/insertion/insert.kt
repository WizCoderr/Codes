fun insertToStart(arr: IntArray, key: Int) {
    var i = 0
    while (arr[i] != 0) {
        i++
    }
    var j = i
    while (j >= 0) {
        arr[j + 1] = arr[j]
        j--
    }
    arr[0] = key
}

fun insertToEnd(arr: IntArray, key: Int) {
    var i = 0
    while (arr[i] != 0) {
        i++
    }
    arr[i] = key
}

fun insertAtIndex(arr: IntArray, index: Int, key: Int) {
    var i = 0
    while (arr[i] != 0) {
        i++
    }
    var j = i
    while (j >= index) {
        arr[j + 1] = arr[j]
        j--
    }
    arr[index] = key
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
    insertToStart(arr, 10)
    insertToEnd(arr, 30)
}
