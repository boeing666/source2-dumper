#pragma once

class CDOTA_Ability_AghsFort_Wave_Blast : public CDOTABaseAbility /*0x0*/  // sizeof 0x5B0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x580]; // offset 0x0
    int32 damage; // offset 0x580, size 0x4, align 4
    float32 knockback_duration; // offset 0x584, size 0x4, align 4
    float32 disarm_duration; // offset 0x588, size 0x4, align 4
    char _pad_058C[0x4]; // offset 0x58C
    CUtlVector< CHandle< CBaseEntity > > m_hHitEntities; // offset 0x590, size 0x18, align 8
    ParticleIndex_t m_nPreviewFX; // offset 0x5A8, size 0x4, align 255
    char _pad_05AC[0x4]; // offset 0x5AC
};
