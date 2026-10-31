#pragma once

class CCitadel_Ability_DeadpackChargeBlastVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1400, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1080]; // offset 0x0
    CSoundEventName m_strHomeSound; // offset 0x1080, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strFireSound; // offset 0x1090, size 0x10, align 8
    CSoundEventName m_strImpactSound; // offset 0x10A0, size 0x10, align 8
    CSoundEventName m_strCoatedAppliedSound; // offset 0x10B0, size 0x10, align 8
    CSoundEventName m_strCoatedConsumeSound; // offset 0x10C0, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_RangeIndicatorParticle; // offset 0x10D0, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_RangeCircleIndicator; // offset 0x11B0, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_MarkedExplosionParticle; // offset 0x1290, size 0xE0, align 8
    CEmbeddedSubclass< CCitadelModifier > m_StuckMineAuraModifier; // offset 0x1370, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_CoatedModifier; // offset 0x1380, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_CoatedSlowModifier; // offset 0x1390, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_BuffModifier; // offset 0x13A0, size 0x10, align 8
    CRangeFloat m_flFloatDistanceAboveHead; // offset 0x13B0, size 0x8, align 255 | MPropertyStartGroup
    CRangeFloat m_flFloatLeftRightDistance; // offset 0x13B8, size 0x8, align 255
    CRangeFloat m_flFloatForwardBackDistance; // offset 0x13C0, size 0x8, align 255
    CRangeFloat m_flFloatInitialSpeed; // offset 0x13C8, size 0x8, align 255
    float32 m_flHomeDelay; // offset 0x13D0, size 0x4, align 4
    float32 m_flHomeInterval; // offset 0x13D4, size 0x4, align 4
    float32 m_flShootDelay; // offset 0x13D8, size 0x4, align 4
    float32 m_flShootInterval; // offset 0x13DC, size 0x4, align 4
    float32 m_flTrackedProjectileSpeed; // offset 0x13E0, size 0x4, align 4
    float32 m_flMaxHoldDuration; // offset 0x13E4, size 0x4, align 4
    float32 m_flAimDeadzone; // offset 0x13E8, size 0x4, align 4
    float32 m_flPathSegmentLengthMeters; // offset 0x13EC, size 0x4, align 4 | MPropertyStartGroup MPropertyDescription
    float32 m_flPathScatterDistanceMeters; // offset 0x13F0, size 0x4, align 4 | MPropertyDescription
    float32 m_flPathApexFractionOfDistance; // offset 0x13F4, size 0x4, align 4 | MPropertyDescription
    float32 m_flPathApexMaxMeters; // offset 0x13F8, size 0x4, align 4 | MPropertyDescription
    char _pad_13FC[0x4]; // offset 0x13FC
};
