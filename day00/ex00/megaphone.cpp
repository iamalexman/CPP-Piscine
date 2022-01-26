#include <iostream>

int	main(int argc, char **argv) {
	int		i;
	int		j;

	i = 1;
	j = -1;
	if (argc == 2) {
		while (argv[i][++j])
			std::cout << (char)toupper(argv[i][j]);
		std::cout << std::endl;
	}
	else if (argc > 2) {
		while (argv[i]) {
			j = -1;
			while (argv[i][++j])
				std::cout << (char)toupper(argv[i][j]);
			i++;
		}
		(std::cout << std::endl);
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	return (0);
}
