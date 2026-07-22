#pragma once

class CDOTA_Ability_Clinkz_BurningBarrage : public CDOTABaseAbility /*0x0*/  // sizeof 0x878, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x85C]; // offset 0x0
    VectorWS m_vStartPos; // offset 0x85C, size 0xC, align 4
    int32 m_iArrowProjectile; // offset 0x868, size 0x4, align 4
    int32 m_nFXIndex; // offset 0x86C, size 0x4, align 4
    float32 arrow_speed; // offset 0x870, size 0x4, align 4
    char _pad_0874[0x4]; // offset 0x874
};
