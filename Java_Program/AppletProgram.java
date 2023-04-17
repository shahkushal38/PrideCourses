import java.applet.*;
public class AppletProgram extends Applet {

    public void init(){
        System.out.println("Init() method worked");
    }
    public void start(){
        System.out.println("Start() method worked");
    }
    public void stop(){
        System.out.println("Stop() method worked");
    }
    public void destroy(){
        System.out.println("Destroy() method worked");
    }
}