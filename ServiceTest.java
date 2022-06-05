package junit;

import domain.Employee;
import org.junit.Test;
import service.NameListService;
import service.TeamService;

/**
 * @author:Dy1022
 * @create:2022/6/516:44
 * @Description:对Service的测试
 */
public class ServiceTest {
    @Test
    public void test1(){
        NameListService service=new NameListService();
        Employee[]employees=service.getAllEmployees();
        for(int i=0;i<employees.length;i++) {
            System.out.println(employees[i]);
        }
    }




 }





