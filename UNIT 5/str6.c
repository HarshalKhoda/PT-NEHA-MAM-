//Count Characters, Blank Spaces, Tabs, and Lines in a
File
#include &lt;stdio.h&gt;
int main()
{
FILE *fp;
int ch;
int characters = 0, spaces = 0;
int tabs = 0, lines = 0;
fp = fopen(&quot;data.txt&quot;, &quot;r&quot;);
if (fp == NULL)
{
printf(&quot;File not found\n&quot;);
return 1;
}
while ((ch = fgetc(fp)) != EOF)
{
characters++;
if (ch == &#39; &#39;)
spaces++;
if (ch == &#39;\t&#39;)
tabs++;
if (ch == &#39;\n&#39;)
lines++;

}
fclose(fp);
printf(&quot;Characters: %d\n&quot;, characters);
printf(&quot;Blank spaces: %d\n&quot;, spaces);
printf(&quot;Tabs: %d\n&quot;, tabs);
printf(&quot;Lines: %d\n&quot;, lines);
return 0;
}
