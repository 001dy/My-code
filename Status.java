package service;

/**
 * @author:Dy1022
 * @create:2022/6/514:25
 * @Description:
 */
public class Status {
    private final String NAME;

    private Status(String NAME) {
        this.NAME = NAME;
    }
    public static final Status FREE=new Status("FREE");
    public static final Status VOCATION=new Status("VOCATION");
    public static final Status BUSY=new Status("BUSY");

    public String getNAME() {
        return NAME;
    }

    @Override
    public String toString() {
        return NAME;
    }
}
