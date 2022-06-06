package exer;

/**
 * @author:Dy1022
 * @create:2022/6/620:33
 * @Description:创建三个窗口卖票，总票数为100,使用实现Runnable接口的方式
 */

class Windows implements Runnable{
    private int ticket=100;
    @Override
    public void run() {
        while (true){
            if (ticket>0){
                System.out.println(Thread.currentThread().getName()+":卖票，票号为："+ticket);
                ticket--;
            }else {
                break;
            }
        }
    }
}
public class WindowsTest1 {
    public static void main(String[] args) {
        Windows windows = new Windows();
        Thread thread = new Thread(windows);
        Thread thread1 = new Thread(windows);
        Thread thread2 = new Thread(windows);
        thread.start();
        thread1.start();
        thread2.start();
    }
}
