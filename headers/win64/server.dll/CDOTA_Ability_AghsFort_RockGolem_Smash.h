#pragma once

class CDOTA_Ability_AghsFort_RockGolem_Smash : public CDOTABaseAbility /*0x0*/  // sizeof 0x5A8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x580]; // offset 0x0
    ParticleIndex_t m_nPreviewFX; // offset 0x580, size 0x4, align 255
    VectorWS m_vTargetLoc; // offset 0x584, size 0xC, align 4
    char _pad_0590[0x14]; // offset 0x590
    int32 radius; // offset 0x5A4, size 0x4, align 4
};
