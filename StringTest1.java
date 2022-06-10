package java1;

import org.junit.Test;

import java.util.Arrays;

/**
 * @author:Dy1022
 * @create:2022/6/1019:14
 * @Description:
 * String和char[]之间的转换
 * char[]-->String
 */
public class StringTest1 {
    @Test
    public void test(){
        String s="abc123";
        char[]chars=s.toCharArray();

        char[]arr=new char[]{'h','e','l','l','0'};
        String s1=new String(arr);

        /*
        String与byte[]之间的转换
         */
        byte[] bytes = s.getBytes();//编码
        System.out.println(Arrays.toString(bytes));
        String s2 = new String(bytes);//解码
    }
}
