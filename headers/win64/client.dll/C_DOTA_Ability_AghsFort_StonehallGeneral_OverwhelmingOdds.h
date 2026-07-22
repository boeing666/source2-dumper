#pragma once

class C_DOTA_Ability_AghsFort_StonehallGeneral_OverwhelmingOdds : public C_DOTABaseAbility /*0x0*/  // sizeof 0x6D0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x6A8]; // offset 0x0
    int32 max_steps; // offset 0x6A8, size 0x4, align 4
    VectorWS m_vTarget; // offset 0x6AC, size 0xC, align 4
    Vector m_vDir; // offset 0x6B8, size 0xC, align 4
    int32 m_nSteps; // offset 0x6C4, size 0x4, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x6C8, size 0x4, align 255
    char _pad_06CC[0x4]; // offset 0x6CC
};
