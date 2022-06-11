package java2;

import org.junit.Test;

import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.Date;

/**
 * @author:Dy1022
 * @create:2022/6/1115:43
 * @Description:
 * jdk8.0之前的日期时间的API测试
 * 1.System类中currentTMillis();
 * 2.java.util.Date和子类java.sql.Date
 * 3.SimpleDateFormat
 * 4.Calendar
 */
public class DateTimeTest {
    /*
   SimpleDateFormat的使用：SimpleDateFormat对日期Date类的格式化和解析
   1.两个操作
   1.1格式化：日期--->字符串
   1.2解析：格式化的逆过程，字符串-->日期
     */
    @Test
    public void test() throws ParseException {
        //实例化
        SimpleDateFormat simpleDateFormat = new SimpleDateFormat();
        //格式化：日期--->字符串
        Date date = new Date();
        //System.out.println(date);
        String format = simpleDateFormat.format(date);
        System.out.println(format);
        //解析：格式化的逆过程，字符串-->日期
        String str="22-6-11 下午3:51";
        Date parse = simpleDateFormat.parse(str);
        System.out.println(parse);

        //*****************************
        SimpleDateFormat sdf1 = new SimpleDateFormat("yyyy-MM-dd hh:mm:ss");
        String format1 = sdf1.format(date);
        System.out.println(format1);

        Date date2 = sdf1.parse("2022-02-26 07:52:17");
        System.out.println(date2);



    }
    /*
    练习一：字符串”2020-09-08“转换为java.sql.Date
     */
    @Test
    public void test1() throws ParseException {
        String birth="2020-9-8";
        SimpleDateFormat simpleDateFormat = new SimpleDateFormat("yyyy-MM-dd");
        Date parse = simpleDateFormat.parse(birth);
        java.sql.Date date = new java.sql.Date(parse.getTime());
        System.out.println(date);
    }

}
