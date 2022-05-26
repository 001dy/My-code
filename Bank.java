package java2;

/**
 * @author Dy1022
 * @create2022/5/26
 */

public class Bank {
    private Customer[]customers;
    private int numberOfCustomers;

    public Bank() {
        customers=new Customer[10];
    }

    public Customer getCustomers(int index) {
        if (index >= 0 && index < numberOfCustomers) {
            return customers[index];
        }else {
            return null;
        }
    }
    public int getNumberOfCustomers() {
        return numberOfCustomers;
    }
//添加客户
    public void addCustomer(String f, String l){
        if (this.numberOfCustomers<10){
            Customer customer=new Customer(f,l);
            this.customers[this.numberOfCustomers++]=customer;
        }
    }
}
