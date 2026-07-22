#pragma once

class sSharedCooldownInfo  // sizeof 0x10, align 0xFF (client)
{
public:
    CUtlString cooldownName; // offset 0x0, size 0x8, align 8
    float32 cooldownLength; // offset 0x8, size 0x4, align 4
    GameTime_t cooldownTime; // offset 0xC, size 0x4, align 255
};
