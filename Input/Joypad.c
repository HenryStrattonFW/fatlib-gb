uint8_t previousJoypad;
uint8_t currentJoypad;

void UpdateJoypad()
{
    previousJoypad = currentJoypad;
    currentJoypad = joypad();
}

void MoveFromJoypad(uint8_t* pos)
{
	if (currentJoypad & J_UP) { pos[1]--; }
	if (currentJoypad & J_DOWN) { pos[1]++; }
	if (currentJoypad & J_LEFT) { pos[0]--; }
	if (currentJoypad & J_RIGHT) { pos[0]++; }
}

BOOLEAN IsButtonDown(uint8_t button)
{
    return (currentJoypad & button);
}

BOOLEAN WasButtonPressed(uint8_t button)
{
    return (currentJoypad & button) && !(previousJoypad & button);
}

BOOLEAN WasButtonReleased(uint8_t button)
{
    return !(currentJoypad & button) && (previousJoypad & button);
}