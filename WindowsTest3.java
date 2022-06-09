package exer;

/**
 * @author:Dy1022
 * @create:2022/6/815:47
 * @Description:使用同步方法解决实现Runnable接口的线程安全问题
 */
class Windows3 implements Runnable {
    private int ticket = 1000;
    Object object = new Object();

    @Override
    public void run() {
        while (true) {

          show();
        }
    }
    private synchronized void show(){//同步监视器为this
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

public class WindowsTest3 {
    public static void main(String[] args) {
        Windows3 windows = new Windows3();
        Thread thread = new Thread(windows);
        Thread thread1 = new Thread(windows);
        Thread thread2 = new Thread(windows);
        thread.start();
        thread1.start();
        thread2.start();
    }

}
