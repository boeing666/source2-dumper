#pragma once

class CDOTA_Ability_Axe_One_Man_Army : public CDOTABaseAbility /*0x0*/  // sizeof 0x590, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x580]; // offset 0x0
    float32 radius; // offset 0x580, size 0x4, align 4
    float32 bonus_linger_duration; // offset 0x584, size 0x4, align 4
    GameTime_t m_startDecayTime; // offset 0x588, size 0x4, align 255
    char _pad_058C[0x4]; // offset 0x58C
};
