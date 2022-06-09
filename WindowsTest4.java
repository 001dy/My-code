package exer;

/**
 * @author:Dy1022
 * @create:2022/6/815:54
 * @Description:使用同步方法解决使用继承Thread类的方式线程安全问题
 *
 * 关于同步方法的总结：
 * 1.同步方法仍然涉及到同步监视器，只是不需要我们显示的声明
 * 2.非静态的同步方法，同步监视器是：this
 *   静态的同步方法，同步监视器：当前类本身
 */
class Windows4 extends Thread {
    private static int ticket = 1000;
    Object object = new Object();

    @Override
    public void run() {
        while (true) {

            show();
        }
    }
    private static synchronized void show(){//同步监视器为:Windows4
        if (ticket > 0) {
            try {
                Thread.sleep(10);
            } catch (InterruptedException e) {
                e.printStackTrace();
            }
            System.out.println(Thread.currentThread().getName() + ":卖票，票号为：" + ticket);
            ticket--;
        }
    }
}
public class WindowsTest4 {
    public static void main(String[] args) {
        Windows4 w1 = new Windows4();
        Windows4 w2 = new Windows4();
        Windows4 w3 = new Windows4();

        w1.start();
        w2.start();
        w3.start();

    }


}
