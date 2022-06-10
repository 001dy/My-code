package java1;

import org.junit.Test;

import java.util.Locale;

/**
 * @author 董事长
 * @create2022/1/25
 *int length():返回字符串长度：return value.length
 *char charAt(int index):返回某索引处的字符return value[index]
 *boolean isEmpty():判断是否空字符串：return value.length==0
 *String toLowerCase():使用默认环境，将String中的所有字符号转换为小写
 *String toUpperCase():使用默认语言环境，将String中的所有字符转换为大写
 *String trim():返回字符串的副本，忽略前导空白和尾部空白
 *boolean equals(Object obj):比较字符串的内容是否相同
 *boolean equalsIgnoreCase(String anotherString):与equals方法类似，忽略大小写
 *String concat(String str):将指定字符串连接到此字符串的结尾。等价于“+”
 *int compareTo(String anotherString):比较两个字符串的大小
 *String substring(int beginIndex):返回一个新的字符串，它是此字符串的从beginIndex开始截取
 *String substring(int beginIndex,int endIndex):返回一个新字符串，它是此字符串从beginIndex开始到endIndex结束
 *boolean endWith(String suffix):测试此字符是否以指定的后缀结束
 *boolean startWith(String prefix):测试此字符串是否以指定的前缀开始
 *boolean startWith(String prefix,int toffset):测试此字符串是否从指定索引开头
 *boolean contains(CharSequence s):当且仅当此字符串包含指定的char值序列时，返回true
 *int indexOf(String str):返回指定子字符串中第一次出现处的索引
 *int indexOf(String str,int fromIndex):返回指定子字符串在此字符串中第一次出现的索引
 *int lastIndexOf(String str):返回指定子字符串在此字符串中最右边出现处的索引
 *int lastIndexOf(String str,int fromIndex):返回指定子字符串在此字符串中最后一次出现处的索引
 *注：indexOf和IndexOf方法如果未找到都是返回-1
 * 替换
 * String replace(char oldChar, char newChar)：返回一个新的字符串，它是
 * 通过用 newChar 替换此字符串中出现的所有 oldChar 得到的。
 * String replace(CharSequence target, CharSequence replacement)：使
 * 用指定的字面值替换序列替换此字符串所有匹配字面值目标序列的子字符串。
 * String replaceAll(String regex, String replacement) ：使用给定的
 * replacement 替换此字符串所有匹配给定的正则表达式的子字符串。
 * String replaceFirst(String regex, String replacement) ：使用给定的replacement
 * 替换此字符串匹配给定的正则表达式的第一个子字符串。
 * 匹配
 * boolean matches(String regex)：告知此字符串是否匹配给定的正则表达式。
 * 切片
 * String[] split(String regex)：根据给定正则表达式的匹配拆分此字符串。
 * String[] split(String regex, int limit)：根据匹配给定的正则表达式来拆分此
 * 字符串，最多不超过limit个，如果超过了，剩下的全部都放到最后一个元素中。
 */
public class StringMethodTest {
    @Test
    public void test4(){
        String str1="北京尚硅谷教育";
        String str2 = str1.replace('北', '东');
        System.out.println(str1);
        System.out.println(str2);

        String str3 = str1.replace("北京", "上海");
        System.out.println(str3);

        System.out.println("************************");
        String str="12hello34world5java7891mysq1456";
        //把字符串中的数字替换成，,如果结果中开头和结尾有，的话去掉
        String string=str.replaceAll("\\d+",",").replaceAll("^,|,$","");
        System.out.println(string);

        str="12345";
        //判断str字符串中是否全部有数字组成，既有1-n个数字组成
        boolean matches=str.matches("\\d+");
        System.out.println(matches);
        String tel="0517-45434289";
        //判断这是否时一个杭州的固定电话
        boolean result=tel.matches("0517-\\d{7,8}");
        System.out.println(result);


        System.out.println("************************");
        str="hello|world|java";
        String[] strs=str.split("\\|");
        for(int i=0;i<strs.length;i++){
            System.out.println(strs[i]);
        }
        System.out.println();
        str2="hello.world.java";
        String[] strs2=str2.split("\\.");
        for (int i=0;i<strs2.length;i++){
            System.out.println(strs2[i]);
        }
    }
    @Test
    public void test3(){
        String str1="helloworld";
        boolean b1=str1.endsWith("ld");
        //测试此字符串是否以指定的后缀结束
        System.out.println(b1);
        boolean b2=str1.startsWith("he");
        //测试此字符串是否以指定的前缀开始
        System.out.println(b2);
        boolean b3=str1.startsWith("11",2);
        //测试此字符串从指定索引开始的子字符串时候以指定前缀开始
        System.out.println(b3);

        String str2="wor";
        System.out.println(str1.contains(str2));
        //当且仅当此字符串包含指定的char值序列时，返回true
        System.out.println(str1.indexOf("lo"));
        //返回指定子字符串在此字符串中第一次出现的索引
        System.out.println(str1.indexOf("lol"));
        System.out.println(str1.indexOf("lo",5));
        //返回指定子字符串在此字符串中第一次出现处的索引，从指定索引开始

        String str3="hellorworld";
        //未找到返回-1
        System.out.println(str3.lastIndexOf("or"));
        //返回指定子字符串在此字符串中最右边出现处的索引
        System.out.println(str3.lastIndexOf("or",6));
        //返回指定子字符串在此字符串中最后一次出现处的索引，从指定索引开始反向搜索

        //什么情况下从前往后和从后往前结果一样
        //1.没有2.只有一个


    }

    @Test
    public void test2(){
        String s1="HelloWorld";
        String s2="helloworld";
        System.out.println(s1.equals(s2));
        System.out.println(s1.equalsIgnoreCase(s2));//忽略大小写

        String s3="abc";
        String s4 = s3.concat("def");//等价于"+"
        System.out.println(s4);

        String s5="abc";
        String s6=new String("abe");
        System.out.println(s5.compareTo(s6));//比较两个字符串的大小（涉及到字符串排序）

        String s7="天元科技";
        String s8 = s7.substring(2);
        System.out.println(s7);
        System.out.println(s8);
        String s9 = s7.substring(1, 3);
        System.out.println(s9);

    }




    @Test
    public void test(){
        String s1="HelloWorld";
        System.out.println(s1.length());
        //返回字符串长度
        System.out.println(s1.charAt(0));
        System.out.println(s1.charAt(9));
        //返回指定索引位置的字符
      //  System.out.println(s1.charAt(10));
        System.out.println(s1.isEmpty());//判断是否为空字符串

        String s2 = s1.toLowerCase(Locale.ROOT);//将String中的所有字符转换为小写
        //toUpperCase()将所有字符转化为大写
        System.out.println(s1);//s1不可变
        System.out.println(s2);

        String s3="  he llo world  ";
        String s4 = s3.trim();//去除首尾空格
        System.out.println("----"+s3);
        System.out.println(s4);
    }

}
