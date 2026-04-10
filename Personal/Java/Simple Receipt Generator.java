import java.util.Scanner;
public class Main {
	public static void main(String[] args) {
		Scanner kewboard = new Scanner(System.in);
		System.out.println("Hi, welcome in my bar! Enter a product, please (if you want more than one, enter the plural form of the product");
		String nameProduct = kewboard.nextLine();
		System.out.println("Now enter the price of only one");
		double price = kewboard.nextDouble();
		System.out.println("How many do you want?");
		int numb = kewboard.nextInt();
		double tot = price * numb;
		double iva = tot * 0.22; // Italian IVA = Imposta sul Valore Aggiunto (tax on products) ---> 22%
		tot = tot + iva;
		System.out.println("You ordered " + numb + " " + nameProduct + ", the price is " + tot + " eur");
	}
}
