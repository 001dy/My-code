package View;

import Bean.Customer;
import P2.Service.CustomerList;
import Tool.CMUtility;

import java.util.Scanner;

/**
 * @author:Dy1022
 * @create:2022/5/2813:40
 * @Description:为主模块，负责菜单的显示和处理用户操作
 */
public class CustomerView {
    private CustomerList customerList = new CustomerList(10);


    /**
     * @return
     * @Description:显示《客户信息管理软件》界面的方法
     * @Author:Dy1022
     * @Data:2022/5/2815:12
     */
    public void enterMainMenu() {
        boolean isFlag = true;
        do {
            System.out.println("--------------------客户信息管理系统-------------------\n");
            System.out.println("                    1.添加客户");
            System.out.println("                    2.修改客户");
            System.out.println("                    3.删除客户");
            System.out.println("                    4.客户列表");
            System.out.println("                    5.退出\n");
            System.out.print  ("                    请选择(1-5):");

            char menu = CMUtility.readMenuSelection();
            switch (menu) {
                case '1':
                    addNewCustomer();
                    break;
                case '2':
                    modifyCustomer();
                    break;
                case '3':
                    deleteCustomer();
                    break;
                case '4':
                    listAllCustomer();
                    break;
                case '5':
                    System.out.print("确认是否退出(Y/N):");
                    if (CMUtility.readConfrimSelection() == 'Y') {
                        isFlag = false;
                    }
            }

        } while (isFlag);

    }

    /**
     * @return
     * @Description:添加客户操作
     * @Author:Dy1022
     * @Data:2022/5/2815:10
     */
    public void addNewCustomer() {
        System.out.println("--------------------添加客户--------------------");
        System.out.print("姓名：");
        String name = CMUtility.readString(10);
        System.out.print("性别：");
        char gender = CMUtility.readChar();
        System.out.print("年龄：");
        int age = CMUtility.readInt();
        System.out.print("电话：");
        String phone = CMUtility.readString(13);
        System.out.print("邮箱：");
        String email = CMUtility.readString(30);

        Customer customer=new Customer(name,age,gender,phone,email);
        boolean isSuccess = customerList.addCustomer(customer);
        if(isSuccess==true){
            System.out.println("------------------添加完成--------------------");
        }else {
            System.out.println("------------------客户目录已满，添加失败--------------------");
        }
    }

    /**
     * @return
     * @Description:修改客户的操作
     * @Author:Dy1022
     * @Data:2022/5/2815:11
     */
    public void modifyCustomer() {
        System.out.println("--------------------修改客户-------------------户");
        Customer customer;
        int index;
        for(;;){
            System.out.print("请选择修改客户的编号(-1退出)：");
             index = CMUtility.readInt();
            if (index==-1){
                return;
            }
            customer = customerList.getCustomer(index);
            if (customer==null){
                System.out.println("无法找到指定客户!");
            }else {
                break;
            }
        }
        System.out.print("姓名（"+customer.getName()+")：");
        String name = CMUtility.readString(10, customer.getName());
        System.out.print("性别（"+customer.getGender()+")：");
        char gender = CMUtility.readChar(customer.getGender());
        System.out.print("年龄（"+customer.getAge()+")：");
        int age = CMUtility.readInt(customer.getAge());
        System.out.print("电话（"+customer.getPhone()+")：");
        String phone = CMUtility.readString(13, customer.getPhone());
        System.out.print("邮箱（"+customer.getEmail()+")：");
        String email = CMUtility.readString(30, customer.getEmail());
        Customer customer1=new Customer(name,age,gender,phone,email);
        boolean isRepalaced = customerList.replaceCustomer(index, customer1);
        if (isRepalaced){
            System.out.println("--------------------修改客户完成-------------------");
        }else {
            System.out.println("--------------------修改客户失败-------------------");
        }
    }

    /**
     * @return
     * @Description:删除客户的操作
     * @Author:Dy1022
     * @Data:2022/5/2815:11
     */
    public void deleteCustomer() {
        System.out.println("--------------------删除客户--------------------");
        Customer customer;
        int index;
        for(;;){
            System.out.print("请选择修改客户的编号(-1退出)：");
            index = CMUtility.readInt();
            if (index==-1){
                return;
            }
            customer = customerList.getCustomer(index);
            if (customer==null){
                System.out.println("无法找到指定客户!");
            }else {
                break;
            }
        }
        System.out.print("确认是否删除(Y/N):");
        char isDelete = CMUtility.readConfrimSelection();
        if (isDelete=='Y'){
            boolean deleteSuccess = customerList.deleteCustomer(index);
            if (deleteSuccess==true){
                System.out.println("--------------------删除成功--------------------");
            }
        }
    }

    /**
     * @return
     * @Description:显示客户的列表
     * @Author:Dy10224
     * @Data:2022/5/2815:12
     */
    public void listAllCustomer() {
        System.out.println("--------------------客户列表--------------------");
        if(customerList.getTotal()==0){
            System.out.println("没有客户数据");
        }else{
            System.out.println("编号\t姓名\t性别\t年龄\t电话\t\t\t邮箱\t");
            Customer[] allCustomer = customerList.getAllCustomer();
            for(int i=0;i< allCustomer.length;i++){
                System.out.println((i+1)+"\t"+allCustomer[i].getName()+'\t'+
                        allCustomer[i].getGender()+"\t" + allCustomer[i].getAge()+
                        "\t"+allCustomer[i].getPhone()+"\t"+ allCustomer[i].getEmail()+"\t");
            }
        }
        System.out.println("------------------ 客户列表完成--------------------");
    }

    public static void main(String[] args) {
        CustomerView customerView = new CustomerView();
        customerView.enterMainMenu();
    }
}
