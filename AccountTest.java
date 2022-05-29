package java1;

/**
 * @author:Dy1022
 * @create:2022/5/2916:18
 * @Description:
 */
public class AccountTest {
    public static void main(String[] args) {
        Account account=new Account(1122,20000,0.045);
        account.withdraw(30000);
        account.withdraw(2500);
        account.deposit(3000);
    }
}
