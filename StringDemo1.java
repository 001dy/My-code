package java1;

import org.junit.Test;

/**
 * @author:Dy1022
 * @create:2022/6/1114:35
 * @Description:
 */
public class StringDemo1 {
    /**
     *@Description:获取subStr在mainStr中出现的次数
     *@Author:Dy1022
     *@Data:2022/6/1114:36
     *@return
     */
    public int getCount(String mainStr,String subStr){
        int length = mainStr.length();
        int length1 = subStr.length();
        int count=0;
        int index=0;
        if (length>=length1){
            //方式一：
//            while ((index=mainStr.indexOf(subStr))!=-1){
//                count++;
//                mainStr=mainStr.substring(index+subStr.length());
//            }
            while ((index=mainStr.indexOf(subStr,index))!=-1){
                count++;
                index+=length1;
            }
        }
        return count;
    }
    @Test
    public void test(){
        String mainStr="abcdefaabdjiogab";
        String subStr="ab";
        int count = getCount(mainStr, subStr);
        System.out.println(count);

    }
}
