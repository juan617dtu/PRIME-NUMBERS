import java.text.NumberFormat;
import java.text.ParsePosition;
import java.util.Scanner;

public class Main {
	
	public static final String ANSI_GREEN = "\u001B[32m";
	public static final String ANSI_RESENT = "\u001B[0m";
	static Scanner prompt = new Scanner(System.in);
	
	static boolean isDigit(String str) {
		
		ParsePosition pp = new ParsePosition(0);
		NumberFormat.getInstance().parse(str, pp);
		return str.length() == pp.getIndex();
	}
	
	static boolean isPrime(int n) {
		
		if (n <= 1) return false;
		
		for (int i = 2; i < n; i++) {
			if (n % i == 0) return false;
		}
		return true;
	}
	
	public static void main(String[] args) {
		
		System.out.println(ANSI_GREEN 
				+ "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@"
				+ "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\n"
				+ "\t\t\t\t\t\tPRIME NUMBERS\n\n" 
				+ "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@"
				+ "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\n");
		
		boolean flag = false; String data;
		do {
			System.out.print("\n\nEnter the limit (or enter 'q' to exit): ");
			data = prompt.nextLine();
			data = data.trim().toLowerCase();
			if (data.charAt(0) == 'q') System.exit(0);
			if (!isDigit(data)) {
				System.out.println("\nInvalid input.");
				flag = true;
			}
			else {
				flag = false;
			}
		} while (flag == true);
		
		System.out.println("\n");
		
		double limit = Double.parseDouble(data);
		for (int k = 0; k <= limit; k++){
			String fieldWithLeftAligned = String.format("%-9d", k); 
			if (isPrime(k)) System.out.println(fieldWithLeftAligned);
		}
		
	}

}
