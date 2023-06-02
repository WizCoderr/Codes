// Bubble Sort Algorithm
fun BubbleSort(arr:List<Int>){
    var n = arr.size
    for(i in 0 until n-1){
        for(j in 0 until n-i-1){
            if(arr[j] > arr[j+1]){
                var temp = arr[j]
                arr[j] = arr[j+1]
                arr[j+1] = temp
            }
        }
    }
}

fun main(){
    var arr = listOf(5,4,7,3.11,55,65,67,68,69,09,89,46,2,1)
    BubbleSort(arr)
    println(arr)
}