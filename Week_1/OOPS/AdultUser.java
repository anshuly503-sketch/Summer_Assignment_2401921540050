public class AdultUser implements LibraryUser {
    private int age;
    private String bookType;
    public void setAge(int age) {
        this.age = age;
    }
    public void setBookType(String bookType) {
        this.bookType = bookType;
    }
    @Override
    public void registerAccount() {
        if (age > 12) {
            System.out.println("You have successfully registered under an Adult Account");
        } else {
            System.out.println("Sorry age must be greater than 12 to register as an adult");
        }
    }
    @Override
    public void requestBook() {
        if ("Fiction".equals(bookType)) {
            System.out.println("Book Issue successfull please return the book within 7 days");
        } else {
            System.out.println("Oops, you are allow to take only adult fiction books");
        }
    }
}
