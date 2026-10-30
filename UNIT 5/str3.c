//Compare Two Given Dates Using a Structure
#include &lt;stdio.h&gt;
struct Date
{
int date;
int month;
int year;

};
int main()
{
struct Date d1, d2;
printf(&quot;Enter first date (dd mm yyyy): &quot;);
scanf(&quot;%d %d %d&quot;, &amp;d1.date, &amp;d1.month, &amp;d1.year);
printf(&quot;Enter second date (dd mm yyyy): &quot;);
scanf(&quot;%d %d %d&quot;, &amp;d2.date, &amp;d2.month, &amp;d2.year);
if (d1.date == d2.date &amp;&amp;
d1.month == d2.month &amp;&amp;
d1.year == d2.year)
{
printf(&quot;Equal\n&quot;);
}
else
{
printf(&quot;Not equal\n&quot;);
}
return 0;
}
