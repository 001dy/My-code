package view;

import domain.Employee;
import domain.Programmer;
import service.NameListService;
import service.TeamException;
import service.TeamService;

/**
 * @author:Dy1022
 * @create:2022/6/518:01
 * @Description:
 */
public class TeamView {
    private NameListService nameListService = new NameListService();
    private TeamService teamService = new TeamService();

    public void enterMainMenu() {
        boolean isFlag = true;
        char menu = 0;
        while (isFlag){
            if (menu!='1'){
                listALLEmployees();
            }
            System.out.print("1-团队列表 2-添加团队成员 3-删除团队成员 4-退出 请选择(1-4):");
            menu=TSUtility.readMenuSelection();
            switch (menu){
                case '1':
                    getTeam();
                    break;
                case '2':
                    addMember();
                    break;
                case '3':
                    deleteMember();
                    break;
                case '4':
                    System.out.println("确认是否退出(Y/N)");
                    char isExit=TSUtility.readConfirmSelection();
                    if ('Y'==isExit){
                        isFlag=false;
                    }
                    break;
            }
        }
    }

    /**
     *@Description:显示所有的员工信
     *@Author:Dy1022
     *@Data:2022/6/518:11
     *@return
     */
    public void listALLEmployees() {
        System.out.println("---------------------------------开发团队调度软件-------------------------------\n");
        Employee[] employees = nameListService.getAllEmployees();
        if (employees == null || employees.length == 0) {
            System.out.println("公司中没有任何员工信息！");
        } else {
            System.out.println("ID\t姓名\t\t\t年龄\t工资 \t职位\t\t状态\t\t奖金\t\t股票\t\t领用设备");
            for (int i = 0; i < employees.length; i++) {
                System.out.println(employees[i]);
            }
        }
        System.out.println("----------------------------------------------------------------------------");
    }


    /**
     *@Description:获取开发团队成员列表
     *@Author:Dy1022
     *@Data:2022/6/518:13
     *@return
     */
    public void getTeam(){
        System.out.println("----------------------------------团队成员列表----------------------------------");
        Programmer[]team=teamService.getTeam();
        if (team==null||team.length==0){
            System.out.println("开发团队目前没有成员");
        } else {
            System.out.println("TID/ID\t姓名\t年龄\t工资\t\t职位\t\t奖金\t\t股票\n");
            for (int i = 0; i < team.length; i++) {
                System.out.println(team[i].getDetailsForTeam());
            }
        }
        System.out.println("----------------------------------------------------------------------------");
    }
    /**
     *@Description:添加员工
     *@Author:Dy1022
     *@Data:2022/6/518:23
     *@return
     */
    public void addMember()  {
        System.out.println("-----------------------------------添加成员------------------------------------");
        System.out.print("请输入要添加的员工的ID:");
        int id=TSUtility.readInt();
        try {
            Employee employee=nameListService.getEmployee(id);
            teamService.addMember(employee);
            System.out.println("添加成功");
        } catch (TeamException e) {
            System.out.println("添加失败，原因：" + e.getMessage());
        }
        TSUtility.readReturn();
    }

    /**
     *@Description:删除员工
     *@Author:Dy1022
     *@Data:2022/6/518:28
     *@return
     */
    public void deleteMember(){
        System.out.println("-----------------------------------删除成员------------------------------------");
        System.out.print("请输入要删除的员工的TID:");
        int id=TSUtility.readInt();
        System.out.println("请确认是否要删除");
        char isDelete=TSUtility.readConfirmSelection();
        if(isDelete=='N'){
            return;
        }
        try {
            teamService.removeMember(id);
            System.out.println("删除成功");
        } catch (TeamException e) {
            System.out.println("删除失败，原因:" + e.getMessage());
        }
        TSUtility.readReturn();
    }

    public static void main(String[] args) {
        TeamView view = new TeamView();
        view.enterMainMenu();
    }
}








