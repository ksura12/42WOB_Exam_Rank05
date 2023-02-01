# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ksura <ksura@student.42wolfsburg.de>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/01 11:28:31 by ksura             #+#    #+#              #
#    Updated: 2023/02/01 16:53:12 by ksura            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

EXECUTABLE		:= exam

CC			:= c++

SRCS 		:= main.cpp Warlock.cpp ASpell.cpp ATarget.cpp Fwoosh.cpp Dummy.cpp

OBJS		:= $(SRCS:.cpp=.o)

CFLAGS		:= -Wall -Werror -Wextra -std=c++98

all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJS)
		$(CC) $(CFLAGS) $(OBJS) -o $(EXECUTABLE)

.cpp.o:
		$(CC) -c $(CFLAGS) $< -o $@

clean:
	rm -fr $(OBJS)

fclean: clean
	rm -rf $(EXECUTABLE)

re: fclean all