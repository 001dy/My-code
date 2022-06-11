package java2;

import org.junit.Test;

import java.time.*;
import java.time.format.DateTimeFormatter;
import java.time.format.FormatStyle;
import java.time.temporal.TemporalAccessor;
import java.util.Date;

/**
 *@Description:
 *@Author:Dy1022
 *@Data:2022/6/1116:37
 *@return
 */
public class JDK8DateTimeTest {
    @Test
    public void test(){
        //偏移量
        Date date1=new Date(2022-1900,1,26);
        System.out.println(date1);
    }
    /*
    LocalDate、LocalTime、LocalDateTime的使用
    类似于Calendar
     */
    @Test
    public void test1(){
        //实例化1.now()
        LocalDate localDate = LocalDate.now();
        LocalTime localTime = LocalTime.now();
        LocalDateTime localDateTime = LocalDateTime.now();
        System.out.println(localDate);
        System.out.println(localTime);
        System.out.println(localDateTime);

        //2.of();设置指定的年月日时分秒没偏移量
        LocalDateTime localDateTime1 = LocalDateTime.of(2024, 12, 12, 12, 12, 12);
        System.out.println(localDateTime1);

        //getXxx()
        //获取相关的属性
        System.out.println(localDateTime.getDayOfMonth());
        System.out.println(localDateTime.getDayOfWeek());
        System.out.println(localDateTime.getMonth());
        System.out.println(localDateTime.getMonthValue());
        System.out.println(localDateTime.getMinute());

        //体现不可变性(返回新值)
        //with()设置相关的属性
        LocalDate localDate1 = localDate.withDayOfMonth(22);
        System.out.println(localDate1);
        System.out.println(localDate);

        LocalDateTime localDateTime2 = localDateTime.withHour(4);
        System.out.println(localDateTime);
        System.out.println(localDateTime2);

        //不可变性
        LocalDateTime localDateTime3 = localDateTime.plusMonths(3);
        System.out.println(localDateTime);
        System.out.println(localDateTime3);

        LocalDateTime localDateTime4 = localDateTime.minusDays(6);
        System.out.println(localDateTime);
        System.out.println(localDateTime4);
    }

    /*
    Instant的使用
    类似于java.util.Date类
     */
    @Test
    public void test2(){
        //now:获取本初子午线对应的标准时间
        Instant instant = Instant.now();
        System.out.println(instant);//2022-02-28T07:43:48.796Z

        //添加时间偏移量
        OffsetDateTime offsetDateTime = instant.atOffset(ZoneOffset.ofHours(8));
        System.out.println(offsetDateTime);

        //获取1970.1.1.0:0:0至今对应的毫秒数--->Date类的getTime()
        long milli = instant.toEpochMilli();
        System.out.println(milli);

        //ofEpochMilli():通过给定的毫秒数，获取Instant实例---》Date(long millis)
        Instant instant1 = Instant.ofEpochMilli(1550473314878L);
        System.out.println(instant1);
    }

    /*
    DateTimeFormatter:格式化或解析日期、时间
    类似于SimpleDateFormat
     */
    @Test
    public void test3(){
        //实例化
    //方式一:预定义的标准格式:如:ISO_LOCAL_DATE_TIME;ISO_LOCAL_DATE;ISO_LOCAL_TIME
        DateTimeFormatter formatter = DateTimeFormatter.ISO_LOCAL_DATE_TIME;
        //格式化:日期---》字符串
        LocalDateTime localDateTime = LocalDateTime.now();
        String str1 = formatter.format(localDateTime);
        System.out.println(localDateTime);
        System.out.println(str1);
        //解析：字符串---》日期
        TemporalAccessor parse = formatter.parse("2022-02-28T16:06:43.602");
        System.out.println(parse);
        //方式二:本地化相关的格式:如:ofLocalizedDateTime(FormatStyle.LONG)
        DateTimeFormatter formatter1 = DateTimeFormatter.ofLocalizedDateTime(FormatStyle.SHORT);
        //格式化
        String str2 = formatter1.format(localDateTime);
        System.out.println(str2);

        //ofLocalizedDate()
        DateTimeFormatter formatter2 = DateTimeFormatter.ofLocalizedDate(FormatStyle.FULL);
        String str3 = formatter2.format(LocalDate.now());
        System.out.println(str3);
        //*方式三:自定义的格式:如:ofPatten("yyyy-MM-dd hh:mm:ss E")
        DateTimeFormatter formatter3 = DateTimeFormatter.ofPattern("yyyy-MM-dd hh:mm:ss E");
        //格式化
        String str4 = formatter3.format(LocalDateTime.now());
        System.out.println(str4);
        //解析
        TemporalAccessor accessor = formatter3.parse("2022-02-28 04:23:37 星期一");
        System.out.println(accessor);
    }

}
