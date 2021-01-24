// printMessageCenter():
// This function prints the message in the middle of the head massage. I have passed the message in this function as per the operation.
void printMessageCenter(const char* message)
{
int len =0;
int pos = 0;
//calculate how many space need to print
len = (78 - strlen(message))/2;
printf("\t\t\t");
for(pos =0 ; pos < len ; pos++)
{
//print space
printf(" ");
}
//print message
printf("%s",message);
}