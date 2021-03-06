package java5;

import java.util.concurrent.ExecutorService;
import java.util.concurrent.Executors;
import java.util.concurrent.ThreadPoolExecutor;

/**
 * @author:Dy1022
 * @create:2022/6/911:20
 * @Description:创建线程的方式四：使用线程池
 *
 * 好处：
 * 1.提高响应速度(减少创建线程的时间)
 * 2.降低资源消耗(重复利用线程池中线程，不需要每次都创建)
 * 3.便于线程管理
 *   corePoolSize:核心池大小
 *   maximumPoolSize:最大线程数
 *   keepAliveTime:线程没有任务时最多保持多长时间后会终止
 *
 */
class NumberThread implements Runnable{
    @Override
    public void run() {
        for (int i=1;i<=100;i++){
            if (i%2==0){
                System.out.println(Thread.currentThread().getName()+":"+i);
            }
        }
    }
}
class NumberThread1 implements Runnable{
    @Override
    public void run() {
        for (int i=1;i<=100;i++){
            if (i%2!=0){
                System.out.println(Thread.currentThread().getName()+":"+i);
            }
        }
    }
}
public class ThreadPool {
    public static void main(String[] args) {
        //1.提供指定线程数量的线程池
        ExecutorService executorService= Executors.newFixedThreadPool(10);
        ThreadPoolExecutor service=(ThreadPoolExecutor) executorService;
        service.setCorePoolSize(15);
       // service.setKeepAliveTime();
        //设置线程池的特性
        System.out.println(executorService.getClass());
        //2.执行指定线程的操作：需要提供实现Runnable接口或Callable接口实现类的对象
        executorService.execute(new NumberThread());//适合适用于Runnable
        executorService.execute(new NumberThread1());//适合适用于Runnable
       // executorService.submit();//适合使用于Callable
        //关闭连接池
        executorService.shutdown();
    }
}
