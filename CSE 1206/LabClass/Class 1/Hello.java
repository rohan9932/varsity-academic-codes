import java.util.Scanner;
public class Hello {
	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		String n = args[0];
		int num = Integer.parseInt(n);
		System.out.println("Hello Java");
		System.out.println(args[1]);
		System.out.printf("%d\n", num);
		
		int num2 = input.nextInt();
		System.out.println(num2);
	}
}