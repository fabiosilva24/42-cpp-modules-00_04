CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = main.cpp\
		Animal.cpp\
		Cat.cpp\
		Dog.cpp\
		Brain.cpp

OBJS = $(SRCS:.cpp=.o)
TARGET = Animals

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