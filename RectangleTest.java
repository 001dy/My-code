package java1;

import java.util.Scanner;

/**
 * @author 董事长
 * @create2022/5/22
 */
public class RectangleTest {
    //方式一：

//    public static void main(String[] args) {
//        Scanner scanner = new Scanner(System.in);
//        System.out.println("请输入一个数字");
//        int len = scanner.nextInt();
//        int[][] arr = new int[len][len];
//        int s=len*len;
//        int k = 1;//k=1：向右、k=2：向下、k=3：向左、k=4：向上
//        int i = 0, j = 0;
//        for (int m = 1; m <=s ; m++) {
//            if (k == 1) {
//                if (j < len && arr[i][j] == 0) {
//                    arr[i][j++] = m;
//                } else {
//                    k = 2;
//                    j--;
//                    i++;
//                    m--;
//                }
//            } else if (k == 2) {
//                if (i < len && arr[i][j] == 0) {
//                    arr[i++][j] = m;
//                } else {
//                    k = 3;
//                    i--;
//                    j--;
//                    m--;
//                }
//            } else if (k == 3) {
//                if (j >= 0 && arr[i][j] == 0) {
//                    arr[i][j--] = m;
//                } else {
//                    k = 4;
//                    j++;
//                    i--;
//                    m--;
//                }
//            }else if(k==4){
//                if (i>=0&&arr[i][j]==0){
//                    arr[i--][j]=m;
//                }else {
//                    k=1;
//                    i++;
//                    j++;
//                    m--;
//                }
//            }
//        }
//
//        for(int a=0;a<len;a++){
//            for(int b=0;b<arr[a].length;b++){
//                System.out.print(arr[a][b]+" ");
//            }
//            System.out.println();
//        }
//    }

    //方式二：
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("请输入一个数字：");
        int n = scanner.nextInt();
        int count = 0;
        int[][] arr = new int[n][n];
        int MaxX = n - 1;//X轴最大值
        int MaxY = n - 1;//Y轴最大值
        int MInX = 0;//X轴最小值
        int MInY = 0;// Y轴最小值
        while (MInY <= MaxY) {
            for (int x = MInY; x <= MaxX; x++) {
                arr[MInY][x] = ++count;
            }
            MInY++;
            for (int y = MInY; y <= MaxY; y++) {
                arr[y][MaxX] = ++count;
            }
            MaxX--;
            for (int z = MaxX; z >= MInX; z--) {
                arr[MaxY][z] = ++count;
            }
            MaxY--;
            for (int i = MaxY; i >= MInY; i--) {
                arr[i][MInX] = ++count;
            }
            MInX++;
        }
        for (int a = 0; a < n; a++) {
            for (int b = 0; b < arr[a].length; b++) {
                System.out.print(arr[a][b] + "\t");
            }
            System.out.println();
        }
    }
}
