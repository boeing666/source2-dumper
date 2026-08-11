#pragma once

class CDOTA_Ability_Seasonal_TI9_Shovel : public CDOTABaseAbility /*0x0*/  // sizeof 0x870, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x85C]; // offset 0x0
    VectorWS m_vChannelPos; // offset 0x85C, size 0xC, align 4
    bool m_bIsUnderwater; // offset 0x868, size 0x1, align 1
    char _pad_0869[0x3]; // offset 0x869
    ParticleIndex_t m_nPhaseStartFXIndex; // offset 0x86C, size 0x4, align 255
};
