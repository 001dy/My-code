package java1;

public class MyArrayTset {
	public static void main(String[] args) {
		MyArrays arrays = new MyArrays();
		int arr[] = new int[] { 32, 34, 32, 5, 3, 54, 654, -98, 0, -53, 5 };
		int max = MyArrays.getMax(arr);
		System.out.println(max);
		arrays.print(arr);
		arrays.sort(arr);
		System.out.println();
		arrays.sort(arr);
		arrays.print(arr);
		int index = arrays.getIndex(arr, 6);
		if (index >= 0) {
			System.out.println("�ҵ��ˣ�������" + index);
		} else {
			System.out.println("δ�ҵ�");
		}
	}
}
