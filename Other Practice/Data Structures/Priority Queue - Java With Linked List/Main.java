import java.util.Scanner;
import java.io.PrintStream;
import java.util.InputMismatchException;

public class Main {

    public static void main(String args []) {
        //Declare variables
        PrintStream cout = new PrintStream(System.out);
        Scanner cin = new Scanner(System.in);
        PriorityQueue q = new PriorityQueue();
        int choice = 0;
        
        
        //Loop running driver
        do {
            //Get user input, no error checking. Just don't mess up
            do {
                cout.printf("1.) Insert\n2.) Remove Max\n3.) Decrease\n4.) Increase\n5.) Display\n6.) Quit\nChoice: ");
                choice = cin.nextInt();
            } while(choice < 1 || choice > 6);
            
            
            //Evaluate input
            switch(choice) {
                case 1: {
                    cout.printf("Data: ");
                    int data = cin.nextInt();
                    cout.printf("Priority: ");
                    int priority = cin.nextInt();
                    q.insert(data, priority);
                    break;
                }
                case 2:  {
                    q.remove_maximum();
                    cout.printf("Front Popped\n");
                    break;
                }
                case 3: {
                    cout.printf("Data: ");
                    int data = cin.nextInt();
                    cout.printf("Priority Delta: ");
                    int priority = cin.nextInt();
                    q.decrease(data, priority);
                    break;
                }
                case 4: {
                    cout.printf("Data: ");
                    int data = cin.nextInt();
                    cout.printf("Priority Delta: ");
                    int priority = cin.nextInt();
                    q.increase(data, priority);
                    break;
                }
                case 5: {
                    q.display();
                    break;
                }
                default: break;
            }
            
            //Break line
            cout.printf("\n\n");
            
        } while(choice != 6);
    }
}
