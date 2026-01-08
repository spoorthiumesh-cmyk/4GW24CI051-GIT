import java.util.*;

public class GatePassQueue {

    public static void main(String[] args) {
        Queue<String> queue = new LinkedList<>();
        List<String> processed = new ArrayList<>();
        Scanner sc = new Scanner(System.in);

        while (true) {
            System.out.println("\n1. Add Student");
            System.out.println("2. Process Next");
            System.out.println("3. Show Processed Students");
            System.out.println("4. Exit");
            System.out.print("Choose: ");

            int choice = sc.nextInt();
            sc.nextLine();

            switch (choice) {
                case 1:
                    System.out.print("Enter student name: ");
                    String name = sc.nextLine();
                    queue.add(name);
                    break;

                case 2:
                    if (!queue.isEmpty()) {
                        String student = queue.poll();
                        processed.add(student);
                        System.out.println(student + " gatepass approved");
                    } else {
                        System.out.println("Queue is empty");
                    }
                    break;

                case 3:
                    System.out.println("Processed Students:");
                    for (String s : processed) {
                        System.out.println(s);
                    }
                    break;

                case 4:
                    System.out.println("Exiting...");
                    return;
            }
        }
    }
}
