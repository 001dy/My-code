package service;

import domain.*;

import static service.Data.*;

/**
 * @author:Dy1022
 * @create:2022/6/514:38
 * @Description:负责将Data数据封装到Employee[]数组中，同时提供相关操作Employee[]的方法
 */
public class NameListService {
    private Employee[]employees;

    /**
     *@Description:给Employee[]employees进行初始化
     *@Author:Dy1022
     *@Data:2022/6/514:52
     *@return
     */
    public NameListService() {
        employees=new Employee[EMPLOYEES.length];
        for (int i=0;i<employees.length;i++){
            //获取员工类型
            int type = Integer.parseInt(EMPLOYEES[i][0]);
            //获取四个基本信息
            int id=Integer.parseInt(EMPLOYEES[i][1]);
            String name=EMPLOYEES[i][2];
            int age=Integer.parseInt(EMPLOYEES[i][3]);
            int salary=Integer.parseInt(EMPLOYEES[i][4]);
            Equipment equipment;
            double bonus;
            int stock;
            switch (type){
                case EMPLOYEE:
                    employees[i]=new Employee(id,name,age,salary);
                    break;
                case PROGRAMMER:
                    equipment=createEquipment(i);
                    employees[i]=new Programmer(id,name,age,salary,equipment);
                    break;
                case DESIGNER:
                    equipment=createEquipment(i);
                    bonus=Double.parseDouble(EMPLOYEES[i][5]);
                    employees[i]=new Designer(id,name,age,salary,equipment,bonus);
                    break;
                case ARCHITECT:
                    equipment=createEquipment(i);
                    bonus=Double.parseDouble(EMPLOYEES[i][5]);
                    stock=Integer.parseInt(EMPLOYEES[i][6]);
                    employees[i]=new Architect(id,name,age,salary,equipment,bonus,stock);
                    break;
            }
        }
    }
    /**
     *@Description:获取当前所有员工
     *@Author:Dy1022
     *@Data:2022/6/515:27
     *@return
     */
    public Employee[] getAllEmployees(){
        return employees;

    }
    /**
     *@Description:获取指定id员工
     *@Author:Dy1022
     *@Data:2022/6/515:30
     *@return
     */
    public Employee getEmployee(int id)throws TeamException{
        for(int i=0;i<employees.length;i++){
            if (id==employees[i].getId()){
                return employees[i];
            }
        }
        throw new TeamException("该员工不存在");
    }
    /**
     *@Description:获取指定index上的员工的设备
     *@Author:Dy1022
     *@Data:2022/6/515:20
     *@return
     */
    public static Equipment createEquipment(int index){
        int key=Integer.parseInt(EQUIPMENTS[index][0]);
        String modelOrName=EQUIPMENTS[index][1];
        switch (key){
            case PC:
                String display=EQUIPMENTS[index][2];
                return new PC(modelOrName,display);
            case NOTEBOOK:
                double price=Double.parseDouble(EQUIPMENTS[index][2]);
                return new NoteBook(modelOrName,price);
            case PRINTER:
                return new Printer(modelOrName,EQUIPMENTS[index][2]);
        }
        return null;
    }
}
