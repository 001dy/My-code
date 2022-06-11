package java1;

import org.junit.Test;

/**
 * @author:Dy1022
 * @create:2022/6/1114:15
 * @Description:
 */
public class StringDemo {
    public String reverse(String str,int startIndex,int endIndex){
        if(str!=null&&str.length()!=0) {
            char[] chars = str.toCharArray();
            for (int x = startIndex, y = endIndex; x < y; x++, y--) {
                char temp = chars[x];
                chars[x] = chars[y];
                chars[y] = temp;
            }
            return new String(chars);
        }
        return null;
    }
    public String reverse1(String str,int startIndex,int endIndex){
        String reverseStr=str.substring(0,startIndex);
        for(int i=endIndex;i>=startIndex;i--){
            reverseStr+=str.charAt(i);
        }
        reverseStr+=str.substring(endIndex+1);
        return reverseStr;
    }

    public String reverse2(String str,int startIndex,int endIndex){
        StringBuilder builder=new StringBuilder(str.length());
        builder.append(str.substring(0,startIndex));
        for(int i=endIndex;i>=startIndex;i--){
            builder.append(str.charAt(i));
        }
        builder.append(str.substring(endIndex+1));

        return builder.toString();
    }


    @Test
    public void test(){
        String str="abcdefg";
        String reverse=reverse2(str,2,5);
        System.out.println(reverse);
    }
}
