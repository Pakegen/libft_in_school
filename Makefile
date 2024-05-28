CC = cc
CFLAGS = -Wall -Werror -Wextra

IDIR = includes
SRCDIR = srcs
OBJDIR = srcs
ROOT = ./

SRC = $(SRCDIR)/ft_atoi.c\
      $(SRCDIR)/ft_bzero.c\
      $(SRCDIR)/ft_calloc.c\
      $(SRCDIR)/ft_isalnum.c\
      $(SRCDIR)/ft_isalpha.c\
      $(SRCDIR)/ft_isascii.c\
      $(SRCDIR)/ft_isdigit.c\
      $(SRCDIR)/ft_isprint.c\
      $(SRCDIR)/ft_memchr.c\
      $(SRCDIR)/ft_memcmp.c\
      $(SRCDIR)/ft_memcpy.c\
      $(SRCDIR)/ft_memmove.c\
      $(SRCDIR)/ft_memset.c\
      $(SRCDIR)/ft_strchr.c\
      $(SRCDIR)/ft_strdup.c\
      $(SRCDIR)/ft_strlcpy.c\
      $(SRCDIR)/ft_strlen.c\
      $(SRCDIR)/ft_strncmp.c\
      $(SRCDIR)/ft_strrchr.c\
      $(SRCDIR)/ft_tolower.c\
      $(SRCDIR)/ft_toupper.c\
      $(SRCDIR)/ft_split.c\
      $(SRCDIR)/ft_itoa.c\
      $(SRCDIR)/ft_strtrim.c\
      $(SRCDIR)/ft_substr.c\
      $(SRCDIR)/ft_strjoin.c\
      $(SRCDIR)/ft_strmapi.c\
      $(SRCDIR)/ft_striteri.C\
      $(SRCDiR)/ft_putchar_fd.c\
      $(SRCDIR)/ft_putstr_fd.c\
      $(SRCDIR)/ft_putendl_fd.c\
      $(SRCDIR)/ft_putnbr_fd.C\

OBJ = $(patsubst %.c, %.o, $(SRC))
NAME = libft.a

all : $(NAME)

$(OBJDIR)/%.o : $(SRCDIR)/%.c
	$(CC) $(CFLAGS0) -I$(IDIR) -c $^ -o $@

$(NAME) : $(OBJ)
	ar -rcs libft.a $<

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f libft.a

re : fclean libft.a

.PHONY : all clean re fclean
