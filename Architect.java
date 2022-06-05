package domain;

import service.Status;

/**
 * @author:Dy1022
 * @create:2022/6/514:36
 * @Description:架构师
 */
public class Architect extends Designer{
    private int stock;//股票

    public Architect(int id, String name, int age, double salary, Equipment equipment,
                     double bonus, int stock) {
        super(id, name, age, salary, equipment, bonus);
        this.stock = stock;
    }

    public int getStock() {
        return stock;
    }

    public void setStock(int stock) {
        this.stock = stock;
    }
    public String toString() {
        // TODO 自动生成的方法存根
        return getDetails()+"\t架构师\t"+getStatus()+"\t"+getBonus()+"\t"+stock+
                " \t"+getEquipment().getDescription();
    }
    public String getDetailsForTeam() {
        return getMemberId()+"/"+getId()+"\t"+getName()+"\t"+getAge()+"\t"+getSalary()+
                "\t架构师"+"\t"+getBonus()+"\t"+getStock();
    }
}
