package hospital.management.system;

import  javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.sql.ResultSet;


public class login extends javax.swing.JFrame implements ActionListener {
 JTextField textField;
 JPasswordField passwordField;
 JButton b1,b2;

    login(){
   JLabel namelabel=new JLabel("Username");
   namelabel.setBounds(40,20,100,30);
namelabel.setFont(new Font("Tahoma",Font.BOLD,16));
add(namelabel);

       JLabel password=new JLabel("password");
        password.setBounds(40,70,100,30);
        password.setFont(new Font("Tahoma",Font.BOLD,16));
        add(password);


textField=new JTextField();
textField.setBounds(150,20,150,30);
textField.setFont(new Font("Tahoma",Font.PLAIN,16));
textField.setBackground(new Color(255,179,0));
add(textField);

passwordField=new JPasswordField();
passwordField.setBounds(150,70,150,30);
passwordField.setFont(new Font("Tahoma",Font.PLAIN,16));
passwordField.setBackground(new Color(255,179,0));
add(passwordField);

ImageIcon imageIcon=new ImageIcon(ClassLoader.getSystemResource("icon/logo.png.jpeg"));
Image i1=imageIcon.getImage().getScaledInstance(300,200,Image.SCALE_DEFAULT);
ImageIcon imageIcon1=new ImageIcon(i1);
JLabel label=new JLabel(imageIcon1);
label.setBounds(420,5,200,200);
add(label);


b1=new JButton("Login");
b1.setBounds(40,140,120,30);
b1.setFont(new Font("serif",Font.BOLD,15));
b1.setBackground(Color.black);
b1.setForeground(Color.white);
b1.addActionListener(this);
add(b1);
        b2=new JButton("cancel");
        b2.setBounds(180,140,120,30);
        b2.setFont(new Font("serif",Font.BOLD,15));
        b2.setBackground(Color.black);
        b2.setForeground(Color.white);
        b2.addActionListener(this);

        add(b2);



getContentPane().setBackground(new Color(109,164,170));
setSize(750,300);
setLocation(400,270);
 setLayout(null);
 setVisible(true);
    }
    public static void main(String[] args) {
    new login();
    }

    @Override
    public void actionPerformed(ActionEvent e) {

            if (e.getSource() == b1) {
                try {
                    conn c = new conn();
                    String user = textField.getText();
                    String pass = passwordField.getText();

                    String q = "select * from login where ID='" + user + "' and PW='" + pass + "'";
                    ResultSet resultSet = c.statement.executeQuery(q);
                    if (resultSet.next()) {
                        new Reception();
                        setVisible(false);
                    } else {
                        JOptionPane.showMessageDialog(null, "Wrong username or password");
                    }


                } catch (Exception E) {
                    E.printStackTrace();
                }
            } else {


                System.exit(10);

            }


        }

    }