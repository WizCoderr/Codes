public class search {
    static int linearSearch(int[] arr, int target) {
        if (arr.length == 0) {
            return -1;
        }
        // run a for loop
        for (int index = 0; index < arr.length; index++) {
            // check for element at every index if it is = target
            int element = arr[index];
            if (element == target) {
                return index;
            }
        }
        // this line will execute if none of the return statements above have executed
        // hence the target not found
        return -1;
    }
    public static void main(String[] args) {
        int[] arr = { 1, 2, 3, 4, 6, 7, 8, 9 };
        int target = 5;
        int ans = linearSearch(arr, target);
        System.out.println(ans);
    }
}