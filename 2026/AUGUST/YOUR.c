#include
 <bits/stdc++.h>
using
 
namespace
 
std
;
int
 
main
(
)
 
{
 
int
 
T
;
 
cin
 
>>
 
T
;
 
while
 
(
T
--
)
 
{
 
 
int
 
N
;
 
 
cin
 
>>
 
N
;
 
 
int
 
sum
 
=
 
0
;
 
 
bool
 
hasOdd
 
=
 
false
;
 
 
for
 
(
int
 
i
 
=
 
0
;
 
i
 
<
 
N
;
 
i
++
)
 
{
 
 
 
int
 
x
;
 
 
 
cin
 
>>
 
x
;
 
 
 
sum
 
+=
 
x
;
 
 
 
if
 
(
x
 
%
 
2
 
==
 
1
)
 
 
 
 
hasOdd
 
=
 
true
;
 
 
}
 
 
if
 
(
sum
 
%
 
2
 
==
 
1
)
 
{
 
 
 
cout
 
<<
 
0
 
<<
 
'\n'
;
 
 
}
 
 
else
 
if
 
(
hasOdd
)
 
{
 
 
 
cout
 
<<
 
sum
 
-
 
1
 
<<
 
'\n'
;
 
 
}
 
 
else
 
{
 
 
 
cout
 
<<
 
sum
 
<<
 
'\n'
;
 
 
}
 
}
 
return
 
0
;
}
