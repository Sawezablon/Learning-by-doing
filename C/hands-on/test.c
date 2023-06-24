#include <stdio.h>
#include <stdlib.h> // For system() function

int main() {
    int option = 0;
    int sub_option = 0;
    
    while (1) {
        // Clear the screen
        system("clear"); // For Linux and macOS, use "cls" for Windows
        
        // Print the main menu
        printf("Welcome to my USSD application\n");
        printf("1. Option 1\n");
        printf("2. Option 2\n");
        printf("3. Exit\n");
        
        // Read the user's option
        printf("Enter your option: ");
        scanf("%d", &option);
        
        switch (option) {
            case 1:
                // Clear the screen
                system("clear"); // For Linux and macOS, use "cls" for Windows
                
                // Print sub-menu for Option 1
                printf("You selected Option 1\n");
                printf("1. Sub-option 1\n");
                printf("2. Sub-option 2\n");
                printf("3. Back to main menu\n");
                
                // Read the user's sub-option
                printf("Enter your sub-option: ");
                scanf("%d", &sub_option);
                
                switch (sub_option) {
                    case 1:
                        printf("You selected Sub-option 1\n");
                        break;
                    case 2:
                        printf("You selected Sub-option 2\n");
                        break;
                    case 3:
                        break;
                    default:
                        printf("Invalid sub-option\n");
                        break;
                }
                
                break;
            case 2:
                // Clear the screen
                system("clear"); // For Linux and macOS, use "cls" for Windows
                
                printf("You selected Option 2\n");
                break;
            case 3:
                printf("Goodbye!\n");
                return 0;
            default:
                printf("Invalid option\n");
                break;
        }
    }
    
    return 0;
}
