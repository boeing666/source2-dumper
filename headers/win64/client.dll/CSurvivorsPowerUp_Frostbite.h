#pragma once

class CSurvivorsPowerUp_Frostbite : public CSurvivorsPowerUp_InstantAttack /*0x0*/  // sizeof 0x700, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x6F8]; // offset 0x0
    float32 m_flScepterExplodeRadius; // offset 0x6F8, size 0x4, align 4
    char _pad_06FC[0x4]; // offset 0x6FC
};
