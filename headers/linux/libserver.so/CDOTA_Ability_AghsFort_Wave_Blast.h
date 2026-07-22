#pragma once

class CDOTA_Ability_AghsFort_Wave_Blast : public CDOTABaseAbility /*0x0*/  // sizeof 0x888, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x85C]; // offset 0x0
    int32 damage; // offset 0x85C, size 0x4, align 4
    float32 knockback_duration; // offset 0x860, size 0x4, align 4
    float32 disarm_duration; // offset 0x864, size 0x4, align 4
    CUtlVector< CHandle< CBaseEntity > > m_hHitEntities; // offset 0x868, size 0x18, align 8
    ParticleIndex_t m_nPreviewFX; // offset 0x880, size 0x4, align 255
    char _pad_0884[0x4]; // offset 0x884
};
