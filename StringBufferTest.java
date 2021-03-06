package java1;

import org.junit.Test;

/**
 * @author:Dy1022
 * @create:2022/6/1019:39
 * @Description:
 */
public class StringBufferTest {

    /*
     StringBuffer的常用方法(以StringBuffer为例，StringBuilder相同)
StringBuffer append(xxx):提供了很多的append()方法，用于进行字符串拼接
StringBuffer delete(int start,int end);删除指定位置的内容
StringBuffer replace(int start,int end,String str):把[start，end)位置替换为str
StringBuffer insert(int offset,xxx):在指定位置插入xxx
StringBuffer reverse():把当前字符序列逆转
public int indexOf(String str)
public String substring(int start,intend):返回一个从start开始到end索引结束的左闭右开区间的子字符串
public int length()
public char charAt(int n)
public void setCharAt(int n,char ch)
总结：增、删、改、查、插、长度、遍历
StringBuilder>StringBuffer>String

     */
    @Test
    public void test2() {
        StringBuffer s1 = new StringBuffer("abc");
        s1.append(1);
        s1.append('1');
        System.out.println(s1);
      /*  s1.delete(2,4);
        System.out.println(s1);
       */
        // s1.replace(2,4,"hello");
        //s1.insert(2,false);
        //s1.reverse();
        String s2 = s1.substring(1, 3);
        System.out.println(s1);
        System.out.println(s1.length());
        System.out.println(s2);


    }

    /*
    String、StringBuffer、StringBuilder异同
 * String：不可变的字符序列;底层使用char[]存储
 * StringBuffer：可变的字符序列，线程安全、效率低；底层使用char[]存储
 * StringBuilder：可变的字符序列、jdk5.0新增的、线程不安全的、效率高;底层使用char[]存储
 *
 * 源码分析：
 * String str=new String();//char value[]=new char[0]
 * String str1=new String("abc");//char value[]=new char[]{'a','b','c'}
 * StringBuffer sb1=new StringBuffer();//char value[]=new char[16];底层创建了一个长度是16的char型数组
 * System.out.println(sb1.length);0
 * sb1.append('a');//value[0]='a';
 * sb1.append('b');//value[1]='b';
 * StringBuffer sb2=new StringBuffer("abc");//char value[]=new char["abc".length+16]
 *
 * 问题1.System.out.println(sb2.length);3
 * 问题2.扩容问题：如果要添加的数据底层数组装不下了，那就需要扩容数组
 *      默认情况下扩容为原来2倍+2，同时复制原有数组中的元素
 *
 *      指导建议：开发中建议大家使用：StringBuffer(int capacity)或StringBuilder(int capacity)
     */
    @Test
    public void test() {
        StringBuffer abc = new StringBuffer("abc");
        String s = new String();
        abc.setCharAt(0, 'm');
        System.out.println(abc);
    }

}
