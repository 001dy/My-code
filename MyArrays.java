package java1;

/*
 * �Զ�������Ĺ���
 * 
 * 
 * 
 * 
 */
public class MyArrays {
	// ����������ֵ
	public static int getMax(int arr[]) {
		int max = arr[0];
		for (int i = 0; i < arr.length; i++) {
			if (arr[i] > max) {
				max = arr[i];
			}
		}
		return max;
	}

	// ���������Сֵ
	public static int getMin(int arr[]) {
		int min = arr[0];
		for (int i = 0; i < arr.length; i++) {
			if (arr[i] < min) {
				min = arr[i];
			}
		}
		return min;
	}

	// ��������ܺ�
	public static int getSum(int arr[]) {
		int sum = 0;
		for (int i = 0; i < arr.length; i++) {
			sum += arr[i];
		}
		return sum;
	}

	// �������ƽ��ֵ
	public static int getAvg(int arr[]) {
		return getSum(arr) / arr.length;
	}

	// ���µ�����������������������
	// ��ת����
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

	// ��������
	public static int[] copy(int arr[]) {
		int arr1[] = new int[arr.length];
		for (int i = 0; i < arr1.length; i++) {
			arr1[i] = arr[i];
		}
		return arr1;
	}

	// ��������
	public static void print(int arr[]) {
		for (int i = 0; i < arr.length; i++) {
			System.out.print(arr[i] + " ");
		}
	}

	// ��������
	public static void sort(int arr[]) {
		// ð������
		for (int i = 1; i < arr.length - 1; i++) {
			// �Ƚϴ���
			for (int j = 0; j < arr.length - 1 - i; j++) {
				if (arr[j] > arr[j + 1]) {
//					int temp = arr[j];
//					arr[j] = arr[j + 1];
//					arr[j + 1] = temp;
					//����
// 				    swap(arr[j],arr[j+1]);
					//��ȷ
					swap(arr, j, j + 1);
				}
			}
		}
	}

	// ����ģ�����������ָ������λ��Ԫ�ص�ֵ
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

	// ����ָ��Ԫ��
	public static int getIndex(int arr[], int dest) {
		for (int i = 0; i < arr.length; i++) {
			if (dest == (arr[i])) {
				return i;
			}
		}
		return -1;
	}
}
