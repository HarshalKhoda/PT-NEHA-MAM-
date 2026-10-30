//Write a String to greencity.txt and Store Its Reverse in
cleancity.txt

#include &lt;stdio.h&gt;
#include &lt;string.h&gt;
int main()
{
FILE *fp1, *fp2;
char str[100];
int i;
fp1 = fopen(&quot;greencity.txt&quot;, &quot;w&quot;);
printf(&quot;Enter a string: &quot;);
fgets(str, sizeof(str), stdin);
str[strcspn(str, &quot;\n&quot;)] = &#39;\0&#39;;
fputs(str, fp1);
fclose(fp1);
fp2 = fopen(&quot;cleancity.txt&quot;, &quot;w&quot;);
for (i = strlen(str) - 1; i &gt;= 0; i--)
{
fputc(str[i], fp2);
}
fclose(fp2);
printf(&quot;Original string stored in greencity.txt\n&quot;);
printf(&quot;Reversed string stored in cleancity.txt\n&quot;);
return 0;
}
