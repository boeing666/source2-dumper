#pragma once

class CCitadel_BreakableProp_ParadeFloatBoxVData : public CCitadel_BreakablePropVData /*0x0*/  // sizeof 0x720, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x610]; // offset 0x0
    float32 m_flDroppedItemMinSpeed; // offset 0x610, size 0x4, align 4 | MPropertyStartGroup MPropertyFriendlyName MPropertyDescription
    float32 m_flDroppedItemMaxSpeed; // offset 0x614, size 0x4, align 4 | MPropertyFriendlyName MPropertyDescription
    float32 m_flDroppedItemMinUpSpeed; // offset 0x618, size 0x4, align 4 | MPropertyFriendlyName MPropertyDescription
    float32 m_flDroppedItemMaxUpSpeed; // offset 0x61C, size 0x4, align 4 | MPropertyFriendlyName MPropertyDescription
    float32 m_flSwayAngle; // offset 0x620, size 0x4, align 4 | MPropertyStartGroup MPropertyFriendlyName MPropertyDescription
    float32 m_flSwayPeriod; // offset 0x624, size 0x4, align 4 | MPropertyFriendlyName MPropertyDescription MPropertySuppressExpr
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_RopeParticle; // offset 0x628, size 0xE0, align 8 | MPropertyStartGroup MPropertyFriendlyName MPropertyDescription
    float32 m_flRopeRadius; // offset 0x708, size 0x4, align 4 | MPropertyFriendlyName MPropertyDescription
    float32 m_flDropTwoChance; // offset 0x70C, size 0x4, align 4 | MPropertyStartGroup MPropertyFriendlyName MPropertyDescription
    float32 m_flDropThreeChance; // offset 0x710, size 0x4, align 4 | MPropertyFriendlyName MPropertyDescription
    float32 m_flExtraDropTurkeyChance; // offset 0x714, size 0x4, align 4 | MPropertyFriendlyName MPropertyDescription
    float32 m_flExtraDropPowerupChance; // offset 0x718, size 0x4, align 4 | MPropertyFriendlyName MPropertyDescription
    char _pad_071C[0x4]; // offset 0x71C
};
