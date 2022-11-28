# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vahemere <vahemere@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/03 04:09:30 by vahemere          #+#    #+#              #
#    Updated: 2022/11/28 14:44:34 by vahemere         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = BureauCrat

OBJS_DIR = objs
SRCS_DIR = $(shell find srcs -type d)

vpath %.cpp $(foreach dir, $(SRCS_DIR), $(dir))
SRCS = main.cpp Bureaucrat.cpp Form.cpp \

OBJS = $(addprefix $(OBJS_DIR)/, $(SRCS:%.cpp=%.o))
DEPS = $(OBJS:%.o=%.d)

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

#fonts color
BLACK =      \033[30m
RED =        \033[31m
GREEN =      \033[32m
YELLOW =     \033[33m
BLUE =       \033[34m
PURPLE =     \033[35m
BGREEN =   	 \033[6m
WHITE =      \033[7m
END =        \033[0m

all: $(NAME)

$(NAME) :  header $(OBJS) progress
	@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
	@echo "$(PURPLE) {EXECUTABLE CREATED SUCCESSFULL}$(END)"

$(OBJS_DIR)/%.o : %.cpp
	@mkdir -p $(OBJS_DIR)
	@$(CC) $(CFLAGS) -MMD -o $@ -c $<
	
clean :
	rm -rf $(OBJS_DIR)

fclean : clean
	rm -rf $(NAME)

re : fclean all

header : 
	@clear
	@echo "$(RED) ________  ________  ________      $(END)"
	@echo "$(RED)|\   ____\|\   __  \|\   __  \     $(END)"
	@echo "$(YELLOW)\ \  \___|\ \  \|\  \ \  \|\  \ $(END)"
	@echo "$(GREEN) \ \  \    \ \   ____\ \   ____\ $(END)"
	@echo "$(BLUE)  \ \  \____\ \  \___|\ \  \___|  $(END)"
	@echo "$(PURPLE)   \ \_______\ \__\    \ \__\   $(END)"
	@echo "$(PURPLE)    \|_______|\|__|     \|__|   $(END)\n"

progress :
	@echo "$(RED){COMPILING..}$(END)"
	@echo "[$(GREEN)██$(END)▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒]"
	@sleep 0.2
	@echo "[$(GREEN)████$(END)▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒]"
	@sleep 0.2
	@echo "[$(GREEN)█████$(END)▒▒▒▒▒▒▒▒▒▒▒▒▒▒]"
	@sleep 0.2
	@echo "[$(GREEN)███████$(END)▒▒▒▒▒▒▒▒▒▒▒▒]"
	@sleep 0.2
	@echo "[$(GREEN)█████████$(END)▒▒▒▒▒▒▒▒▒▒]"
	@sleep 0.2
	@echo "[$(GREEN)███████████$(END)▒▒▒▒▒▒▒▒]"
	@sleep 0.2
	@echo "[$(GREEN)█████████████$(END)▒▒▒▒▒▒]"
	@sleep 0.2
	@echo "[$(GREEN)███████████████$(END)▒▒▒▒]"
	@sleep 0.2
	@echo "[$(GREEN)█████████████████$(END)▒▒]"
	@sleep 0.2
	@echo "[$(GREEN)███████████████████$(END)]"
	@sleep 0.2
	@echo "$(GREEN)SUCCESSFULL$(END)\n"
	
.PHONY: all clean fclean re header progress

-include $(DEPS)