#pragma once

class CCitadel_Ability_Bookworm_DragonFireVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x17D0, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13E8]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DragonSpawnParticle; // offset 0x13E8, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DragonCastParticle; // offset 0x14C8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ImpactParticle; // offset 0x15A8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_ProjectileModel; // offset 0x1688, size 0xE0, align 8
    CEmbeddedSubclass< CCitadelModifier > m_GroundAuraModifier; // offset 0x1768, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strExpiredSound; // offset 0x1778, size 0x10, align 8 | MPropertyStartGroup
    float32 flSpawnVerticalOffset; // offset 0x1788, size 0x4, align 4 | MPropertyStartGroup
    float32 flIdealSpringLength; // offset 0x178C, size 0x4, align 4 | MPropertyDescription
    float32 flSpringConstant; // offset 0x1790, size 0x4, align 4 | MPropertyDescription
    float32 flDamperConstant; // offset 0x1794, size 0x4, align 4 | MPropertyDescription
    float32 flVelocityImpactOnAngle; // offset 0x1798, size 0x4, align 4 | MPropertyDescription
    float32 flPitchOffset; // offset 0x179C, size 0x4, align 4 | MPropertyDescription
    float32 flDotToChangeForwardDirectionBasedOnImpactNormal; // offset 0x17A0, size 0x4, align 4 | MPropertyDescription
    bool bDebug; // offset 0x17A4, size 0x1, align 1 | MPropertyDescription
    char _pad_17A5[0x3]; // offset 0x17A5
    float32 flForwardTraceDistance; // offset 0x17A8, size 0x4, align 4 | MPropertyDescription
    float32 m_flFloorRaycastForward; // offset 0x17AC, size 0x4, align 4 | MPropertyDescription
    float32 m_flTraceRadius; // offset 0x17B0, size 0x4, align 4
    float32 m_flDistanceAboveGround; // offset 0x17B4, size 0x4, align 4
    float32 m_flFloatDownRate; // offset 0x17B8, size 0x4, align 4
    float32 m_flClimbHeight; // offset 0x17BC, size 0x4, align 4
    float32 m_flStepDownHeight; // offset 0x17C0, size 0x4, align 4
    float32 m_flQAngleSmoothRate; // offset 0x17C4, size 0x4, align 4
    bool m_bShouldReflectAgainstWall; // offset 0x17C8, size 0x1, align 1
    char _pad_17C9[0x7]; // offset 0x17C9
};
