public class LibraryInterfaceDemo {
    public static void main(String[] args) 
        KidUser kid = new KidUser();
        kid.setAge(10);
        kid.registerAccount();
        kid.setAge(18);
        kid.registerAccount();
        kid.setBookType("kid");
        kid.requestBook();
        kid.setBookType("Ficton");
        kid.requestBook();
        System.out.println();
        AdultUser adult = new AdultUser();
        adult.setAge(5);
        adult.registerAccount();
        adult.setAge(23);
        adult.registerAccount();
        adult.setBookType("kid");
        adult.requestBook();
        adult.setBookType("Fictions");
        adult.requestBook();
    }
}
