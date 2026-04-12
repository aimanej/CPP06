srcs= Base.cpp identifiers.cpp main.cpp

header= Base.hpp A.hpp B.hpp C.hpp

cc= c++

Flags= -Wall -Werror -Wextra -std=c++98

Name= identifier

all:$(Name)

$(Name) : $(srcs) $(header)
	$(cc) $(Flags) $(srcs) -o $(Name)

clean:
	rm -rf $(Name)

fclean: clean

re:clean all

.Phony: re all clean fclean