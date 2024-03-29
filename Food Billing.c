//C Programming Assessment Test



#include <stdio.h>

// Function to calculate the total bill amount
float CalTotal(float price, int quantity) {
    return price * quantity;
}

int foodList()
{
	int food;
	
		printf("\nList of Food Items\n");
	
	printf("\n1. Pizza         Price 180 rs/pcs\n");
	printf("\n2. Burger        Price 100 rs/pcs\n");
	printf("\n3. Dosa          Price 120 rs/pcs\n");
	printf("\n4. Idli          Price 50 rs/pcs\n");
	printf("\n5. Maggie        Price 90 rs/pcs\n");
	
	printf("\nSelect item you want to Order : \n");
	scanf("%d",&food);
	
	
	switch(food)
	{
		case 1 :
		
		printf("\nYou Selected Pizza.\n");	 	
			break;
				  	 
		case 2 :
		
		printf("\nYou Selected Burger.\n");
		 	
			break;
				  	 
		case 3 :
		
		printf("\nYou Selected Dosa.\n");
			 	
			break;
				  	 
		case 4 :
		
		printf("\nYou Selected Idli.\n");
			 	
			break;
				  	 
		case 5 :
		
		printf("\nYou Selected Maggie.\n");
			 	
			break;
		
		default :
		printf("\nInvalid Input\n");	  	 	 			   		 	   					 
	}
	
}

int main()
{
	
	printf("\n************** Food Billing **************\n\n\n");
	
foodList();
	
		 // Declare variables
    char itemName[50];
    float itemPrice;
    int itemQuantity;


    // Initialize total bill amount
    float totalBill = 0.0;


    // Start the billing process
    while (1) 
	{

        // Check if the user wants to exit
        if  (strcmp(itemName, "exit") == 0) 
		{
            break;
        }

        printf("\nEnter the price of %s: \n", itemName);
        scanf("%f", &itemPrice);

        printf("\nEnter the quantity of %s: \n", itemName);
        scanf("%d", &itemQuantity);

        // Calculate the total for this item and add it to the total bill
        float itemTotal = CalTotal(itemPrice, itemQuantity);
        totalBill += itemTotal;

        // Display the item's total
        printf("\nTotal for %s: $ %.2f\n", itemName, itemTotal);
        
        
    }

    // Display the final total bill amount
    printf("\n\nTotal Bill Amount: $%.2f\n", totalBill);
    printf("\n\nThank you for shopping with us!\n\n");
	
	return 0;
	
}