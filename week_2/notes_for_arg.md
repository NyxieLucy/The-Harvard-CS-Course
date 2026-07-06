this code text here :

```
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
  printf("hello %s\n");
  return 0;
}
```

returns a weird output in the terminal
it shows me :

```

╭─‧₊˚♪ 𝄞₊˚⊹ nyxie@nixos   CS_Courses/week_2 on  main ?1 
╰─❯ gcc -o arg arguments.c 

╭─‧₊˚♪ 𝄞₊˚⊹ nyxie@nixos   CS_Courses/week_2 on  main ?2 
╰─❯ ./arg yassine
hello @/�
```

this one :

```
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
  printf("hello %s\n", argv[0]);
  return 0;
}
```

gives me this

```
╭─‧₊˚♪ 𝄞₊˚⊹ nyxie@nixos   CS_Courses/week_2 on  main ?3 
╰─❯ ./arg yassine
hello ./arg
```

and finally this :

```
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
  printf("hello %s\n", argv[1]);
  return 0;
}
```

gives me my real output:

```

╭─‧₊˚♪ 𝄞₊˚⊹ nyxie@nixos   CS_Courses/week_2 on  main ?3 
╰─❯ ./arg yassine
hello yassine
```
