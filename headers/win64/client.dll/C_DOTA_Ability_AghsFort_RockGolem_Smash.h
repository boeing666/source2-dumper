#pragma once

class C_DOTA_Ability_AghsFort_RockGolem_Smash : public C_DOTABaseAbility /*0x0*/  // sizeof 0x6D0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x6A8]; // offset 0x0
    ParticleIndex_t m_nPreviewFX; // offset 0x6A8, size 0x4, align 255
    VectorWS m_vTargetLoc; // offset 0x6AC, size 0xC, align 4
    char _pad_06B8[0x14]; // offset 0x6B8
    int32 radius; // offset 0x6CC, size 0x4, align 4
};
