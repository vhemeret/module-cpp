# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vahemere <vahemere@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/03 04:09:30 by vahemere          #+#    #+#              #
#    Updated: 2022/10/03 04:52:03 by vahemere         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

OBJS_DIR = objs
SRCS_DIR = $(shell find srcs -type d)
INC_DIR = $(shell find inc -type d)

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

vpath %.cpp $(foreach dir, $(SRCS_DIR), $(dir))
megaphone.cpp \
