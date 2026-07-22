#pragma once

class C_DOTA_Ability_AghsFort_RockGolem_Smash : public C_DOTABaseAbility /*0x0*/  // sizeof 0x850, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x824]; // offset 0x0
    ParticleIndex_t m_nPreviewFX; // offset 0x824, size 0x4, align 255
    VectorWS m_vTargetLoc; // offset 0x828, size 0xC, align 4
    char _pad_0834[0x14]; // offset 0x834
    int32 radius; // offset 0x848, size 0x4, align 4
    char _pad_084C[0x4]; // offset 0x84C
};
