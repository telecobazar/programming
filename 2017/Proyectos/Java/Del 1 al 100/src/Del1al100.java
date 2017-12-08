import java.util.Scanner;

public class Del1al100 {

	public static void main(String[] args) {
	  Scanner reader = new Scanner(System.in);                
	  int numero1;
		      
	  System.out.println("Introduce el número tope: ");
	  numero1 = reader.nextInt();
		
	  System.out.println("Numeros del 1 al 100: ");
	  for(int i = 1; i<=numero1;i++)
	  System.out.println(i);

	}

}
