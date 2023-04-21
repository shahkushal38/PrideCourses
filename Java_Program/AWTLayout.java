import java.awt.*;
import java.awt.event.*;
class AWTControls extends Frame implements ActionListener{
    Frame p;
    Label l1;
    TextField t1;
    Button b1;
    TextField t2;
    Label l2;
    Checkbox r1,r2;
    CheckboxGroup chg;
    List l;
     
    public AWTControls(){
        // super("First App");
             
        p = new Frame();
        // add(p);
        p.setTitle("Frame in Java");   
        l1 = new Label("Enter name: ");
        l1.setBounds(20,60, 100, 20);
        t1 = new TextField(20);
        t1.setBounds(20,80,100,20);
        l2 = new Label("The value :");
        l2.setBounds(20, 120, 100, 20);
        t2 = new TextField(25);
        t2.setBounds(20, 140, 100, 20);
        b1 = new Button("Save");
        b1.setBounds(150,80,50,20);
        b1.addActionListener(this);

        //checkbox
        chg = new CheckboxGroup();
        r1 = new Checkbox("Male", chg, false);
        r2 = new Checkbox("Female", chg, false);
        r1.setBounds(20, 160, 100, 20);
        r2.setBounds(20, 170, 100,20);

        l = new List(2, true);
        l.add("ABC");
        l.add("ASD");
        l.add("MUT");
        l.setBounds(140, 200, 100, 20);

        p.add(l1);
        p.add(t1);
        p.add(b1);
        p.add(t2);
        p.add(l2);
        p.add(r1);
        p.add(r2);
        p.add(l);

        p.setSize(500,500);
        p.setVisible(true);
        // p.setLayout(null);   
      
    }
    public void actionPerformed(ActionEvent e){
        Object obj = e.getSource();
        if(obj==b1){
            String st = t1.getText();
            System.out.println(st);
            t2.setText(st);
        }

    }
    public static void main(String[] args){
        AWTControls obj = new AWTControls();
    }
}