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
 
 
// Strategy 1: Only add 1
 
 
int
 
add1
 
=
 
(
3
 
-
 
N
 
%
 
3
)
 
%
 
3
;
 
 
// Strategy 2: Go to next multiple of 5
 
 
int
 
next5
 
=
 
((
N
 
/
 
5
)
 
+
 
1
)
 
*
 
5
;
 
 
int
 
jump
 
=
 
1
 
+
 
(
3
 
-
 
next5
 
%
 
3
)
 
%
 
3
;
 
 
cout
 
<<
 
min
(
add1
,
 
jump
)
 
<<
 
'\n'
;
 
}
 
return
 
0
;
}
