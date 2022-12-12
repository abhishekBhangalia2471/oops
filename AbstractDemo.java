abstract class Figure{
    int dim1,dim2;

    Figure(int x, int y){
        dim1 = x;
        dim2 = y;
    }
    abstract void area();
}

class Rectangle extends Figure{

    Rectangle(int x, int y){
        super(x,y);
    }

    void area(){
        System.out.println("Area of rectangle is : "+(dim1*dim2));
    }

}

class Triangle extends Figure{

    Triangle(int x, int y){
        super(x,y);
    }

    void area(){
        System.out.println("Area of triangle is : "+(dim1*dim2*0.5));
    }

}

public class AbstractDemo{

    public static void main(String args[]){
        Figure f = new Rectangle(2,3);
        f.area();
        f = new Triangle(3,4);
        f.area();
    }
}