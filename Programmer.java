package domain;

import service.Status;

/**
 * @author:Dy1022
 * @create:2022/6/514:24
 * @Description:程序员
 */
public class Programmer extends Employee{
    private int memberId;//团队id
    private Status status=Status.FREE;
    private Equipment equipment;

    public Programmer(int id, String name, int age, double salary, Equipment equipment) {
        super(id, name, age, salary);
        this.equipment = equipment;
    }

    public int getMemberId() {
        return memberId;
    }

    public void setMemberId(int memberId) {
        this.memberId = memberId;
    }

    public Status getStatus() {
        return status;
    }

    public void setStatus(Status status) {
        this.status = status;
    }

    public Equipment getEquipment() {
        return equipment;
    }

    public void setEquipment(Equipment equipment) {
        this.equipment = equipment;
    }

    @Override
    public String toString() {
        return  getDetails() + "\t程序员\t"+status+"\t\t\t\t\t"+equipment.getDescription();
    }
    public String getDetailsForTeam() {
        return memberId+"/"+getId()+"\t"+getName()+"\t"+getAge()+"\t"+getSalary()+"\t程序员";
    }

}
