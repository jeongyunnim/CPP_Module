NAME = armedHuman

CXX 		=	c++
CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98

INCS		=	./Weapon.hpp\
				./HumanA.hpp\
				./HumanB.hpp\

SRCS		=	./main.cpp\
				./Weapon.cpp\
				./HumanA.cpp\
				./HumanB.cpp\

OBJS		=	$(SRCS:%.cpp=%.o)

RM			=	rm -f

all:	$(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $(OBJS)

%o:	%.c $(INCS)
	$(CXX) $(CXXFLAGS) $(INCS) -c $^ -o $@

clean: 
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re