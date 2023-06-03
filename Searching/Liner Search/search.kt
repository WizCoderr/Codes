fun search(arr:List<Int>,key:Int){
    for(i in arr.indices){
        if(arr[i] == key){
            println("Found at index $i")
            return
        }
    }
    println("Not Found")
}

fun main(args: Array<String>) {
    val arr = listOf(1,2,3,4,5,6,7,8,9,10)
    search(arr,5)
    search(arr,11)
}