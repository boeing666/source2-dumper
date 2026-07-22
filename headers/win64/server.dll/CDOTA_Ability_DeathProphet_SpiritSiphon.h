#pragma once

class CDOTA_Ability_DeathProphet_SpiritSiphon : public CDOTABaseAbility /*0x0*/  // sizeof 0x598, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x580]; // offset 0x0
    VectorWS m_vStartPos; // offset 0x580, size 0xC, align 4
    int32 m_iArrowProjectile; // offset 0x58C, size 0x4, align 4
    int32 m_nFXIndex; // offset 0x590, size 0x4, align 4
    char _pad_0594[0x4]; // offset 0x594
};
