package java1;

/**
 * @author:Dy1022
 * @create:2022/5/2916:32
 * @Description:
 */
public class CheckAccountTest {
    public static void main(String[] args) {
        CheckAccount checkAccount=new CheckAccount(1122,20000,0.045,5000);
        checkAccount.withdraw(5000);
        System.out.println("可透支限额："+checkAccount.getOverdraft());
        checkAccount.withdraw(18000);
        System.out.println("可透支限额："+checkAccount.getOverdraft());
        checkAccount.withdraw(3000);
    }
}
