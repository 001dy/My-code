package service;

import domain.Architect;
import domain.Designer;
import domain.Employee;
import domain.Programmer;

import java.lang.reflect.Parameter;

/**
 * @author:Dy1022
 * @create:2022/6/515:31
 * @Description:关于开发团队的管理
 */
public class TeamService {
    private static int counter=1;
    private final int  MAX_MEMBER=5;
    private Programmer[] team=new Programmer[MAX_MEMBER];
    private int total=0;

    public TeamService() {

    }
    /**
     *@Description:获取当前团队所有员工
     *@Author:Dy1022
     *@Data:2022/6/515:43
     *@return
     */
    public Programmer[] getTeam(){
        if(total>0){
            Programmer[] programmers=new Programmer[total];
            for(int i=0;i<total;i++){
                programmers[i]=team[i];
            }
            return programmers;
        }
        return null;

    }
    /**
     *@Description:获取当前团队指定员工
     *@Author:Dy1022
     *@Data:2022/6/515:43
     *@return
     */
    public void addMember(Employee e)throws TeamException{
        //成员已满，无法添加
        if(total==MAX_MEMBER){
            throw new TeamException("成员已满，无法添加");
        }
        //该成员不是开发成员，无法添加
        if(!(e instanceof Programmer)){
            throw new TeamException("该成员不是开发成员，无法添加");
        }
        //该成员已在本开发团队中
        for(int i=0;i<total;i++){
            if(e.getId()==team[i].getId()){
               throw new TeamException("该成员已在本开发团队中");
            }
        }
        //该员工已是某团队的成员
        //该员工正在休假，无法添加
        Programmer p=(Programmer)e;
        if ("BUSY".equalsIgnoreCase(p.getStatus().getNAME())){
            throw new TeamException("该员工已是某团队的成员");
        }
        if("VOCATION".equalsIgnoreCase(p.getStatus().getNAME())){
            throw new TeamException("该员工正在休假，无法添加");
        }
        //团队中之多有一名架构师
        //团队中之多有二名设计师
        //团队中之多有三名程序员
        int numOfDes=0,numOfArc=0,numOfPro=0;
        for (int i=0;i<total;i++){
            if(team[i] instanceof Architect){
                numOfArc++;
            }else if (team[i] instanceof Designer) {
                numOfDes++;
            }else if (team[i] instanceof Programmer){
                numOfPro++;
            }
        }
        if (e instanceof Architect){
            if (numOfArc>=1){
                throw new TeamException("团队中之多有一名架构师");
            }
        }else if(e instanceof Designer){
            if (numOfDes>=2){
                throw new TeamException("团队中之多有二名设计师");
            }
        }else if (e instanceof  Programmer){
            if (numOfPro>=3){
                throw new TeamException("团队中之多有三名程序员");
            }
        }
        Programmer p1=(Programmer)e;
        team[total++]=p1;
        p1.setStatus(Status.BUSY);
        p1.setMemberId(counter++);

    }
    /**
     *@Description:移除指定团队id成员
     *@Author:Dy1022
     *@Data:2022/6/516:34
     *@return
     */
    public void removeMember(int memberId)throws TeamException{
        int i=0;
        for(;i<total;i++){
            if (memberId==team[i].getMemberId()){
                team[i].setStatus(Status.FREE);
                break;
            }
        }
        if(i==total){
            throw new TeamException("找不到指定memberId的员工，删除失败");
        }
        for (int j=i+1;j<total;j++){
            team[j-1]=team[j];
        }
        team[--total]=null;
    }
}
