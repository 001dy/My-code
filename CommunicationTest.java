package java4;

/**
 * @author:Dy1022
 * @create:2022/6/817:22
 * @Description:线程通信
 *
 * wait():一旦执行此方法，使得调用如下方法的线程进入阻塞,并且释放锁
 * notify():一旦执行此方法，就会唤醒被wait()的一个线程。如果有多个被wait()，则释放优先级高的
 * notifyAll():一旦执行此方法，就会唤醒被wait()的所有线程
 *
 * 说明：
 * 1.wait()，notify()，notifyAll()三个方法声明在Object类中。必须使用在同步方法或同步代码块中
 * 2.wait()，notify()，notifyAll()三个方法调用者必须是同步代码块或同步方法中相同的锁
 *   否则，会出现IllegalMonitorStateException异常
 * 面试题：sleep()和wait()的异同
 * 1.相同点：一旦执行此方法，都可以使得当前的线程进入阻塞状态
 * 2.不同点：1）两个方法声明的位置不同
 *         2）调用的要求不同：sleep()可以在任何需要的场景下调用。wait()必须使用在同步方法或同步代码块中
 *         3)关于是否释放同步监视器：两个都在同步方法或同步代码块中，sleep()不会释放同步监视器，wait()会
 */
class Number implements Runnable{
    private int number=1;
    @Override
    public void run() {
        while (true){
           synchronized (this){
               notify();
               if (number<100) {
                   try {
                       Thread.sleep(10);
                   } catch (InterruptedException e) {
                       e.printStackTrace();
                   }
                   System.out.println(Thread.currentThread().getName() + ":" + number);
                   number++;
                   try {
                       //使得调用如下方法的线程进入阻塞,并且释放锁
                       wait();
                   } catch (InterruptedException e) {
                       e.printStackTrace();
                   }
               }else {
                   break;
               }
           }
        }

    }
}
public class CommunicationTest {
    public static void main(String[] args) {
        Number number=new Number();
        Thread thread=new Thread(number);
        Thread thread1=new Thread(number);

        thread.setName("线程一");
        thread1.setName("线程二");

        thread.start();
        thread1.start();

    }

}
