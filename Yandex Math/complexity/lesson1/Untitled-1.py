s = input () 
ans = ' '
anscnt = 0
for i in range (len (s)):
nowcht = 0
for j in range(len (s)):
if stil == s[i]:
nowcht += 1
if nowent > anscnt:
ans = s [i]
anscnt = nowcnt
print(ans)