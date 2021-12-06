#ifndef FLGB_QUADSPRITE
#define FLGB_QUADSPRITE

struct Quadsprite;
void ConfigureQuadsprite(struct Quadsprite* sprite, UINT8 spriteIndices[4]);
void MoveQuadsprite(struct Quadsprite* sprite, UINT8 x, UINT8 y);

#endif