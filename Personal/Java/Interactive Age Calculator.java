import java.util.Scanner;
public class Main {
	public static void main(String[] args) {
		Scanner keyboard = new Scanner(System.in);
		System.out.println("Hi, enter your name and the year when you were born");
		String name = keyboard.nextLine();
		int year = keyboard.nextInt();
		int age = 2026 - year;
		System.out.println("Hi " + name + ", in 2026 you are / will be " + age + " years old!");
	}
}
