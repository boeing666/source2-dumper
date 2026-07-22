#pragma once

class CCSGameModeRules_Deathmatch : public CCSGameModeRules /*0x0*/  // sizeof 0x40, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x30]; // offset 0x0
    GameTime_t m_flDMBonusStartTime; // offset 0x30, size 0x4, align 255
    float32 m_flDMBonusTimeLength; // offset 0x34, size 0x4, align 4
    CUtlString m_sDMBonusWeapon; // offset 0x38, size 0x8, align 8
};
