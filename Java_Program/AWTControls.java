import java.awt.*;
import java.awt.event.*;
class AWTControls extends Frame implements ActionListener{
    Panel p;
    Label l1;
    TextField t1;
    Button b1;
     
    public AWTControls(){
        super("First App");
        p = new Panel();
        add(p);

        l1 = new Label("Enter name: ");
        t1 = new TextField(20);
        b1 = new Button("Save");
        b1.addActionListener(this);
        p.add(l1);
        p.add(t1);
        p.add(b1);
        setSize(400,400);
        setVisible(true);
    }
    public void actionPerformed(ActionEvent e){
        Object obj = e.getSource();
        if(obj==b1){
            String st = t1.getText();
            System.out.println(st);
        }
    }
    public static void main(String[] args){
        AWTControls obj = new AWTControls();
    }
}