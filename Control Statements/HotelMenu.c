#include <stdio.h>
#include <stdlib.h>

int main() {
    int choice, total=0, qty=1;

    while (choice != 7) {
        printf("\n");
        system("pause");    //wait until some key is pressed (Press any Key to continue...)
        mainMenu:   //label
        system("cls");      //clears the screen
        printf("\nStarbucks Menu:\n");
        printf("1. Coffee\n");
        printf("2. Tea\n");
        printf("3. Milk\n");
        printf("4. Juice\n");
        printf("5. Water\n");
        printf("6. Soda\n");
        printf("7. Exit\n");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("\nCoffee Options:\n");
                printf("1. Cappuccino - 20\n");
                printf("2. Latte - 30\n");
                printf("3. Espresso - 40\n");
                printf("4. Americano - 50\n");
                printf("5. Mocha - 60\n");
                printf("6. Goto Main Menu");
                printf("\nEnter your choice: ");
                scanf("%d", &choice);
                
                printf("\nEnter the quantity: ");
                scanf("%d", &qty);
                
                switch(choice) {
                    case 1:
                        printf("Cappuccino Added!");
                        total += (qty*20);
                        break;

                    case 2:
                        printf("Latte Added!");
                        total += (qty*30);
                        break;

                    case 3:
                        printf("Espresso Added!");
                        total += (qty*40);
                        break;

                    case 4:
                        printf("Americano Added!");
                        total += (qty*50);
                        break;

                    case 5:
                        printf("Mocha Added!");
                        total += (qty*60);
                        break;

                    case 6:
                        goto mainMenu;  //goto label

                    default:
                        printf("Default Coffee");
                }
                break;

            case 2:
                printf("\nTea Options:\n");
                printf("1. Green Tea\n");
                printf("2. Black Tea\n");
                printf("3. Herbal Tea\n");
                printf("4. Chai Tea\n");
                printf("5. Earl Grey Tea\n");
                break;

            case 3:
                printf("\nMilk Options:\n");
                printf("1. Whole Milk\n");
                printf("2. Skim Milk\n");
                printf("3. Soy Milk\n");
                printf("4. Almond Milk\n");
                printf("5. Oat Milk\n");
                break;

            case 4:
                printf("\nJuice Options:\n");
                printf("1. Orange Juice\n");
                printf("2. Apple Juice\n");
                printf("3. Cranberry Juice\n");
                printf("4. Pineapple Juice\n");
                printf("5. Grapefruit Juice\n");
                break;

            case 5:
                printf("\nWater Options:\n");
                printf("1. Still Water\n");
                printf("2. Sparkling Water\n");
                printf("3. Flavored Water\n");
                printf("4. Mineral Water\n");
                printf("5. Infused Water\n");
                break;

            case 6:
                printf("\nSoda Options:\n");
                printf("1. Cola\n");
                printf("2. Lemon-Lime Soda\n");
                printf("3. Ginger Ale\n");
                printf("4. Root Beer\n");
                printf("5. Orange Soda\n");
                break;

            case 7:
                break;

            default:
                printf("\nInvalid choice. Please enter a valid option.\n");
        }
    }

    printf("Your Total Bill is %d", total);

    return 0;
}


/*
Starbucks:

1. Coffee:
   - Cappuccino
   - Latte
   - Espresso
   - Americano
   - Mocha

2. Tea:
   - Green Tea
   - Black Tea
   - Herbal Tea
   - Chai Tea
   - Earl Grey Tea

3. Milk:
   - Whole Milk
   - Skim Milk
   - Soy Milk
   - Almond Milk
   - Oat Milk

4. Juice:
   - Orange Juice
   - Apple Juice
   - Cranberry Juice
   - Pineapple Juice
   - Grapefruit Juice

5. Water:
   - Still Water
   - Sparkling Water
   - Flavored Water
   - Mineral Water
   - Infused Water

6. Soda:
   - Cola
   - Lemon-Lime Soda
   - Ginger Ale
   - Root Beer
   - Orange Soda

7. Exit: This option allows you to exit the program.

every case will have 3 options 1. small 2. medium 3. large
*/