package exer;


/**
 * @author:Dy1022
 * @create:2022/6/620:33
 * @Description:创建三个窗口卖票，总票数为100
 * 使用继承Thread类的方式，使用同步代码块解决继承Thread类的方式的线程安全问题
 * 补充：在使用继承Thread类的方式中慎用this,因为有可能有多个对象

 */

class Windows2 extends Thread{
    private static int ticket=1000;
    private static Object object=new Object();
    @Override
    public void run() {
        while (true){
           // synchronized(object){
            synchronized(Windows2.class){//Class cls=Windows2.class
                if (ticket>0){
                    try {
                        Thread.sleep(100);
                    } catch (InterruptedException e) {
                        e.printStackTrace();
                    }
                    System.out.println(Thread.currentThread().getName()+":卖票，票号为："+ticket);
                    ticket--;
                }else {
                    break;
                }
            }
        }
    }
}
public class WindowsTest2 {
    public static void main(String[] args) {
        Windows2 w1 = new Windows2();
        Windows2 w2 = new Windows2();
        Windows2 w3 = new Windows2();
        w2.setPriority(10);
        w1.start();
        w2.start();
        w3.start();



    }
}
