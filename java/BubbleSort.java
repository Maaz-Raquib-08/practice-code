public class BubbleSort {

    public static void bubbleSort(int arr[]) {
        for (int i = 0; i < arr.length - 1; i++) {
            for (int j = 0; j < arr.length - 1 - i; j++) {

                // Correct comparison
                if (arr[j] > arr[j + 1]) {

                    // Correct swapping using temp
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
    }

    public static void main(String[] args) {
        int[] arr = {5, 2, 9, 1, 3};

        bubbleSort(arr);

        for (int x : arr) {
            System.out.print(x + " ");
        }
    }
}
