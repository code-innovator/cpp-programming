//Count words in a line of text
#include<iostream.h>
#include<conio.h>
#include<string.h>
void main()
{
      clrscr();
      char line[80];
      int count=1,len,i;
      cout<<"\n Enter a line of text: \n";
      cin.getline(line, 80);
      len=strlen(line);
      for(i=0;i<=len;i++)
{
      if(line[i]==' ')
      count++;
}
      cout<<"\n No. of words are ";
      cout<<count;
}
