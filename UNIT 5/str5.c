//Write Content to a File, Read It, and Display It
#include &lt;stdio.h&gt;
int main()
{
FILE *fp;
char text[100];
int ch;
fp = fopen(&quot;data.txt&quot;, &quot;w&quot;);
printf(&quot;Enter some text: &quot;);
fgets(text, sizeof(text), stdin);
fputs(text, fp);
fclose(fp);
fp = fopen(&quot;data.txt&quot;, &quot;r&quot;);
printf(&quot;\nFile Content:\n&quot;);
while ((ch = fgetc(fp)) != EOF)
{

putchar(ch);
}
fclose(fp);
return 0;
}
