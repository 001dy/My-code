package java1;

/*
 * 自定义数组的工具
 * 
 * 
 * 
 * 
 */
public class MyArrays {
	// 求数组的最大值
	public static int getMax(int arr[]) {
		int max = arr[0];
		for (int i = 0; i < arr.length; i++) {
			if (arr[i] > max) {
				max = arr[i];
			}
		}
		return max;
	}

	// 求数组的最小值
	public static int getMin(int arr[]) {
		int min = arr[0];
		for (int i = 0; i < arr.length; i++) {
			if (arr[i] < min) {
				min = arr[i];
			}
		}
		return min;
	}

	// 求数组的总和
	public static int getSum(int arr[]) {
		int sum = 0;
		for (int i = 0; i < arr.length; i++) {
			sum += arr[i];
		}
		return sum;
	}

	// 求数组的平均值
	public static int getAvg(int arr[]) {
		return getSum(arr) / arr.length;
	}

	// 如下的两个重名方法构成了重载
	// 反转数组
	public static void reverse(int arr[]) {
		for (int i = 0; i < arr.length / 2; i++) {
			int temp = arr[i];
			arr[i] = arr[arr.length - i - 1];
			arr[arr.length - i - 1] = temp;
		}
	}

//	public void reverse(String arr[]) {
//
//	}

	// 复制数组
	public static int[] copy(int arr[]) {
		int arr1[] = new int[arr.length];
		for (int i = 0; i < arr1.length; i++) {
			arr1[i] = arr[i];
		}
		return arr1;
	}

	// 遍历数组
	public static void print(int arr[]) {
		for (int i = 0; i < arr.length; i++) {
			System.out.print(arr[i] + " ");
		}
	}

	// 排序数组
	public static void sort(int arr[]) {
		// 冒泡排序
		for (int i = 1; i < arr.length - 1; i++) {
			// 比较次数
			for (int j = 0; j < arr.length - 1 - i; j++) {
				if (arr[j] > arr[j + 1]) {
//					int temp = arr[j];
//					arr[j] = arr[j + 1];
//					arr[j + 1] = temp;
					//错误
// 				    swap(arr[j],arr[j+1]);
					//正确
					swap(arr, j, j + 1);
				}
			}
		}
	}

	// 错误的：交换数组中指定两个位置元素的值
//	public void swap(int m,int n) {
//		int temp=m;
//		m=n;
//		n=temp;
//	}
	public static void swap(int arr[], int i, int j) {
		int temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
	}

	// 查找指定元素
	public static int getIndex(int arr[], int dest) {
		for (int i = 0; i < arr.length; i++) {
			if (dest == (arr[i])) {
				return i;
			}
		}
		return -1;
	}
}
