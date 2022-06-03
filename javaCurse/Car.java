package javaCurse;

public class Car {
    int wheels;
    String color;

    Car(String c, int w) {
        color = c;
        wheels = w;
    }

    Car() {

    }

    int getWheelsCount() {
        return wheels;
    }
}
