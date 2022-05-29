package java1;

/**
 * @author:Dy1022
 * @create:2022/5/2916:21
 * @Description:
 */
public class CheckAccount extends Account{
    private double overdraft;//可透支限额

    public double getOverdraft() {
        return overdraft;
    }

    public CheckAccount(int id, double balance, double annualInterestRate, double overdraft) {
        super(id, balance, annualInterestRate);
        this.overdraft = overdraft;
    }

    @Override
    public void withdraw(double amount) {
        if (amount<=this.getBalance()&&amount>0){
            //1.
            // this.setBalance(this.getBalance()-amount);
            //2.
            super.withdraw(amount);
        }else if(overdraft>=amount-this.getBalance()){
            overdraft-=(amount-getBalance());
           // setBalance(0);
            //或者
            super.withdraw(getBalance());
        }else {
            System.out.println("超过可透支限额!");
        }
    }
}
