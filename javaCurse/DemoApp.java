package javaCurse;

import java.util.Comparator;
import java.util.Random;
import java.util.Scanner;

/*
 * Equivalencias C
 * printf === System.out.println
 * scanf === Scanner(System.in). ie:  Scanner keyboard = new Scanner(System.in);
 */

public class DemoApp {
    public static void main(String[] args) {
        Extra methods = new Extra();

        methods.game();

        Curse mathCurse = new Curse(1);
        boolean hasTeacher = mathCurse.teacher != null;

        Person student = new Person();
        student.age = 20;
        student.gender = "male";
        student.name = "Fran";
        Person student2 = new Person();
        student.age = 20;
        student.gender = "male";
        student.name = "Fran";

        mathCurse.addStudent(student);
        mathCurse.addStudent(student2);

        for (int i = 0; i < mathCurse.students.size(); i++) {
            Person person = mathCurse.students.get(i);
            System.out.println("nombre del estudiante " + person.name);
        }

        mathCurse.students.sort(new Comparator<Person>() {
            public int compare(Person a, Person b) {
                return a.name.compareTo(b.name);
            }
        });

        if (!hasTeacher) {
            System.out.println("este curso no tiene profesor");
        }

    }

    public static class Extra {

        void game() {
            printRandNumber();
        }

        void printRandNumber() {
            Random rand = new Random();

            System.out.println("desde extra obtenmos random " + rand.nextInt(25));
            System.out.println("desde extra obtenmos random " + rand.nextInt(25));
            System.out.println("desde extra obtenmos random " + rand.nextInt(25));
        }
    }
}