//Store Numbers 1 to 10 in DATA.txt and Separate Odd and
Even Numbers

#include &lt;stdio.h&gt;
int main()
{
FILE *fp, *odd, *even;
int i;
fp = fopen(&quot;DATA.txt&quot;, &quot;w&quot;);
for (i = 1; i &lt;= 10; i++)
{
fprintf(fp, &quot;%d &quot;, i);
}
fclose(fp);
fp = fopen(&quot;DATA.txt&quot;, &quot;r&quot;);
odd = fopen(&quot;ODD.txt&quot;, &quot;w&quot;);
even = fopen(&quot;EVEN.txt&quot;, &quot;w&quot;);
while (fscanf(fp, &quot;%d&quot;, &amp;i) == 1)
{
if (i % 2 == 0)
{
fprintf(even, &quot;%d &quot;, i);
}
else
{
fprintf(odd, &quot;%d &quot;, i);
}
}
fclose(fp);
fclose(odd);
fclose(even);
printf(&quot;Numbers separated successfully\n&quot;);
return 0;
}
