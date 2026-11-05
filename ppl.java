import java.util.*;
// Abstract class - Vehicle ka blueprint
abstract class Vehicle { 
    protected String id;
    protected String vehiclenumber;
    protected String brand;
    protected String model;
    protected double pricePerDay;
    protected boolean isAvailable;
    
    public Vehicle(String id,String vehiclenumber,String brand, String model, double pricePerDay) {
        this.id= id; 
        this.vehiclenumber = vehiclenumber;       
        this.brand = brand;
        this.model = model;
        this.pricePerDay = pricePerDay;
        this.isAvailable = true;
    }
     // Abstract methods - har vehicle type ko implement karna hoga
    public abstract void displayDetails();
    public abstract double calculateRent(int days);
    public abstract String getVehicleType();
    
    // Concrete methods - common for all vehicles
    public void bookVehicle() {
        if (isAvailable) {
            isAvailable = false;
            System.out.println( brand + " " + model + " successfully booked!");
        } else {
            System.out.println("Sorry! Vehicle already booked.");
        }
    }
    
    public void returnVehicle() {
        isAvailable = true;
        System.out.println( brand + " " + model + " returned successfully!");
    }
    
    public String getid() {
        return id;
    }
    
    public boolean isAvailable() {
        return isAvailable;
    }
}

// Car class
class Car extends Vehicle {
    private int seatingCapacity;
    private boolean hasAC;
    
    public Car(String id,String vehiclenumber,String brand, String model, double pricePerDay, 
               int seatingCapacity, boolean hasAC) {
        super( id,vehiclenumber, brand, model, pricePerDay);
        this.seatingCapacity = seatingCapacity;
        this.hasAC = hasAC;
    }
    
    @Override
    public void displayDetails() {
        System.out.println("\n=== CAR DETAILS ===");
        System.out.println("Vehicle ID: " + id);
        System.out.println("Vehicle number: " + vehiclenumber);
        System.out.println("Brand: " + brand);
        System.out.println("Model: " + model);
        System.out.println("Seating: " + seatingCapacity + " persons");
        System.out.println("AC: " + (hasAC ? "Yes" : "No"));
        System.out.println("Price: " + pricePerDay + "/day");
        System.out.println("Status: " + (isAvailable ? "Available " : "Booked "));
    }
    
    @Override
    public double calculateRent(int days) {
        double total = pricePerDay * days;
        if (hasAC) {
            total += 200 * days; // AC charges
        }
        return total;
    }
    
    @Override
    public String getVehicleType() {
        return "Car";
    }
}

// Bike class
class Bike extends Vehicle {
    private int engineCC;
    private boolean isElectric;
    
    public Bike(String id,String vehiclenumber,String brand, String model, double pricePerDay, 
                int engineCC, boolean isElectric) {
        super(id,vehiclenumber, brand, model, pricePerDay);
        this.engineCC = engineCC;
        this.isElectric = isElectric;
    }
    
    @Override
    public void displayDetails() {
        System.out.println("\n=== BIKE DETAILS ===");
         System.out.println("vehicle id: " + id);
        System.out.println("Vehicle number: " + vehiclenumber);
        System.out.println("Brand: " + brand);
        System.out.println("Model: " + model);
        System.out.println("Engine: " + (isElectric ? "Electric" : engineCC + "CC"));
        System.out.println("Price: " + pricePerDay + "/day");
        System.out.println("Status: " + (isAvailable ? "Available " : "Booked "));
    }
    
    @Override
    public double calculateRent(int days) {
        double total = pricePerDay * days;
        if (isElectric) {
            total *= 0.9; // 10% discount for electric bikes
        }
        return total;
    }
    
    @Override
    public String getVehicleType() {
        return "Bike";
    }
}

// Truck class
class Truck extends Vehicle {
    private double loadCapacity; // in tons
    
    public Truck(String id,String vehiclenumber,String brand, String model, double pricePerDay, 
                 double loadCapacity) {
        super(id,vehiclenumber, brand, model, pricePerDay);
        this.loadCapacity = loadCapacity;
    }
    
    @Override
    public void displayDetails() {
        System.out.println("\n=== TRUCK DETAILS ===");
         System.out.println("Vehicle id: " + id);
        System.out.println("Vehicle number: " + vehiclenumber);
        System.out.println("Brand: " + brand);
        System.out.println("Model: " + model);
        System.out.println("Load Capacity: " + loadCapacity + " tons");
        System.out.println("Price: " + pricePerDay + "/day");
        System.out.println("Status: " + (isAvailable ? "Available ": "Booked "));
    }
    
    @Override
    public double calculateRent(int days) {
        return pricePerDay * days + (loadCapacity * 100 * days); // extra charge per ton
    }
    
    @Override
    public String getVehicleType() {
        return "Truck";
    }
}
// Vehicle Management System
class VehicleManagementSystem {
    private List<Vehicle> vehicles;
    private Scanner scanner;
    
