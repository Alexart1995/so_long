# so_long
Small 2D game
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
`0` for an empty space
`1` for a wall
`C` for a collectible
`E` for map exit
`P` for the player’s starting position
`X` for enemy. (bonus part)
## Card requirements
the map must have the extension .ber
the map must be closed/surrounded by walls
map must have at least one exit, one collectible, and one starting position
the map must be rectangular
Note
In the maps folder there are invalid maps (invalid...) for visualizing error workings, maps for the mandatory part (valid...) and maps for the bonus part (valid_bonus...)
