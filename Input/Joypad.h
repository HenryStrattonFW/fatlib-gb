#ifndef FLGB_JOYPAD
#define FLGB_JOYPAD

void UpdateJoypad();
void MoveFromJoypad(uint8_t* pos);
BOOLEAN IsButtonDown(uint8_t button);
BOOLEAN WasButtonPressed(uint8_t button);
BOOLEAN WasButtonReleased(uint8_t button);

#endif