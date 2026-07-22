#pragma once

class CDOTA_Ability_DeathProphet_SpiritSiphon : public CDOTABaseAbility /*0x0*/  // sizeof 0x870, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x85C]; // offset 0x0
    VectorWS m_vStartPos; // offset 0x85C, size 0xC, align 4
    int32 m_iArrowProjectile; // offset 0x868, size 0x4, align 4
    int32 m_nFXIndex; // offset 0x86C, size 0x4, align 4
};
