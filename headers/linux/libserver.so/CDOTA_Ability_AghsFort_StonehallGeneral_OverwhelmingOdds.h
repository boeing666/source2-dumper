#pragma once

class CDOTA_Ability_AghsFort_StonehallGeneral_OverwhelmingOdds : public CDOTABaseAbility /*0x0*/  // sizeof 0x880, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x85C]; // offset 0x0
    int32 max_steps; // offset 0x85C, size 0x4, align 4
    VectorWS m_vTarget; // offset 0x860, size 0xC, align 4
    Vector m_vDir; // offset 0x86C, size 0xC, align 4
    int32 m_nSteps; // offset 0x878, size 0x4, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x87C, size 0x4, align 255
};
