package java1;

import org.junit.Test;

/**
 * @author:Dy1022
 * @create:2022/6/1115:02
 * @Description:
 */
public class StringDemo2 {
    public String getMaxSameString(String str1,String str2){
        String maxStr=(str1.length()>=str2.length())?str1:str2;
        String minStr=(str1.length()<str2.length())?str1:str2;
        int length=minStr.length();
        for (int i=0;i<length;i++){
            for (int x=0,y=length-i;y<=length;x++,y++){
                String substring = minStr.substring(x, y);
                if (maxStr.contains(substring)){
                    return substring;
                }
            }
        }

        return null;
    }
    @Test
    public void test(){
        String str1="abjvhlandkhfaodifjsla";
        String str2="jdlsajldhland";
        String maxSameString = getMaxSameString(str1, str2);
        System.out.println(maxSameString);
    }
}
