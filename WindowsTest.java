package exer;

/**
 * @author:Dy1022
 * @create:2022/6/620:03
 * @Description:创建三个窗口卖票，总票数为100,使用继承Thread类的方法
 */
class Window extends Thread{
    private static int ticket=100;

    @Override
    public void run() {
        while (true){
            if (ticket>0){
                System.out.println(getName()+":卖票，票号为："+ticket);
                ticket--;
            }else {
                break;
            }
        }
    }
}
public class WindowsTest {
    public static void main(String[] args) {
        Window window = new Window();
        Window window1 = new Window();
        Window window2= new Window();
        window.start();
        window1.start();
        window2.start();
    }
}
