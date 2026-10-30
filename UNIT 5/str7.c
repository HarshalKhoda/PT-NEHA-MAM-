//Copy One File into Another File
#include &lt;stdio.h&gt;
int main()
{
FILE *source, *target;
int ch;
source = fopen(&quot;data.txt&quot;, &quot;r&quot;);
if (source == NULL)
{
printf(&quot;Source file not found\n&quot;);
return 1;
}
target = fopen(&quot;copy.txt&quot;, &quot;w&quot;);
if (target == NULL)
{
printf(&quot;Cannot create target file\n&quot;);
fclose(source);
return 1;
}
while ((ch = fgetc(source)) != EOF)
{
fputc(ch, target);
}

fclose(source);
fclose(target);
printf(&quot;File copied successfully\n&quot;);
return 0;
}
