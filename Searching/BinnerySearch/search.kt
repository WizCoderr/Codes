fun search(arr:List<Int>,key:Int){
    var low = 0
    var high = arr.size-1
    var mid = 0
    while(low<=high){
        mid = (low+high)/2
        if(arr[mid]==key){
            println("Found at index $mid")
            return
        }
        else if(arr[mid]>key){
            high = mid-1
        }
        else{
            low = mid+1
        }
    }
    println("Not Found")
}
fun main(args: Array<String>) {
    val arr = listOf(1,2,3,4,5,6,7,8,9,10)
    search(arr,5)
    search(arr,11)
}