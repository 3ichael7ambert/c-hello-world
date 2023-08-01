int main() 
{
	
    char s[100];
    scanf("%[^\n]%*c", &s);
  	
    //s="hello world";
    printf("Hello, World!\x0A"); //  \x0A  creates a line break
    printf(&s);
    return 0;
}