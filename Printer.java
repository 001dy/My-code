package domain;

/**
 * @author:Dy1022
 * @create:2022/6/514:19
 * @Description:打印机
 */
public class Printer implements Equipment{
    private String type;
    private String name;

    public Printer() {
    }

    public Printer( String type,String name) {
        this.name = name;
        this.type = type;
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public String getType() {
        return type;
    }

    public void setType(String type) {
        this.type = type;
    }

    @Override
    public String getDescription() {
        // TODO 自动生成的方法存根
        return type+"("+name+")";
    }
}
