srcs= main.cpp ScalarConverter.cpp pseudos.cpp

header= ScalarConverter.hpp

Name= convert 

cc= c++

Flags= -Wall -Werror -Wextra -std=c++98

all:$(Name)

$(Name) : $(srcs) $(header)
	$(cc) $(Flags) $(srcs) -o $(Name)

clean:
	rm -rf $(Name)

fclean: clean

re:clean all

.Phony: re all clean fclean