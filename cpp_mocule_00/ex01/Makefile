NAME		=	phonebook

CXX 		=	c++
CXXFLAGS	=	-Wall -Wextra -Werror

INCS		=	./Contact.hpp\
				./PhoneBook.hpp\

SRCS		=	./Contact.cpp\
				./PhoneBook.cpp\

OBJS		=	$(SRCS:%c=%.o)

RM			=	rm -f

all:	$(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $(OBJS)

%o:	%.c
	$(CXX) $(CXXFLAGS) $(INCS) -c $^ -o $@

clean: 
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re