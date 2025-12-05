package hospital.management.system;

import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class Reception extends JFrame {
    Reception(){
        JPanel panel=new JPanel();
        panel.setLayout(null);
        panel.setBounds(5,160,1525,670);
        panel.setBackground(new Color(109,164,170));
        add(panel);

        JPanel panel1=new JPanel();
        panel1.setLayout(null);
        panel1.setBounds(5,5,1525,150);
        panel1.setBackground(new Color(109,164,170));
        add(panel1);

         ImageIcon i1= new ImageIcon(ClassLoader.getSystemResource("icon/dr.png"));
         Image image=i1.getImage().getScaledInstance(250,250,Image.SCALE_DEFAULT);
         ImageIcon i2=new ImageIcon(image);
         JLabel label=new JLabel(i2);
         label.setBounds(1300,0,250,250);
        panel1.add(label);

        ImageIcon i11= new ImageIcon(ClassLoader.getSystemResource("icon/amb.png"));
        Image image1=i11.getImage().getScaledInstance(300,100,Image.SCALE_DEFAULT);
        ImageIcon i22=new ImageIcon(image1);
        JLabel label1=new JLabel(i22);
        label1.setBounds(1000,50,300,100);
        panel1.add(label1);

        JButton btn1=new JButton("add new patient");
        btn1.setBackground(new Color(246,215,118));
        btn1.setBounds(30,15,200,30);
        panel1.add(btn1);
        btn1.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e) {
         new NEW_PATIENT ();

            }
        });
        JButton btn2=new JButton("room");
        btn2.setBackground(new Color(246,215,118));
        btn2.setBounds(30,58,200,30);
        panel1.add(btn2);
        btn2.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e) {


            }
        });

        JButton btn3=new JButton("department");
        btn3.setBackground(new Color(246,215,118));
        btn3.setBounds(30,100,200,30);
        panel1.add(btn3);
        btn3.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e) {

            }
        });
        JButton btn4=new JButton("All employee Info");
        btn4.setBackground(new Color(246,215,118));
        btn4.setBounds(270,15,200,30);
        panel1.add(btn4);
        btn4.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e) {

            }
        });
        JButton btn5=new JButton("patient info");
        btn5.setBackground(new Color(246,215,118));
        btn5.setBounds(270,58,200,30);
        panel1.add(btn5);
        btn5.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e) {

            }
        });

        JButton btn6=new JButton("patient discharge");
        btn6.setBackground(new Color(246,215,118));
        btn6.setBounds(270,100,200,30);
        panel1.add(btn6);
        btn6.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e) {

            }
        });
        JButton btn7=new JButton("update patient details");
        btn7.setBackground(new Color(246,215,118));
        btn7.setBounds(510,15,200,30);
        panel1.add(btn7);
        btn7.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e) {

            }
        });
        JButton btn8=new JButton("Hospital Ambulance");
        btn8.setBackground(new Color(246,215,118));
        btn8.setBounds(510,58,200,30);
        panel1.add(btn8);
        btn8.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e) {

            }
        });
        JButton btn9=new JButton("search the room");
        btn9.setBackground(new Color(246,215,118));
        btn9.setBounds(510,100,200,30);
        panel1.add(btn9);
        btn9.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e) {

            }
        });
        JButton btn10=new JButton("log out");
        btn10.setBackground(new Color(246,215,118));
        btn10.setBounds(750,15,200,30);
        panel1.add(btn10);
        btn10.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e) {

            }
        });











        setSize(1950,1090);
       getContentPane().setBackground(Color.white);
       setLayout(null);
       setVisible(true);
    }

    public static void main(String[] arys){
        new Reception();
    }
}
first page .java