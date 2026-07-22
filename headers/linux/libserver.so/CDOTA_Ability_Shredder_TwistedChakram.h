#pragma once

class CDOTA_Ability_Shredder_TwistedChakram : public CDOTABaseAbility /*0x0*/  // sizeof 0x888, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x85C]; // offset 0x0
    int32 radius; // offset 0x85C, size 0x4, align 4
    int32 speed; // offset 0x860, size 0x4, align 4
    int32 damage; // offset 0x864, size 0x4, align 4
    float32 debuff_duration; // offset 0x868, size 0x4, align 4
    CHandle< CBaseEntity > m_hTarget; // offset 0x86C, size 0x4, align 4
    CUtlVector< CHandle< CBaseEntity > > m_vecHitEntities; // offset 0x870, size 0x18, align 8
};
