package java1;

import org.junit.Test;

/**
 * @author:Dy1022
 * @create:2022/6/1010:33
 * @Description:String的使用
 */
public class StringTest {
    /*
    String实例化的方式
    方式一：通过字面量定义的方式
    方式二：通过new+构造器的方式

    结论：
    1.常量与常量的拼接结果在常量池中。且常量池中不会存在相同的内容的常量
    2.只要有一个是变量，包括如(s1这样的变量名)，结果就在堆中
    3.如果拼接的结果调用intern()方法，返回值就在常量池中

     */
    @Test
    public void test1(){
        //声明在方法区中的的字符串常量池中
        String s1="javaEE";
        String s2="javaEE";
        //s3和s4保存的地址值，是在堆空间中开辟的对应空间
        String s3=new String("javaEE");
        String s4=new String("javaEE");


        System.out.println(s3);
        System.out.println(s1 == s2);
        System.out.println(s1 == s3);
        System.out.println(s1 == s4);
        System.out.println(s3 == s4);
    }
    /*
    String:字符串，使用一对双引号来表示。
    1.String是声明为final的，不可被继承
    2.String实现了Serializable接口：表示字符串是支持序列化的
            实现了Comparable接口：表示String可以比较大小
    3.String内部定义了final char[]value用于存储字符串数组
    4.String：代表不可变的字符序列。简称：不可变性
      体现：1.当对字符串重新赋值时，需要重写指定区域内的赋值，不能使用原有的value进行赋值
           2.当对现有的字符串进行连接操作时，也需要重新指定内存区域赋值，不能使用原有的value
           3.当调用String的replace()方法进行指定修改字符
    5.通过字面量的方式（区别于new）给一个字符串赋值，此时的字符串值声明在字符串常量池中
    5.字符串常量池中是不会存储相同内容的字符
     */
    @Test
    public void test(){
        String s="abc";//字面量
        String s1="abc";
        System.out.println(s == s1);//比较地址值
        s1="hello";

        System.out.println(s);
        System.out.println(s1);
        System.out.println("*******************");

        String s2="abc";
        s2+="def";
        System.out.println(s2);
        System.out.println("*******************");

        String s3="abc";
        String s4=s3.replace("a","m");
        System.out.println(s3);
        System.out.println(s4);

    }
}
