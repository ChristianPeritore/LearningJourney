import java.util.Scanner;
public class Main {
	public static void main(String[] args) {
		Scanner keyboard = new Scanner(System.in);
		double discount = 0;
		boolean open = true;
		while (open == true) {
			System.out.println("Hi, please enter your age");
		    int age = keyboard.nextInt();
			if (age < 16) {
				System.out.println("Sorry, you're too young to enter this bar.");
			} else {
				keyboard.nextLine();
				System.out.println("Hi, welcome in my bar! Enter a product, please (if you want more than one, enter the plural form of the product");
				String nameProduct = keyboard.nextLine();
				System.out.println("Now enter the price of only one");
				double price = keyboard.nextDouble();
				System.out.println("How many do you want?");
				int numb = keyboard.nextInt();
				keyboard.nextLine();
				double tot = price * numb;
				double iva = tot * 0.22; // Italian IVA = Imposta sul Valore Aggiunto (tax on products) ---> 22%
				tot = tot + iva;
				if (tot > 50) {
					discount = tot * 0.10;
					tot = tot - discount;
					System.out.println("You riceved a 10% discount!");
				} else if (tot > 20) {
					discount = tot * 0.05;
					tot = tot - discount;
					System.out.println("You riceved a 5% discount!");
				}
				System.out.println("You ordered " + numb + " " + nameProduct + ", the price is " + tot + " eur");
				System.out.println("Do you want to serve another customer?");
				String answer = keyboard.nextLine();
				if (answer.equals("No") || answer.equals("no")) {
				    open = false;
				    System.exit(0);
				}
			}
		}
	}
}
