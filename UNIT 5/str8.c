//Append Content to a Given File
#include &lt;stdio.h&gt;
int main()
{
FILE *fp;
char text[100];
fp = fopen(&quot;data.txt&quot;, &quot;a&quot;);
if (fp == NULL)
{
printf(&quot;Cannot open file\n&quot;);
return 1;
}
printf(&quot;Enter text to append: &quot;);
fgets(text, sizeof(text), stdin);
fputs(text, fp);
fclose(fp);
printf(&quot;Content appended successfully\n&quot;);
return 0;
}
