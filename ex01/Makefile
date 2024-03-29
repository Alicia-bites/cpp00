# project settings
NAME 			:=	phoneBook
NAME_AR			:=	phoneBook.a
G++				:=	g++
CXXFLAGS		:=	-MMD -Wall -Wextra -Werror -std=c++98
CXXFLAGSADD		:=	-g3

VALGRIND		:=	valgrind -s --leak-check=full --show-leak-kinds=all --track-origins=yes --track-fds=yes

IPATH			:=	includes
OPATH			:=	obj

RM				:=	rm -rf

SRCS			:=	phoneBook.cpp\
					contact.cpp\
					is_number.cpp\
					exit_if_EOF_detected.cpp\
					format_string.cpp\
					format_index.cpp\
					handle_empty_field.cpp\
					main.cpp\

OBJS			:=	$(addprefix $(OPATH)/, $(SRCS:.cpp=.o))
DEPS			:=	$(OBJS:.o=.d)

vpath %.hpp $(IPATH)
vpath %.cpp $(SRCS_PATH)\

vpath %.o $(OPATH)

all:	$(NAME)

$(OPATH)/%.o:	%.cpp
			$(G++) $(CXXFLAGS) $(CXXFLAGSADD) -I $(IPATH) -c $< -o $@

$(NAME):	$(OBJS)
			$(G++) $(CXXFLAGS) $(CXXFLAGSADD) $(OBJS) -I $(IPATH) -o $(NAME)

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