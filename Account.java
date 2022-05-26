package java1;

/**
 * @author Dy1022
 * @create2022/5/26
 */
public class Account {
    private int id;//账号
    private double balance;//余额
    private double annualInterestRate;//年利率

    public Account(int id, double balance, double annualInterestRate) {
        this.id = id;
        this.balance = balance;
        this.annualInterestRate = annualInterestRate;
    }

    public int getId() {
        return id;
    }

    public void setId(int id) {
        this.id = id;
    }

    public double getBalance() {
        return balance;
    }

    public void setBalance(double balance) {
        this.balance = balance;
    }

    public double getAnnualInterestRate() {
        return annualInterestRate;
    }

    public void setAnnualInterestRate(double annualInterestRate) {
        this.annualInterestRate = annualInterestRate;
    }
    public void withdraw(double amount){//取钱
        if (amount>this.balance){
            System.out.println("余额不足,取款失败!");
        }else {
            System.out.println("取款成功，余额："+(this.balance-=amount));
        }
    }
    public void deposit(double amount){//存钱
        if (amount>0){
            System.out.println("存钱成功，余额："+(this.balance+=amount));
        }else {
            System.out.println("存款不正确!");
        }
    }
}
