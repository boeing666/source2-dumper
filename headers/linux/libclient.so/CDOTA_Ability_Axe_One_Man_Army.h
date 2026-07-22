#pragma once

class CDOTA_Ability_Axe_One_Man_Army : public C_DOTABaseAbility /*0x0*/  // sizeof 0x830, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x824]; // offset 0x0
    float32 radius; // offset 0x824, size 0x4, align 4
    float32 bonus_linger_duration; // offset 0x828, size 0x4, align 4
    GameTime_t m_startDecayTime; // offset 0x82C, size 0x4, align 255
};
