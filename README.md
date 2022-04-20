# so_long
Small 2D game <br>
<img src="https://github.com/Alexart1995/so_long/blob/master/so_long.gif" width="400" height="250">
## Make commands
`make` to compile mandatory part.
`make bonus` to compile with bonuses(enemies and animation).
`make clean` to clean all object files of libft.
`make fclean` to remove executable files.
`make re` to recompile this project.
## Usage
To launch the game without enemies and animations you need to compile the project, then run the executable file and specify the map.
```
make
./so_long maps/valid1.ber
```
To launch the game with enemies and animations you need to compile the project, then run the executable file and specify the map.
```
make bonus
./so_long maps/valid_bonus.ber
```
## Characters of map
`0` for an empty space <br>
`1` for a wall <br>
`C` for a collectible <br>
`E` for map exit <br>
`P` for the player’s starting position <br>
`X` for enemy. (bonus part) <br>
## Card requirements
the map must have the extension .ber <br>
the map must be closed/surrounded by walls <br>
map must have at least one exit, one collectible, and one starting position <br>
the map must be rectangular <br>
## Note
In the maps folder there are invalid maps (invalid...) for visualizing error workings, maps for the mandatory part (valid...) and maps for the bonus part (valid_bonus...)
