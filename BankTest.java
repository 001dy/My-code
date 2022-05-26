package java2;

import java1.Account;

/**
 * @author Dy1022
 * @create2022/5/26
 */
public class BankTest {
    public static void main(String[] args) {
        Bank bank=new Bank();
        bank.addCustomer("Jane","Smith");
        bank.getCustomers(0).setAccount(new Account(1000,2000,0.0123));
        bank.getCustomers(0).getAccount().withdraw(500);
        bank.getCustomers(0).getAccount().deposit(10000);
        System.out.println(".......................................");
        bank.addCustomer("Yu","Dong");
        bank.getCustomers(1).setAccount(new Account(1001,10000,0.0123));
        bank.getCustomers(1).getAccount().withdraw(6000);
        bank.getCustomers(1).getAccount().deposit((20000));

        System.out.println("银行现在客户个数："+bank.getNumberOfCustomers());
    }
}
