#include <stdio.h>

int main (void)

{
    FILE *fp_in, *fp_out;            // Declaration of File Pointer fp_in and fp_out
    char text;

    fp_in = fopen("in.txt","r");     // fp_in points to in.txt

    if (fp_in == NULL)               // Check done fp_in can find a file called in.txt
                                     // ie. Check if fp_in points to NULL or not
    {
        printf("Cannot open in.txt file!\n");
        return 1;
    }

    fp_out = fopen("out.txt","w");    // fp_out points to out.txt

    if (fp_out == NULL)               // Check done fp_out can find a file called out.txt
                                      // ie. Check if fp_in points to NULL or not
    {
        printf("Cannot open out.txt file!\n");
        return 1;
    }

    while ((fscanf(fp_in, "%c", &text)) != EOF) // The fscanf function will read the file fp_in is pointing to (in.txt)
                                                // and obtain a character file to store into address of "text"
    {
        fprintf(fp_out, "%c", text);            // If the obtained character is not an EOF, the fprintf function will
    }                                           // print variable "text" into the file fp_out points to (out.txt)

    fclose(fp_in);      //Closure of fp_in and fp_out file pointers
    fclose(fp_out);

    return 0;
}
