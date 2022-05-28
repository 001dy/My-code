package P2.Service;

import Bean.Customer;
/**
 * @author:Dy1022
 * @create:2022/5/2813:39
 * @Description:CustomerList为Customer对象的管理模块，内部使用数组管理一组Cutomer对象，并提供相应的增删改查操作
 */
public class CustomerList {
    private Customer[]customers;
    private int total;

    /**
     *用来初始化customers的长度
     * @param totalCustomer
     */
    public CustomerList(int totalCustomer) {
        this.customers=new Customer[totalCustomer];
    }

    /**
     * 将指定的客户添加到数组中
     * @param customer
     * @return true：添加成功 false：添加失败
     */
    public boolean addCustomer(Customer customer){
        if (total==customers.length){
            return false;
        }else {
            this.customers[total++]=customer;
            return true;
        }
    }

    /**
     * 用来删除指定索引位置客户
     * @param index
     * @return true:删除成功 false:删除失败
     */
    public boolean deleteCustomer(int index){
        if (index>this.total||index<0){
            return false;
        }else {
            for(int i=index-1;i<this.total-1;i++){
                this.customers[i]=this.customers[i+1];
            }
            this.customers[--total]=null;
            return true;
        }
    }

    /**
     * 修改指定位置的客户
     * @param index
     * @param customer
     * @return true:修改成功 false:修改失败
     */
    public boolean replaceCustomer(int index,Customer customer){
        if (index<0||index>this.total){
            return false;
        }else {
           this.customers[index-1]=customer;
           return true;
        }
    }

    /**
     * 用来获取所有客户信息
     * @return 获得信息的新数组
     */
    public Customer[]getAllCustomer(){
        Customer[]customers1=new Customer[this.total];
        for(int i=0;i<this.total;i++){
            customers1[i]=customers[i];
        }
        return customers1;
    }

    /**
     * 用来获取指定索引位置上的客户信息
     * @param index
     * @return
     */
    public Customer getCustomer(int index){
        if(index<0||index>this.total){
            return null;
        }else {
            Customer customer=new Customer();
            customer=customers[index-1];
            return customer;
        }
    }

    /**
     * 获取客户的数量
     * @return
     */
    public int getTotal(){
        return this.total;
    }
}
