package domain;

import service.Status;

/**
 * @author:Dy1022
 * @create:2022/6/514:33
 * @Description:设计师
 */
public class Designer extends Programmer{
    private double bonus;//奖金

    public Designer(int id, String name, int age, double salary, Equipment equipment, double bonus) {
        super(id, name, age, salary, equipment);
        this.bonus = bonus;
    }

    public double getBonus() {
        return bonus;
    }

    public void setBonus(double bonus) {
        this.bonus = bonus;
    }

    @Override
    public String toString() {
        // TODO 自动生成的方法存根
        return getDetails()+"\t设计师\t"+getStatus()+"\t"+bonus+"\t\t\t"+getEquipment().getDescription();
    }
    public String getDetailsForTeam() {
        return getMemberId()+"/"+getId()+"\t"+getName()+"\t"+getAge()+"\t"+getSalary()+"\t设计师"+"\t"+getBonus();
    }
}
