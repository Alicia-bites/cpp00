# project settings
NAME 			:=	account
NAME_AR			:=	account.a
C++				:=	c++
CXXFLAGS		:=	-MMD -Wall -Wextra -Werror -std=c++98
CXXFLAGSADD		:=	-g3

VALGRIND		:=	valgrind -s --leak-check=full --show-leak-kinds=all --track-origins=yes --track-fds=yes

OPATH			:=	obj

RM				:=	rm -rf

SRCS			:=	Account.cpp\
					tests.cpp\

OBJS			:=	$(addprefix $(OPATH)/, $(SRCS:.cpp=.o))
DEPS			:=	$(OBJS:.o=.d)

vpath %.hpp $(IPATH)
vpath %.cpp $(SRCS_PATH)\

vpath %.o $(OPATH)

all:	$(NAME)

$(OPATH)/%.o:	%.cpp
			$(C++) $(CXXFLAGS) $(CXXFLAGSADD) -c $< -o $@

$(NAME):	$(OBJS)
			$(C++) $(CXXFLAGS) $(CXXFLAGSADD) $(OBJS) -o $(NAME)

$(OBJS):	| $(OPATH)

$(OPATH):
			mkdir -p $(OPATH)

clean:
			$(RM) $(OPATH)

fclean:
			make clean
			$(RM) $(NAME)
  
re:
			make fclean
			make all

norme:
			$(NORMINETTE_BIN) $(SRCS)

sym:
			$(NM_BIN) -Dgu $(NAME)

comp:
			make
			$(VALGRIND) ./$(NAME)

# -include $(DEPS)

.PHONY: all clean fclean re norme sym comp comp_vgdb comp_envi archive test_ok test_ko test_man