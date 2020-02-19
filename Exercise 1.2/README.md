## Exercise
### Experiment to find out what happens when prints's argument string contains \c, where c is some character not listed above.

------


## Run Exercise

#### the compiler will output a warning statement.

``` 
$ gcc main.c -o main
main.c: In function ‘main’:
main.c:5:12: warning: unknown escape sequence: '\c'
     printf("Hello, World \c \n");
```