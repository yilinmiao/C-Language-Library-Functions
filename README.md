# C-Language-Library-Functions
My implementation of some of the Standard C Library functions including some additional ones.

* [What's in it?](#whats-in-it)
* [How does it work?](#how-does-it-work)

### What's in it?

1.  **Libc Functions:** Some of the standard C functions
2.  **Additional functions:** Functions are useful
3.  **Bonus Functions:** Functions for linked list manipulation

Libc functions | Additional functions | Bonus Functions 
:----------- | :-----------: | :-----------: 
memset		| ft_memalloc	| ft_lstnew		
bzero		| ft_memdel		| ft_lstdelone	
memcpy		| ft_strnew		| ft_lstdel		
memccpy		| ft_strdel		| ft_lstadd		  
memmove		| ft_strclr		| ft_lstiter	   
memchr		| ft_striter	| ft_lstmap		
memcmp		| ft_striteri	|				
strlen		| ft_strmap		|				
strdup		| ft_strmapi	|				
strcpy		| ft_strequ		|				
strncpy		| ft_strnequ	|			
strcat		| ft_strsub		| 
strlcat		| ft_strjoin	| 
strchr		| ft_strtrim	| 
strrchr		| ft_strsplit	| 
strstr		| ft_itoa		|
strnstr		| ft_putchar	|
strcmp		| ft_putstr		|
strncmp		| ft_putendl	|
atoi		| ft_putnbr		|
isalpha		| ft_putchar_fd	|
isdigit		| ft_putstr_fd	|
isalnum		| ft_putendl_fd	|
isascii		| ft_putnbr_fd	|
isprint		|
toupper		|
tolower		|

### How does it work?

The goal is to create a library called libft.a from the source files.

To create that library, after downloading/cloning this project, **cd** into the project, copy all the files from the sub folders to the root directory and finally, call make:

	git clone https://github.com/R4meau/libft
	cd libft
	make copy
	make

You should see a *libft.a* file and some object files (.o).


Now to clean up (removing the .o files and the .c files from the root), call `make clean`

**WARNING:** `make clean` will delete all your files from your root directory. Do not run it if you're using the `Makefile` file.
