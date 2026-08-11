#pragma once

class CDOTA_Ability_Seasonal_TI9_Shovel : public CDOTABaseAbility /*0x0*/  // sizeof 0x598, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x580]; // offset 0x0
    VectorWS m_vChannelPos; // offset 0x580, size 0xC, align 4
    bool m_bIsUnderwater; // offset 0x58C, size 0x1, align 1
    char _pad_058D[0x3]; // offset 0x58D
    ParticleIndex_t m_nPhaseStartFXIndex; // offset 0x590, size 0x4, align 255
    char _pad_0594[0x4]; // offset 0x594
};
