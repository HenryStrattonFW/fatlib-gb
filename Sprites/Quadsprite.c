#include <gb/gb.h>

/*
Sprite Indices as they relate to sub-sprite order.
 ┌──────┬──────┐
 │[0]   │[2]   │
 │      │      │
 ├──────┼──────┤
 │[1]   │[3]   │
 │      │      │
 └──────┴──────┘
 */
const UBYTE SPRITE_SIZE = 8;

struct Quadsprite
{
    UBYTE spriteIds[4];
    UINT8 x;
    UINT8 y;
};

void ConfigureQuadsprite(struct Quadsprite* sprite, UINT8 spriteIndices[4])
{
    sprite->spriteIds[0] = spriteIndices[0];
    sprite->spriteIds[1] = spriteIndices[1];
    sprite->spriteIds[2] = spriteIndices[2];
    sprite->spriteIds[3] = spriteIndices[3];
}

void MoveQuadsprite(struct Quadsprite* sprite, UINT8 x, UINT8 y)
{
    sprite->x = x;
    sprite->y = y;
    move_sprite(sprite->spriteIds[0], x, y);
    move_sprite(sprite->spriteIds[1], x, y + SPRITE_SIZE);
    move_sprite(sprite->spriteIds[2], x + SPRITE_SIZE, y);
    move_sprite(sprite->spriteIds[3], x + SPRITE_SIZE, y + SPRITE_SIZE);
}