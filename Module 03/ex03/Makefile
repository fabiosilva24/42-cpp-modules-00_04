CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = FragTrap.cpp\
		main.cpp\
		ClapTrap.cpp\
		ScavTrap.cpp\
		DiamondTrap.cpp

OBJS = $(SRCS:.cpp=.o)
TARGET = DiamondTrap

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