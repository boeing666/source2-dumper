#pragma once

class CDOTA_Ability_Shredder_TwistedChakram : public CDOTABaseAbility /*0x0*/  // sizeof 0x5B0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x580]; // offset 0x0
    int32 radius; // offset 0x580, size 0x4, align 4
    int32 speed; // offset 0x584, size 0x4, align 4
    int32 damage; // offset 0x588, size 0x4, align 4
    float32 debuff_duration; // offset 0x58C, size 0x4, align 4
    CHandle< CBaseEntity > m_hTarget; // offset 0x590, size 0x4, align 4
    char _pad_0594[0x4]; // offset 0x594
    CUtlVector< CHandle< CBaseEntity > > m_vecHitEntities; // offset 0x598, size 0x18, align 8
};
