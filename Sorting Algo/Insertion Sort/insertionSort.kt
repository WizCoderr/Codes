fun insertionSort(arr:List<Unit>){
    var n = arr.size
    for(i in 1 until n){
        var key = arr[i]
        var j = i-1
        while(j>=0 && arr[j]>key){
            arr[j+1] = arr[j]
            j--
        }
        arr[j+1] = key
    }
}

fun main(){
    var arr = listOf(1,2,3,4,5,6,7,8,9,10)
    insertionSort(arr)
    println(arr)
}