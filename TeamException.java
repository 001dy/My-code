package service;

/**
 * @author:Dy1022
 * @create:2022/6/515:45
 * @Description:自定义异常
 */
public class TeamException extends Exception{
    static final long serialVersionUID = -3387516993124229948L;

    public TeamException() {
    }

    public TeamException(String message) {
        super(message);
    }
}
