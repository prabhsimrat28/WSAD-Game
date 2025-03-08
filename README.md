# WSAD-Game
# WSAD-Game

## How to Play:
- Use **'W'** to move **M** up.
- Use **'S'** to move **M** down.
- Use **'A'** to move **M** left.
- Use **'D'** to move **M** right.
- Press **Spacebar** to fire a bullet (represented as 'i') upwards.
- Press **'Q'** or **Esc** to quit the game.

## How the Code Works:
1. The `gotoxy(x, y)` function moves the cursor to the specified `(x, y)` coordinates on the console.
2. The **main loop** continuously listens for user input using `getch()`.
3. Based on the key pressed:
   - **'W'**, **'A'**, **'S'**, **'D'** update the position of **M** accordingly.
   - **Spacebar** fires a bullet upwards from the player's position and erases it as it moves.
   - **'Q'** or **'Esc'** exits the game.
4. The game ensures smooth movement by erasing the previous position of **M** before updating it.

## Possible Improvements:
- Add enemy characters for shooting practice.
- Display a score for successful shots.
- Implement borders to restrict movement.
- Introduce sound effects for actions.

---

