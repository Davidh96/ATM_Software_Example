//This program can be used for ATM software. It will verify a users PIN and allow them to change it aswell as displaying the amount of times a PIN has been entered correctly and incorrectly.
//David Hunt
//16/11/2014
#include <stdio.h>

main()
{
    int menuitem=0;
    int pin=1234;
    int enteredpin;
    int changepin;
    int verchangepin;
    int s_ent=0;
    int f_ent=0;
    int loop=1;

    //Will ensure that the user will always return to the menu
    while(loop=1)
    {
        printf("\nPlease enter the number corresponding to the menu item you wish to choose\n");

        //The menu
        printf("1 Verify PIN \n2 Change PIN \n3 Display times PIN entered correctly and incorrectly \n4 Exit \n");
        scanf("%d",&menuitem);

            //Menu Items
            switch(menuitem)
            {
                case 1:
                {
                    printf("\nPlease enter your PIN\n");
                    scanf("%d",&enteredpin);

                    //Prevents program going haywire when charachter is entered
                    flushall();

                    //Verifies if the  PIN entered is correct
                    if(pin==enteredpin)
                    {
                        printf("\nCorrect PIN entered\n");

                        //Stores that a PIN was entered in correctly
                        s_ent++;
                    }//end if

                    else
                    {
                        printf("\nIncorrect PIN entered\n");
                        //Stores that a PIN was entered incorrectly
                        f_ent++;

                        //Prevents program going haywire when charachter is entered
                        flushall();
                    }//end else

                    break;
                }//end case 1

                case 2:
                {
                    printf("\nPlease enter the PIN you wish to change to\n");
                    scanf("%d",&changepin);

                    //Prevents program going haywire when charachter is entered
                    flushall();

                    //Checks if PIN is 4 digits long
                    if(changepin>9999||changepin<1000)
                        {
                            printf("Your PIN must be four digits long and can only contains numbers!\n");
                            //Stores that a PIN was entered incorrectly
                            f_ent++;
                        }//end if

                    else
                        {
                            printf("\nPlease enter the PIN you wish to change to again\n");
                            scanf("%d",&verchangepin);

                            //Prevents program going haywire when charachter is entered
                            flushall();

                            //Will verify if the two PINS entered are the same
                            if(changepin==verchangepin)
                            {
                                //If both PINS entered are the same then the PIN is changed
                                pin=changepin;
                                printf("\nYour PIN has been changed successfully\n");

                                //Stores that a PIN was entered in correctly
                                s_ent++;
                            }//end if

                            //If the two PINS entered are not the same
                            else
                            {
                                printf("\nError: The two PINs entered do not match\n");

                                //Stores that a PIN was entered incorrectly
                                f_ent++;
                            }//end inner else

                        }//end outer else

                    break;

                }//end case 2

                case 3:
                {
                    //Will diplay how many times a PIN has been entered correctly and incorrectly
                    printf("\nThe number of times your PIN has been entered correctly: %d \nThe number of times your PIN has been entered incorrectly: %d\n",s_ent,f_ent);

                    break;

                }//end case 3

                case 4:
                {
                    //Will exit the program
                    return(0);

                }//end case 4

                default:
                {
                    //For any number/charachter entered that is not from 1-4
                    printf("\nError: Invalid Input!\n");

                    //Prevent program from going haywire when charachter is entered
                    flushall();

                    break;

                }//end default

            }//end switch

    }//end while

    //Prevents program going haywire when charachter is entered
    flushall();

}//end main()
