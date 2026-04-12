srcs= main.cpp ScalarConverter.cpp pseudos.cpp

header= ScalarConverter.hpp

Name= convert

all:$(Name)

$(Name) : $(srcs) $(header)
	g++ $(srcs) -o $(Name)

clean:
	rm -rf $(Name)

fclean: clean

re:clean all

.Phony: re all clean fclean