    public VehicleManagementSystem() {
        vehicles = new ArrayList<>();
        scanner = new Scanner(System.in);
        initializeVehicles();
    }
    
    private void initializeVehicles() {
        // Adding sample vehicles
        vehicles.add(new Car("C01","TS 10EF 1234", "Honda", "City", 1500, 5, true));
        vehicles.add(new Car("C02","TS 11EF 5235", "Maruti", "Swift", 1200, 5, true));
        vehicles.add(new Car("C03","TS 10EF 6237", "Hyundai", "Creta", 2000, 7, true));
        vehicles.add(new Bike("B01","TS 15JH 1276", "Royal Enfield", "Classic 350", 500, 350, false));
        vehicles.add(new Bike("B02","TS 15JH 0001", "Honda", "Activa", 300, 110, false));
        vehicles.add(new Bike("B03","TS 15JH 1987", "Ola", "Electric", 400, 0, true));
        vehicles.add(new Truck("T01","TS 15JH 7865", "Tata", "LPT 1613", 3000, 5.0));
        vehicles.add(new Truck("T02","TS 20TY 0987"," Leyland", "Ecomet", 3500, 7.5));
    }
    public void displayMenu() {
        System.out.println("\n╔════════════════════════════════════════╗");
        System.out.println("║       VEHICLE MANAGEMENT SYSTEM        ║");
        System.out.println("╚════════════════════════════════════════╝");
        System.out.println("1. View All Vehicles");
        System.out.println("2. View Available Vehicles");
        System.out.println("3. Search Vehicle by ID");
        System.out.println("4. Book Vehicle");
        System.out.println("5. Return Vehicle");
        System.out.println("6. Calculate Rent");
        System.out.println("7. Exit");
        System.out.print("\nEnter your choice: ");
    }
    public void viewAllVehicles() {
        System.out.println("\n========== ALL VEHICLES ==========");
        for (Vehicle v : vehicles) {
            v.displayDetails();
        }
    }
    public void viewAvailableVehicles() {
        System.out.println("\n========== AVAILABLE VEHICLES ==========");
        boolean found = false;
        for (Vehicle v : vehicles) {
            if (v.isAvailable()) {
                v.displayDetails();
                found = true;
            }
        }
        if (!found) {
            System.out.println("No vehicles available at the moment.");
        }
    }
    public void searchVehicle() {
        System.out.print("\nEnter Vehicle ID: ");
        String id = scanner.nextLine();
            for (Vehicle v : vehicles) {
            if (v.getid().equalsIgnoreCase(id)) {
                v.displayDetails();
                return;
            }
        }
        System.out.println("Vehicle not found!");
    }
    public void bookVehicle() {
        System.out.print("\nEnter Vehicle ID to book: ");
        String id = scanner.nextLine();
            for (Vehicle v : vehicles) {
            if (v.getid().equalsIgnoreCase(id)) {
                v.bookVehicle();
                return;
            }
        }
        System.out.println("Vehicle not found!");
    }
    public void returnVehicle() {
        System.out.print("\nEnter Vehicle ID to return: ");
        String id = scanner.nextLine();
        
        for (Vehicle v : vehicles) {
            if (v.getid().equalsIgnoreCase(id)) {
                v.returnVehicle();
                return;
            }
        }
        System.out.println("Vehicle not found!");
    }
    public void calculateRent() {
        System.out.print("\nEnter Vehicle ID: ");
        String id = scanner.nextLine();
        
        for (Vehicle v : vehicles) {
            if (v.getid().equalsIgnoreCase(id)) {
                System.out.print("Enter number of days: ");
                int days = scanner.nextInt();
                scanner.nextLine(); // consume newline
                
                double rent = v.calculateRent(days);
                System.out.println("\n--- RENT CALCULATION ---");
                System.out.println("Vehicle: " + v.getVehicleType());
                System.out.println("Days: " + days);
                System.out.println("Total Rent: " + rent);
                return;
            }
        }
        System.out.println("Vehicle not found!");
    }
    public void run() {
        while (true) {
            displayMenu();
            int choice = scanner.nextInt();
            scanner.nextLine(); // consume newline
            
            switch (choice) {
                case 1:
                    viewAllVehicles();
                    break;
                case 2:
                    viewAvailableVehicles();
                    break;
                case 3:
                    searchVehicle();
                    break;
                case 4:
                    bookVehicle();
                    break;
                case 5:
                    returnVehicle();
                    break;
                case 6:
                    calculateRent();
                    break;
                case 7:
                    System.out.println("\nThank you for using Vehicle Management System!");
                    System.exit(0);
                default:
                    System.out.println("Invalid choice! Please try again.");
            }
        }
    }
}
// Main class
public class ppl {
    public static void main(String[] args) {
        VehicleManagementSystem vms = new VehicleManagementSystem();
        vms.run();
    }
}