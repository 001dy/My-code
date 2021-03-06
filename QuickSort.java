package java1;

/**
 * 快速排序
 *
 * @author shkstart
 * 2018-12-17
 */
public class QuickSort {
    private static void swap(int[] data, int i, int j) {
        int temp = data[i];
        data[i] = data[j];
        data[j] = temp;
    }

    private static void subSort(int data[], int start, int end) {
        if (start < end) {
            int base = data[start];
            int i = start;
            int j = end + 1;
            while (true) {
                while (i < end && data[++i] - base < 0)
                    ;
                while (j > start && data[--j] - base > 0)
                    ;
                if (i < j) {
                    swap(data, i, j);
                } else {
                    break;
                }
            }
            swap(data, start, j);
            subSort(data, start, j - 1);
            subSort(data, j + 1, end);
        }

    }

    public static void quickSort(int[] data) {
        subSort(data, 0, data.length - 1);
    }

    public static void main(String[] args) {
        int[] data = new int[]{-2, 3, -5, 6, 0, 4, 7};
        System.out.println("排序之前：\n" + java.util.Arrays.toString(data));
        quickSort(data);
        System.out.println("排序之后：\n" + java.util.Arrays.toString(data));
    }
}
