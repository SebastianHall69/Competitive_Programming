import java.math.BigInteger;
import java.util.Scanner;

public class FactorvisorsJava {

    public static void main(String[] args) {
        //Declare variables
        int n, m;
        BigInteger nFac;
        Scanner cin = new Scanner(System.in);
        
        while(cin.hasNextInt()) {
            //Read in two integers
            n = cin.nextInt();
            m = cin.nextInt();

            //Get factorial of n
            nFac = fac(n);
            System.out.printf("Factorial of %d: %s\n\n\n",n,nFac);

            //Output the output
            BigInteger temp = nFac.divide(BigInteger.valueOf(m));
            temp = temp.multiply(BigInteger.valueOf(m));
            String msg = (nFac.equals(temp)) ? " divides " : " does not divide ";
            System.out.printf("%d%s%d!\n", m, msg, n);
        }
    }
    
    //Returns BigInteger factorial
    public static BigInteger fac(int n) {
        BigInteger f = BigInteger.ONE;
        for(int i = n; i > 0; --i) {
            f = f.multiply(BigInteger.valueOf(i));
        }
        return f;
    }
}