package domain;

/**
 * @author:Dy1022
 * @create:2022/6/514:17
 * @Description:笔记本
 */
public class NoteBook implements Equipment{
    private String model;
    private double price;

    public NoteBook(String model, double price) {
        this.model = model;
        this.price = price;
    }

    public NoteBook() {
    }

    public String getModel() {
        return model;
    }

    public void setModel(String model) {
        this.model = model;
    }

    public double getPrice() {
        return price;
    }

    public void setPrice(double price) {
        this.price = price;
    }

    @Override
    public String getDescription() {
        // TODO 自动生成的方法存根
        return model+"("+price+")";
    }
}
