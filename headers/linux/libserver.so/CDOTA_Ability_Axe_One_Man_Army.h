#pragma once

class CDOTA_Ability_Axe_One_Man_Army : public CDOTABaseAbility /*0x0*/  // sizeof 0x868, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x85C]; // offset 0x0
    float32 radius; // offset 0x85C, size 0x4, align 4
    float32 bonus_linger_duration; // offset 0x860, size 0x4, align 4
    GameTime_t m_startDecayTime; // offset 0x864, size 0x4, align 255
};
