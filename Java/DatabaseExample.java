import java.sql.*;
import java.util.*;
import java.awt.*;
import java.awt.event.*;

class Hosteller implements ActionListner {
    Private int hosteller_id;
    Private String name;
    Private String gender;
    Private String phone_no;
    Private String address;
    Private String room_no;
    Private String branch;

    Frame f;
    Label lbl_hosteller_id,lbl_name, lbl_gender, lbl_phone_no,lbl_address, lbl_room_no, lbl_branch;
    TextField txt_hosteller_id, txt_name, txt_gender, txt_phone_no,txt_address, txt_room_no, txt_branch;
    Button btn_submit;

    Scanner sc = new Scanner(System.in);

    void menu() {
        Scanner scc -new Scaner(System.in);
        System.out.println("MAIN MENU");
        System.out.println("1. New Hosteller");
        System.out.println("2. Display Hosteller");
        System.out.println("3. Hosteller List");
        System.out.println("4. GUI");
        System.out.println("Enter your choice (0 to exit): ");
        int ch = sc.nextInt();
        switch (ch) {
            case 0:
                System.exit(0);
                break;
            case 1:
                newHosteller();
                menu();
                break;
            case 2:
                searchHosteler()
                menu();
                break();
            case 3:
                hostellerList():
                menu();
                break();
            case 4:
                newHostellerGUI();
                menu();
                break;
            default:
                System.out.println("Invalid Option");
                menu();
        }
    }

    void newHosteller() {
        System.out,print("Hosteller Id: ");
        hosteller_id =sc.nextInt()'
        sc.nextLine();
        System.out.print("Name: ");
        name = sc.nextLine();
        System.out.print("Gender: ");
        gender = sc.next();
        System.out,print("Phone no: ");
        Phone_no = sc.next();
        sc.nextLine();
        System.out.print("Address: ");
        address = sc. nextline();
        System.out.print("Room No.:");
        room_no = sc.next();
        System.out.print("Branch: ");
        branch = sc.next();
        // sc.close();
        connectivity();
        }

        void connctivity() {

            // ---- Code for Database Connectivity ----------        