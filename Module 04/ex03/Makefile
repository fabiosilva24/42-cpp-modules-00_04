CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = main.cpp\
		AMateria.cpp\
		Character.cpp\
		Cure.cpp\
		Ice.cpp\
		MateriaSource.cpp

OBJS = $(SRCS:.cpp=.o)
TARGET = Materias

all: $(TARGET)

$(TARGET) : $(OBJS)
	@echo "$(CYAN)Making...$(NC)"
	$(CXX) $(CXXFLAGS) -o $@ $(OBJS)

clean:
	@echo "$(GREEN)Cleaning...$(NC)"
	rm -f $(OBJS)

fclean: clean
	rm -f $(TARGET)

re: fclean all

.PHONY: all fclean clean re