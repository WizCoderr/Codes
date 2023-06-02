
public class BubbleSort{
    public void bubbleSort(int[] arr) {
        int n = arr.length;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n - i - 1; j++) {
                if(arr[j] > arr[j + 1]) {
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                } 
            }
        }
    }
    public static void main(String[] args) {
        BubbleSort bs = new BubbleSort();
        int[] arr = {5, 4, 3, 2, 1};
        bs.bubbleSort(arr);
        for(int i = 0; i < arr.length; i++) {
            System.out.print(arr[i] + " ");
        }
    }
}