//Demonstrate the Difference Between Structure and
Union
#include &lt;stdio.h&gt;
struct Student
{

int roll;
float marks;
};
union Data
{
int roll;
float marks;
};
int main()
{
struct Student s;
union Data u;
s.roll = 1;
s.marks = 85.5;
printf(&quot;Structure:\n&quot;);
printf(&quot;Roll = %d\n&quot;, s.roll);
printf(&quot;Marks = %.1f\n&quot;, s.marks);
u.roll = 1;
printf(&quot;\nUnion:\n&quot;);
printf(&quot;Roll = %d\n&quot;, u.roll);
u.marks = 85.5;
printf(&quot;Marks = %.1f\n&quot;, u.marks);
return 0;
}
