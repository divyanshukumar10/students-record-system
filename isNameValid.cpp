// isNameValid():
// It validates the user name, author name ..etc. I have permitted this function to take the space in names.
int isNameValid(const char *name)
{
int validName = 1;
int len = 0;
int index = 0;
len = strlen(name);
for(index =0; index <len ; ++index)
{
if(!(isalpha(name[index])) && (name[index] != '\n') && (name[index] != ' '))
{
validName = 0;
break;
}
}
return validName;
}