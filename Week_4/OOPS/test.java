interface Test {
    int square(int n);
}
class Arithmetic implements Test {
    public int square(int n) {
        return n * n;
    }
}
public class ToTestInt{
    public static void main(String[] args){
        Arithmetic obj =new Arithmetic();
        int result = obj.square(5);
        System.out.println("Square = "+ result);
    }
}
class Outer {
    void display() {
        System.out.println("Display method of Outer class");
    }
    class Inner {
        void display() {
            System.out.println("Display method of Inner class");
        }
    }
}
public class Main{
    public static void main(String[] args){
        Outer obj1 =new Outer();
        obj1.display();
        Outer.Inner obj2=obj1.new Inner();
        obj2.display();
    }
}
class Point{
    private int x, y;
    public Point(){
        x =0;
        y =0;
    }
    public Point(int x,int y){
        this.x= x;
        this.y= y;
    }
    public void setX(int x) {
        this.x =x;
    }
    public void setY(int y){
        this.y =y;
    }
    public void setXY(int x,int y){
        this.x = x;
        this.y =y;
    }
    public void display(){
        System.out.println("Point = (" +x+", " +y+ ")");
    }
    public static void main(String[] args) {
        Point p1 =new Point();
        p1.display();
        Point p2 =new Point(10, 20);
        p2.display();
        p1.setX(5);
        p1.setY(15);
        p1.display();
        p1.setXY(25, 30);
        p1.display();
    }
}
class Box{
    protected double length;
    protected double breadth;
    Box(double l,double b) {
        length = l;
        breadth =b;
    }
    void area(){
        double a=length*breadth;
        System.out.println("Area = "+a);
    }
}
class Box3D extends Box{
    double height;
    Box3D(double l, double b, double h){
        super(l,b);
        height=h;
    }
    void volume(){
        double v =length*breadth*height;
        System.out.println("Volume = " + v);
    }
}
public class Main{
    public static void main(String[] args){
        Box b=new Box(10,5);
        b.area();
        Box3D b3 =new Box3D(10,5,4);
        b3.area();
        b3.volume();
    }
}
