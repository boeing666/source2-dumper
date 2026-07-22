#pragma once

class CDOTA_Ability_AghsFort_RockGolem_Smash : public CDOTABaseAbility /*0x0*/  // sizeof 0x888, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x85C]; // offset 0x0
    ParticleIndex_t m_nPreviewFX; // offset 0x85C, size 0x4, align 255
    VectorWS m_vTargetLoc; // offset 0x860, size 0xC, align 4
    char _pad_086C[0x14]; // offset 0x86C
    int32 radius; // offset 0x880, size 0x4, align 4
    char _pad_0884[0x4]; // offset 0x884
};
