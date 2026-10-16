#pragma once

class CCitadel_Ability_DeadpackChargeBlastVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1768, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13E8]; // offset 0x0
    CSoundEventName m_strHomeSound; // offset 0x13E8, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strFireSound; // offset 0x13F8, size 0x10, align 8
    CSoundEventName m_strImpactSound; // offset 0x1408, size 0x10, align 8
    CSoundEventName m_strCoatedAppliedSound; // offset 0x1418, size 0x10, align 8
    CSoundEventName m_strCoatedConsumeSound; // offset 0x1428, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_RangeIndicatorParticle; // offset 0x1438, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_RangeCircleIndicator; // offset 0x1518, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_MarkedExplosionParticle; // offset 0x15F8, size 0xE0, align 8
    CEmbeddedSubclass< CCitadelModifier > m_StuckMineAuraModifier; // offset 0x16D8, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_CoatedModifier; // offset 0x16E8, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_CoatedSlowModifier; // offset 0x16F8, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_BuffModifier; // offset 0x1708, size 0x10, align 8
    CRangeFloat m_flFloatDistanceAboveHead; // offset 0x1718, size 0x8, align 255 | MPropertyStartGroup
    CRangeFloat m_flFloatLeftRightDistance; // offset 0x1720, size 0x8, align 255
    CRangeFloat m_flFloatForwardBackDistance; // offset 0x1728, size 0x8, align 255
    CRangeFloat m_flFloatInitialSpeed; // offset 0x1730, size 0x8, align 255
    float32 m_flHomeDelay; // offset 0x1738, size 0x4, align 4
    float32 m_flHomeInterval; // offset 0x173C, size 0x4, align 4
    float32 m_flShootDelay; // offset 0x1740, size 0x4, align 4
    float32 m_flShootInterval; // offset 0x1744, size 0x4, align 4
    float32 m_flTrackedProjectileSpeed; // offset 0x1748, size 0x4, align 4
    float32 m_flMaxHoldDuration; // offset 0x174C, size 0x4, align 4
    float32 m_flAimDeadzone; // offset 0x1750, size 0x4, align 4
    float32 m_flPathSegmentLengthMeters; // offset 0x1754, size 0x4, align 4 | MPropertyStartGroup MPropertyDescription
    float32 m_flPathScatterDistanceMeters; // offset 0x1758, size 0x4, align 4 | MPropertyDescription
    float32 m_flPathApexFractionOfDistance; // offset 0x175C, size 0x4, align 4 | MPropertyDescription
    float32 m_flPathApexMaxMeters; // offset 0x1760, size 0x4, align 4 | MPropertyDescription
    char _pad_1764[0x4]; // offset 0x1764
};
