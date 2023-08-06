import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import java.util.Scanner;

class Movie {
    private String title;
    private String showtime;
    private int seatsAvailable;
    private double price;

    public Movie(String title, String showtime, int seatsAvailable, double price) {
        this.title = title;
        this.showtime = showtime;
        this.seatsAvailable = seatsAvailable;
        this.price = price;
    }

    public String getTitle() {
        return title;
    }

    public String getShowtime() {
        return showtime;
    }

    public int getSeatsAvailable() {
        return seatsAvailable;
    }

    public double getPrice() {
        return price;
    }

    public void decreaseSeats(int numberOfTickets) {
        seatsAvailable -= numberOfTickets;
    }
}

class Booking {
    private String movieTitle;
    private String showtime;
    private int numberOfTickets;
    private String seatType;

    public Booking(String movieTitle, String showtime, int numberOfTickets, String seatType) {
        this.movieTitle = movieTitle;
        this.showtime = showtime;
        this.numberOfTickets = numberOfTickets;
        this.seatType = seatType;
    }

    public String getMovieTitle() {
        return movieTitle;
    }

    public String getShowtime() {
        return showtime;
    }

    public int getNumberOfTickets() {
        return numberOfTickets;
    }

    public String getSeatType() {
        return seatType;
    }
}

class MovieTicketBookingSystem {
    private List<Movie> movies;
    private Map<String, List<Booking>> bookings;
    private Map<String, Double> seatPrices;

    public MovieTicketBookingSystem() {
        movies = new ArrayList<>();
        bookings = new HashMap<>();
        seatPrices = new HashMap<>();
    }

    public void addMovie(Movie movie) {
        movies.add(movie);
    }

    public void setSeatPrice(String seatType, double price) {
        seatPrices.put(seatType, price);
    }

    public double getSeatPrice(String seatType) {
        return seatPrices.getOrDefault(seatType, 0.0);
    }

    public void bookTicket(Booking booking) {
        String movieTitle = booking.getMovieTitle();
        List<Booking> movieBookings = bookings.getOrDefault(movieTitle, new ArrayList<>());

        // Check if seats are available
        for (Movie movie : movies) {
            if (movie.getTitle().equals(movieTitle) && movie.getShowtime().equals(booking.getShowtime())) {
                if (movie.getSeatsAvailable() >= booking.getNumberOfTickets()) {
                    double totalPrice = booking.getNumberOfTickets() * getSeatPrice(booking.getSeatType());
                    movie.decreaseSeats(booking.getNumberOfTickets());
                    movieBookings.add(booking);
                    bookings.put(movieTitle, movieBookings);
                    System.out.println("Tickets booked successfully! Total Price: " + totalPrice);
                } else {
                    System.out.println("Not enough seats available for the selected showtime.");
                }
                return;
            }
        }

        System.out.println("Invalid movie or showtime.");
    }

    public void showMovies() {
        System.out.println("Available movies:");
        for (Movie movie : movies) {
            System.out.println("Title: " + movie.getTitle() + ", Showtime: " + movie.getShowtime() + ", Seats Available: " + movie.getSeatsAvailable());
        }
    }

    public void showBookings() {
        System.out.println("Movie bookings:");
        for (Map.Entry<String, List<Booking>> entry : bookings.entrySet()) {
            String movieTitle = entry.getKey();
            List<Booking> movieBookings = entry.getValue();

            System.out.println("Movie: " + movieTitle);
            for (Booking booking : movieBookings) {
                System.out.println("Showtime: " + booking.getShowtime() + ", Number of Tickets: " + booking.getNumberOfTickets() + ", Seat Type: " + booking.getSeatType());
            }
        }
    }

    public List<String> choosePaymentMethod() {
        List<String> paymentMethods = new ArrayList<>();
        try (Scanner scanner = new Scanner(System.in)) {
            System.out.println("Choose payment method(s):");
            System.out.println("1. Cash");
            System.out.println("2. Credit Card");
            System.out.println("3. PayPal");
            System.out.println("4. Exit payment selection");

            int choice;
            do {
                System.out.print("Enter your choice: ");
                choice = scanner.nextInt();
                switch (choice) {
                    case 1:
                        paymentMethods.add("Cash");
                        break;
                    case 2:
                        paymentMethods.add("Credit Card");
                        break;
                    case 3:
                        paymentMethods.add("PayPal");
                        break;
                    case 4:
                        break;
                    default:
                        System.out.println("Invalid choice. Please try again.");
                        break;
                }
            } while (choice != 4);
        }

        return paymentMethods;
    }
}

public class Main {
    public static void main(String[] args) {
        MovieTicketBookingSystem bookingSystem = new MovieTicketBookingSystem();

        // Add some movies with prices
        bookingSystem.addMovie(new Movie("Interstellar", "10:00", 100, 1000));
        bookingSystem.addMovie(new Movie("Inception", "1:00", 80, 500));
        bookingSystem.addMovie(new Movie("Tenet", "4:00", 120, 700));

        // Set seat prices
        bookingSystem.setSeatPrice("Silver", 500);
        bookingSystem.setSeatPrice("Gold", 1000);
        bookingSystem.setSeatPrice("Diamond", 1500);

        try (Scanner scanner = new Scanner(System.in)) {
            while (true) {
                System.out.println("\n-----------------------");
                System.out.println("  WELCOME TO ATMT CINEMA");
                System.out.println("-----------------------");
                System.out.print("Enter your name: ");
                String username = scanner.nextLine().trim();
                System.out.print("Enter your age: ");
                int userage = scanner.nextInt();
                scanner.nextLine(); // Consume the newline character

                System.out.println("\nWelcome, " + username + "!");
                if (userage >= 18) {
                    System.out.println("\n--- Movie Ticket Booking System ---");
                    System.out.println("1. Show available movies");
                    System.out.println("2. Book a ticket");
                    System.out.println("3. View bookings");
                    System.out.println("4. Exit");
                    System.out.print("Enter your choice: ");

                    int choice = scanner.nextInt();
                    scanner.nextLine(); // Consume the newline character
                    switch (choice) {
                        case 1:
                            bookingSystem.showMovies();
                            break;
                        case 2:
                            System.out.print("Enter movie title: ");
                            String movieTitle = scanner.nextLine();
                            System.out.print("Enter showtime: ");
                            String showtime = scanner.nextLine();
                            System.out.print("Enter number of tickets: ");
                            int numberOfTickets = scanner.nextInt();
                            scanner.nextLine(); // Consume the newline character
                            System.out.print("Enter seat type (Silver:500/Gold:1000/Diamond:1500): ");
                            String seatType = scanner.nextLine();
                            List<String> paymentMethods = bookingSystem.choosePaymentMethod();
                            System.out.println("Selected payment method(s): " + paymentMethods);
                            Booking booking = new Booking(movieTitle, showtime, numberOfTickets, seatType);
                            bookingSystem.bookTicket(booking);

                         
                        case 3:
                            bookingSystem.showBookings();
                        case 4:
                            System.out.println("Thank you for using the Movie Ticket Booking System!");
                            System.exit(0);
                            break;
                        default:
                            System.out.println("Invalid choice. Please try again.");
                    }
                } else {
                    System.out.println("\nSorry, only users above 18 years are allowed to use the system.");
                }
            }
        }
    }
}
