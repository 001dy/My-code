package exer3;

public abstract class Employee {
	private String name;
	private int number;
	private MyDate birthday;
	
	

	public Employee(String name, int number, MyDate birthday) {
		super();
		this.name = name;
		this.number = number;
		this.birthday = birthday;
	}

	public String getName() {
		return name;
	}

	public int getNumber() {
		return number;
	}

	public MyDate getBirthday() {
		return birthday;
	}

	public void setName(String name) {
		this.name = name;
	}

	public void setNumber(int number) {
		this.number = number;
	}

	public void setBirthday(MyDate birthday) {
		this.birthday = birthday;
	}

	public abstract double earnings();

	@Override
	public String toString() {
		return "name=" + name + ", number=" + number + ", birthday=" + birthday.toDateString() ;
	}
	
	

}
