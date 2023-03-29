NAME = so_long

LIBFT = libft/libft.a

MINILIBX = minilibx-linux/libmlx.a

SRC =	source/game.c \
	source/deal_imgs.c \
	source/deal_mat.c \
	source/deal_key.c \
	source/check_mat.c \
	source/floodfill.c \
	source/sl_utils.c
	
BNS =	source_bonus/main_bonus.c \
	source_bonus/game_bonus.c \
	source_bonus/end_screen_bonus.c \
	source_bonus/deal_imgs_bonus.c \
	source_bonus/deal_mat_bonus.c \
	source_bonus/deal_key_bonus.c \
	source_bonus/deal_menu_bonus.c \
	source_bonus/deal_enemy_bonus.c \
	source_bonus/display_menu_bonus.c \
	source_bonus/check_mat_bonus.c \
	source_bonus/floodfill_bonus.c \
	source_bonus/sl_utils_bonus.c
	
FLAGS = -no-pie -Wall -Werror -Wextra -g

LINKS = -lm -lX11 -lXext

all: $(NAME)

$(NAME): libcomp comp

maps:
		@cd maps && ls *.ber -a > list_maps.txt

libcomp:
		@make -C libft

comp:
	gcc $(FLAGS) $(SRC) $(MINILIBX) $(LIBFT) $(LINKS) -o $(NAME)
	
bonus: libcomp maps
	gcc $(FLAGS) $(BNS) $(MINILIBX) $(LIBFT) $(LINKS) -o $(NAME)
            
libclean:
		@make clean -C libft
		
clean:		libclean

libfclean:
		@make fclean -C libft

fclean:   	clean libfclean
		rm -rf $(NAME)
		rm -rf maps/list_maps.txt
		
re: clean all

.PHONY: all re clean fclean bonus maps

.SILENT:
