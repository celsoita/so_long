# so_long

 | info |
 | -----|
 |`so_long` its a simple game made in `C`,the rule its simple, catch all the `collectible` and reach the `exit` avoid the `enemy` |

## Usage
| command | info |
| ------- | ---- |
| `make re` | compile the normal version without animation and enemyes |
| `make bonus`| compile the full game |
|`make fclean`| clean your file |

### Build your own map
0 for an empty space(we can call it floor)<br>
1 for a wall<br>
C for a collectible<br>
E for a map exit<br>
P for the player’s starting position.<br>
f for the enemy<br>
For build your map follow this example:
|1111111111111|
|-------------|
|10010000000C1|
|1000011111001|
|1P0011E000001|
|1111111111111|
<br>

### Not all map are allowed
You can't put  `E < 0` or `E > 1`
and the contour of the map must be fill with 1
But dont worry i have done this controll for you, when u try to submit a not allowed map he must be reject
