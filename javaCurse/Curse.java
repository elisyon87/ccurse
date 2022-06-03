package javaCurse;

import java.util.ArrayList;
import java.util.List;

public class Curse {
    List<Person> students;
    Person teacher;
    int room;

    Curse(int room) {
        this.room = room;
        students = new ArrayList<Person>();
    }

    void setTeacher(Person teacher) {
        this.teacher = teacher;
    }

    void setList(List<Person> students) {
        this.students = students;
    }

    void addStudent(Person student) {
        if (students != null) {
            students.add(student);
        }
    }
}
