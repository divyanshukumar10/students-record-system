// headMessage():
// It prints the message on the top of the console and prints the message as per operation.
void headMessage(const char *message)
{
system("cls");
printf("\t\t\t###########################################################################");
printf("\n\t\t\t############ ############");
printf("\n\t\t\t############ Student Record Management System Project in C ############");
printf("\n\t\t\t############ ############");
printf("\n\t\t\t###########################################################################");
printf("\n\t\t\t---------------------------------------------------------------------------\n");
printMessageCenter(message);
printf("\n\t\t\t----------------------------------------------------------------------------");
}