package exer2;

/**
 * @author:Dy1022
 * @create:2022/6/817:04
 * @Description:
 */
class Count{
    private double balance;

    public Count(double balance) {
        this.balance = balance;
    }

    public double getBalance() {
        return balance;
    }

    public void setBalance(double balance) {
        this.balance = balance;
    }
    //存钱
    public synchronized void deposit(double amt){
        if (amt>0){
            balance+=amt;
            try {
                Thread.sleep(1000);
            } catch (InterruptedException e) {
                e.printStackTrace();
            }
            System.out.println(Thread.currentThread().getName()+"存钱成功，余额："+balance);
        }
    }
}
class Customer extends Thread{
    private Count count;

    public Customer(Count count) {
        this.count = count;
    }

    @Override
    public void run() {
        for (int i=0;i<3;i++ ){

            count.deposit(1000);
        }
    }
}
public class Account {
    public static void main(String[] args) {
        Count count = new Count(1000);
        Customer customer = new Customer(count);
        Customer customer1 = new Customer(count);
        customer.setName("甲");
        customer1.setName("乙");

        customer.start();
        customer1.start();

    }
}
