package exer3;

import java.util.Calendar;
import java.util.Scanner;

public class PayrollSystem {
	public static void main(String[] args) {
		//��ʽһ
//		Scanner scanner=new Scanner(System.in);
//		System.out.println("�����뵱ǰ���·ݣ�");
//		int month=scanner.nextInt();
		//��ʽ��
		Calendar calendar=Calendar.getInstance();
		int month=calendar.get(Calendar.MONTH);
		Employee[] emps=new Employee[2];
	    emps[0]=new SalariedEmployee("��ɭ",1002,new MyDate(11992,2,28),10000);
	    emps[1]=new HourlyEmployee("������", 2001,new MyDate(1991, 1, 6),60,240);
	    
	    for(int i=0;i<emps.length;i++) {
	    	System.out.println(emps[i]);
	    	double salary=emps[i].earnings();
	    	System.out.println("�¹���Ϊ��"+salary);
	    	if((month+10)==emps[i].getBirthday().getMonth()) {
	    		System.out.println("���տ��֣�����100Ԫ");
	    	}
	    	
	    }
	}

}
