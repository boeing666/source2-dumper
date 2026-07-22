#pragma once

class C_DOTA_Ability_Shredder_TwistedChakram : public C_DOTABaseAbility /*0x0*/  // sizeof 0x850, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x824]; // offset 0x0
    int32 radius; // offset 0x824, size 0x4, align 4
    int32 speed; // offset 0x828, size 0x4, align 4
    int32 damage; // offset 0x82C, size 0x4, align 4
    float32 debuff_duration; // offset 0x830, size 0x4, align 4
    CHandle< C_BaseEntity > m_hTarget; // offset 0x834, size 0x4, align 4
    CUtlVector< CHandle< C_BaseEntity > > m_vecHitEntities; // offset 0x838, size 0x18, align 8
};
