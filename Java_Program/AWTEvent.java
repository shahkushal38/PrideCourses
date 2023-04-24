/* The Event classes represent the event. Java provides us various Event classes 

EventObject class
All Events are constructed with a reference to the object, the source, that is logically deemed to be the 
object upon which the Event in question initially occurred upon.This class is defined in java.util package.

	
AWTEvent
It is the root event class for all AWT events. 
This class and its subclasses supercede the original java.awt.Event class.



class AWTEvent {

    class ActionEvent{

    }
}

Reference - https://www.javatpoint.com/java-keylistener
Referrence - https://www.javatpoint.com/event-handling-in-java


*/



import java.awt.*;  
import java.awt.event.*;  
class AEvent extends Frame implements ActionListener, ItemListener{  
    TextField tf;  
    Checkbox checkBox1,checkBox2;  
    Label label;  
    AEvent(){  
  
        //create components  
        tf=new TextField();  
        tf.setBounds(60,50,170,20);  
        Button b=new Button("click me");  
        b.setBounds(100,120,80,30);  
        label = new Label();            
        label.setAlignment(Label.CENTER);    
        label.setBounds(100,250,200,50);    
        checkBox1 = new Checkbox("C++");    
        checkBox1.setBounds(100,300, 50,50);    
        checkBox2 = new Checkbox("Java");    
        checkBox2.setBounds(100,350, 50,50);    
  
        //register listener  
        b.addActionListener(this);//passing current instance  
        checkBox1.addItemListener(this);    
        checkBox2.addItemListener(this);

        //add components and set size, layout and visibility  
        add(b);
        add(tf);  
        add(checkBox1); 
        add(checkBox2); 
        add(label);    
            
        setSize(400,400);  
        setLayout(null);  
        setVisible(true);  
    }  
    public void actionPerformed(ActionEvent e){  
        tf.setText("Welcome");  
    }  


    public void itemStateChanged(ItemEvent e) {      
        if(e.getSource()==checkBox1)  
            label.setText("C++ Checkbox: " + (e.getStateChange()==1?"checked":"unchecked"));   
        if(e.getSource()==checkBox2)  
        label.setText("Java Checkbox: " + (e.getStateChange()==1?"checked":"unchecked"));    
    }  

    
    public static void main(String args[]){  
    AEvent obj = new AEvent();  
    }  
}  