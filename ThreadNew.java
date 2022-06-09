package java5;

import java.util.concurrent.Callable;
import java.util.concurrent.ExecutionException;
import java.util.concurrent.FutureTask;

/**
 * @author:Dy1022
 * @create:2022/6/910:52
 * @Description:JDK5.0新增创建多线程方式
 *
 * 新增一：
 * 实现Callable接口
 * 1.创建一个实现Callable接口的实现类
 * 2.实现call方法,将要执行操作声明在方法中
 * 3.创建Callable接口实现类的对象
 * 4.创建FutureTask对象，将Callable接口实现类的对象传递到构造器中
 * 5.将FutureTask对象传递到Thread构造器中，创建Thread对象，并调用start()
 * 6.获取Callable中call方法的返回值（如有需要）
 *
 * 如何理解创建实现Callable接口比实现Runnable接口更强大
 * 1.call()有返回值
 * 2.可抛出异常，被外面的操作捕获，获取异常信息
 * 3.Callable支持泛型
 *
 *
 */
class NumThread implements Callable{
    @Override
    public Object call() throws Exception {
        int sum=0;
        for (int i=1;i<=100;i++){
            if (i%2==0){
                System.out.println(i);
                sum+=i;
            }
        }
        return sum;
    }
}
public class ThreadNew {
    public static void main(String[] args) {
        NumThread numThread = new NumThread();
        FutureTask futureTask = new FutureTask(numThread);
        Thread thread = new Thread(futureTask);
        thread.start();
        try {
            //get方法返回值即为FutureTask构造器参数Callable实现类重写的call()的返回值
            Object sum = futureTask.get();
            System.out.println(sum);
        } catch (InterruptedException e) {
            e.printStackTrace();
        } catch (ExecutionException e) {
            e.printStackTrace();
        }
    }

}
