package exer3;

public class HourlyEmployee extends Employee{
	private int wage;//ÿСʱ�Ĺ���
	private int hour;//�¹�����Сʱ��

	public HourlyEmployee(String name, int number, MyDate birthday) {
		super(name, number, birthday);
	}
	public HourlyEmployee(String name, int number, MyDate birthday,int wage,int hour) {
		super(name, number, birthday);
		this.wage=wage;
		this.hour=hour;
	}

	public int getWage() {
		return wage;
	}
	public int getHour() {
		return hour;
	}
	public void setWage(int wage) {
		this.wage = wage;
	}
	public void setHour(int hour) {
		this.hour = hour;
	}
	@Override
	public double earnings() {
		return wage*hour;
	}
	public String toString() {
		return "HourlyEmployee["+super.toString()+"]";
		
	}

}
