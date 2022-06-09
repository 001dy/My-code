package exer;

/**
 * @author:Dy1022
 * @create:2022/6/620:33
 * @Description:创建三个窗口卖票，总票数为100,使用实现Runnable接口的方式
 * 1.问题：在卖票过程中，出现了错--->出现了线程安全问题
 * 2.问题原因：当某个线程操作车票的过程中，尚未操作完成、其他线程参与进来、也操作车票
 * 3.如何解决：当一个线程a在操作ticket的时候，其他线程不能参与进来。直到操作完成，其他线程才能参与进来
 *           这种情况即使线程a出现了阻塞，也不能被改变
 *方式一：同步代码块
 *       synchronized(同步监视器){
 *           //需要被同步的代码
 *       }
 *       1.说明：操作共享数据的代码，即为同步代码，不能多不能少
 *       2.共享数据：多个线程共同操作的变量：如ticket
 *       3.同步监视器：俗称：锁。任何一个类的对象都可充当锁
 *         要求：多个线程必须要共用一把锁
 *
 *       补充：在实现Runnable接口的方式中可以考虑使用this
 *方式二：同步方法
 *       如果操作共享数据的代码声明在一个方法中，我们不妨同步方法
 *
 *
 * 5.同步的方式，解决了线程的安全问题---好处
 *   操作同步代码时，只能有一个线程参与，其他线程等待。相当于是一个单线程的过程，效率低---坏处
 */

class Windows implements Runnable{
    private  int ticket=100;
    Object object=new Object();
    @Override
    public void run() {
        while (true){
            synchronized(this){//此时的this：唯一的Windows1对象
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
