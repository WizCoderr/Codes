package Array.deletion;

public class delete {
    public static void deleteFromStart(int[] arr) {
        int i = 0;
        while (arr[i] != 0) {
            arr[i] = arr[i + 1];
            i++;
        }
    }

    public static void deleteFromEnd(int[] arr) {
        int i = 0;
        while (arr[i] != 0) {
            i++;
        }
        arr[i - 1] = 0;
    }

    public static void deleteAtIndex(int[] arr, int index) {
        int i = index;
        while (arr[i] != 0) {
            arr[i] = arr[i + 1];
            i++;
        }
    }

    public static void printArr(int[] arr) {
        int i = 0;
        while (arr[i] != 0) {
            System.out.print(arr[i] + " ");
            i++;
        }
        System.out.println();
    }

    public static void main(String[] args) {
        int[] arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
        deleteFromStart(arr);
        deleteFromEnd(arr);
        deleteAtIndex(arr, 5);
    }
}
