#pragma once

class CDOTA_Ability_Axe_One_Man_Army : public C_DOTABaseAbility /*0x0*/  // sizeof 0x6B8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x6A8]; // offset 0x0
    float32 radius; // offset 0x6A8, size 0x4, align 4
    float32 bonus_linger_duration; // offset 0x6AC, size 0x4, align 4
    GameTime_t m_startDecayTime; // offset 0x6B0, size 0x4, align 255
    char _pad_06B4[0x4]; // offset 0x6B4
};
