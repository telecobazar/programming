import java.util.Scanner;

public class MayorMenor {

	public static void main(String[] args) {
	  Scanner reader = new Scanner(System.in);                
	  int numero1, numero2;
	     
	  System.out.println("Dame el primer número: ");
	  numero1 = reader.nextInt();
	  
	  System.out.println("Dame el segundo número: ");
	  numero2 = reader.nextInt();
	  
	    if (numero1>numero2)
	        System.out.println(numero1 + " es mayor que " + numero2);
	    else
	        System.out.println(numero2 + " es mayor que " + numero1);

	}

}
