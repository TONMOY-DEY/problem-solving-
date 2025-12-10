import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

public class MainFrame extends JFrame {

    Patient[] patients = new Patient[100];
    int patientCount = 0;

    public MainFrame() {
        setTitle("Hospital Patient Management System");
        setSize(600, 450);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setLocationRelativeTo(null);

        setLayout(new GridLayout(6, 1, 10, 10));

        JButton addBtn = new JButton("Add New Patient");
        JButton showBtn = new JButton("Display All Patients");
        JButton searchIdBtn = new JButton("Search Patient by ID");
        JButton searchNameBtn = new JButton("Search Patient by Name");
        JButton exitBtn = new JButton("Exit");

        add(addBtn);
        add(showBtn);
        add(searchIdBtn);
        add(searchNameBtn);
        add(exitBtn);

        addBtn.addActionListener(e -> addPatientGUI());
        showBtn.addActionListener(e -> displayAllGUI());
        searchIdBtn.addActionListener(e -> searchByIdGUI());
        searchNameBtn.addActionListener(e -> searchByNameGUI());
        exitBtn.addActionListener(e -> System.exit(0));

        setVisible(true);
    }

    // ----------------------- ADD PATIENT GUI -----------------------
    void addPatientGUI() {
        JTextField idField = new JTextField();
        JTextField nameField = new JTextField();
        JTextField ageField = new JTextField();
        JTextField genderField = new JTextField();
        JTextField conditionField = new JTextField();
        JTextField doctorField = new JTextField();
        JTextField roomField = new JTextField();
        JTextField dateField = new JTextField();
        JTextField costField = new JTextField();

        Object[] fields = {
                "Patient ID:", idField,
                "Name:", nameField,
                "Age:", ageField,
                "Gender:", genderField,
                "Medical Condition:", conditionField,
                "Assigned Doctor:", doctorField,
                "Room Number:", roomField,
                "Admission Date (YYYY-MM-DD):", dateField,
                "Treatment Cost:", costField
        };

        int option = JOptionPane.showConfirmDialog(null, fields, 
                "Add New Patient", JOptionPane.OK_CANCEL_OPTION);

        if (option == JOptionPane.OK_OPTION) {
            Patient p = new Patient();
            p.id = Integer.parseInt(idField.getText());
            p.name = nameField.getText();
            p.age = Integer.parseInt(ageField.getText());
            p.gender = genderField.getText();
            p.condition = conditionField.getText();
            p.doctor = doctorField.getText();
            p.room = Integer.parseInt(roomField.getText());
            p.admissionDate = dateField.getText();
            p.treatmentCost = Float.parseFloat(costField.getText());

            patients[patientCount] = p;
            patientCount++;

            JOptionPane.showMessageDialog(null, "Patient added successfully!");
        }
    }

    // ----------------------- DISPLAY ALL -----------------------
    void displayAllGUI() {
        if (patientCount == 0) {
            JOptionPane.showMessageDialog(null, "No patients available!");
            return;
        }

        StringBuilder sb = new StringBuilder();
        for (int i = 0; i < patientCount; i++) {
            Patient p = patients[i];
            sb.append("ID: ").append(p.id)
                    .append("\nName: ").append(p.name)
                    .append("\nAge: ").append(p.age)
                    .append("\nGender: ").append(p.gender)
                    .append("\nCondition: ").append(p.condition)
                    .append("\nDoctor: ").append(p.doctor)
                    .append("\nRoom: ").append(p.room)
                    .append("\nAdmission: ").append(p.admissionDate)
                    .append("\nCost: ").append(p.treatmentCost)
                    .append("\n-----------------------------\n");
        }

        JTextArea area = new JTextArea(sb.toString());
        area.setEditable(false);
        JScrollPane scroll = new JScrollPane(area);

        JOptionPane.showMessageDialog(null, scroll, 
                "All Patients", JOptionPane.INFORMATION_MESSAGE);
    }

    // ----------------------- SEARCH BY ID -----------------------
    void searchByIdGUI() {
        if (patientCount == 0) {
            JOptionPane.showMessageDialog(null, "No patients available!");
            return;
        }

        String idStr = JOptionPane.showInputDialog("Enter Patient ID:");
        int id = Integer.parseInt(idStr);

        for (int i = 0; i < patientCount; i++) {
            if (patients[i].id == id) {
                Patient p = patients[i];
                JOptionPane.showMessageDialog(null,
                        "PATIENT FOUND\n" +
                                "ID: " + p.id +
                                "\nName: " + p.name +
                                "\nAge: " + p.age +
                                "\nGender: " + p.gender +
                                "\nCondition: " + p.condition +
                                "\nDoctor: " + p.doctor +
                                "\nRoom: " + p.room +
                                "\nAdmission: " + p.admissionDate +
                                "\nCost: " + p.treatmentCost
                );
                return;
            }
        }

        JOptionPane.showMessageDialog(null, "Patient not found!");
    }

    // ----------------------- SEARCH BY NAME -----------------------
    void searchByNameGUI() {
        if (patientCount == 0) {
            JOptionPane.showMessageDialog(null, "No patients available!");
            return;
        }

        String name = JOptionPane.showInputDialog("Enter Patient Name:");

        for (int i = 0; i < patientCount; i++) {
            if (patients[i].name.equalsIgnoreCase(name)) {
                Patient p = patients[i];

                JOptionPane.showMessageDialog(null,
                        "PATIENT FOUND\n" +
                                "ID: " + p.id +
                                "\nName: " + p.name +
                                "\nAge: " + p.age +
                                "\nGender: " + p.gender +
                                "\nCondition: " + p.condition +
                                "\nDoctor: " + p.doctor +
                                "\nRoom: " + p.room +
                                "\nAdmission: " + p.admissionDate +
                                "\nCost: " + p.treatmentCost
                );
                return;
            }
        }

        JOptionPane.showMessageDialog(null, "Patient not found!");
    }

    // ----------------------- MAIN -----------------------
    public static void main(String[] args) {
        new MainFrame();
    }
}

