/*
** EPITECH PROJECT, 2018
** my_runner
** File description:
** Aurélien Vandaële <aurelien.vandaele@epitech.eu>
*/

#include "library.h"
#include "my.h"


static void my_put_help(void)
{
	my_putstr("                ---Cook---\n");
	my_putstr("This game is a reproduction of Cook Serve Delicious ");
	my_putstr("it's a game really famous !\n");
	my_putstr("           _....----\"\"\"----...._\n");
	my_putstr("        .-'  o    o    o    o   '-.\n");
	my_putstr("       /  o    o    o         o    \\\n");
	my_putstr("    __/__o___o_ _ o___ _ o_ o_ _ _o_\\__\n");
	my_putstr("   /                                   \\\n");
	my_putstr("   \\___________________________________/\n");
	my_putstr("     \\~`-`.__.`-~`._.~`-`~.-~.__.~`-`/\n");
	my_putstr("      \\                             /\n");
	my_putstr("       `-._______________________.-'	\n");
	my_putstr("USAGE\n\t./my_cook \n\n");
	my_putstr("OPTIONS\n\t-h\t  print the usage and quit\n");
}

int main(int ac, char **av, char **env)
{
	if (env[0] == NULL || env == NULL)
		return (my_putstr_error("Why are you doing this...\n"));
	if (ac != 1) {
		if (my_strcmp(av[1], "-h") == 1 && ac == 2) {
			my_put_help();
			return (0);
		}
		return (my_putstr_error("Retry with -h\n"));
	}
	if (my_cook() == 84)
		return (84);
	return (0);
}
