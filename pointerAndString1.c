//指针与字符串
main()
{
	char * name;
	int length;
	char *cptr = name;
	name = "DELATE";
	puts(name);
	while(*cptr != '\0')
	{
		printf("%c is stored at address %u\n",*cptr,cptr );
		cptr++;
	}
	length = cptr - name;
	printf("\n length of the string = %d\n",length );
	return 0;
}
