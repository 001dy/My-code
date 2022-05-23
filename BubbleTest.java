package java1;

import java.util.Arrays;

/**
 * @author 董事长
 * @create2022/5/23
 */
public class BubbleTest {
    public static void main(String[] args) {
        int []arr=new int[]{-98,0,8,-32,1,5,97,15,87};
        for (int i=0;i< arr.length;i++){
            for (int j=0;j< arr.length-1-i;j++){
                if(arr[j]>arr[j+1]){
                    int temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                }
            }
        }

        System.out.println(Arrays.toString(arr));
    }
}
