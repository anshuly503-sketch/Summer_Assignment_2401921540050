public class KidUser implements LibraryUser {

    private int age;
    private String bookType;
    public void setAge(int age) {
        this.age = age;
    }
    public void setBookType(String bookType) {
        this.bookType = bookType;
    }
https://github.com/anshuly503-sketch/Summer_Assignment_2401921540050/new/main/Week_1/OOPS
    @Override
    public void registerAccount() {
        if (age < 12) {
            System.out.println("You have successfully register under a kids Account");
        } else {
            System.out.println("Sorry,Age must be less than 12 to register as a kid");
        }
    }
    @Override
    public void requestBook() {
        if ("Kids".equals(bookType)) {
            System.out.println("Book Issu successfully,please return the book within 10 days");
        } else {
            System.out.println("Oops, you are allow to take only kids books");
        }
    }
}
