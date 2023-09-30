import java.util.Scanner;

class Person {
    private String name;
    private int age;

    public Person() {
        name = "aku";
        age = 99;
    }

    public void output() {
        System.out.println("Name: " + name);
        System.out.println("Age: " + age);
    }
}

public class inputstr {
    public static void main(String[] args) {
        Person person = new Person();

        // Output data
        person.output();
    }
}
