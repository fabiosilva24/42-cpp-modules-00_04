GREEN := \033[0;32m
CYAN  := \033[0;36m
NC    := \033[0m

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = main.cpp\
		replace_func.cpp

OBJS = $(SRCS:.cpp=.o)
TARGET = Sed

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