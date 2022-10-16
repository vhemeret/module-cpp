# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vahemere <vahemere@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/03 04:09:30 by vahemere          #+#    #+#              #
#    Updated: 2022/10/15 14:36:20 by vahemere         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

OBJS_DIR = objs
SRCS_DIR = $(shell find srcs -type d)

vpath %.cpp $(foreach dir, $(SRCS_DIR), $(dir))
SRCS = phonebook.cpp contact.class.cpp phonebook.class.cpp \

OBJS = $(addprefix $(OBJS_DIR)/, $(SRCS:%.cpp=%.o))
DEPS = $(OBJS:%.o=%.d)

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -g3 -fsanitize=address

all: $(NAME)

$(NAME) : $(OBJS)
	@echo "====== Creating Binary ======== \n"
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
	@echo "====== [OK] ======== \n"

$(OBJS_DIR)/%.o : %.cpp
	@echo "====== Compilation ======== \n"
	mkdir -p $(OBJS_DIR)
	$(CC) $(CFLAGS) -MMD -o $@ -c $<
	@echo "====== [OK] ======== \n\n"
	
clean :
	rm -rf $(OBJS_DIR)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY: all clean fclean re

-include $(DEPS)