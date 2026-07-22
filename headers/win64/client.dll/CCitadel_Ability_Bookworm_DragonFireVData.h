#pragma once

class CCitadel_Ability_Bookworm_DragonFireVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1C00, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1818]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DragonSpawnParticle; // offset 0x1818, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DragonCastParticle; // offset 0x18F8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ImpactParticle; // offset 0x19D8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_ProjectileModel; // offset 0x1AB8, size 0xE0, align 8
    CEmbeddedSubclass< CCitadelModifier > m_GroundAuraModifier; // offset 0x1B98, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strExpiredSound; // offset 0x1BA8, size 0x10, align 8 | MPropertyStartGroup
    float32 flSpawnVerticalOffset; // offset 0x1BB8, size 0x4, align 4 | MPropertyStartGroup
    float32 flIdealSpringLength; // offset 0x1BBC, size 0x4, align 4 | MPropertyDescription
    float32 flSpringConstant; // offset 0x1BC0, size 0x4, align 4 | MPropertyDescription
    float32 flDamperConstant; // offset 0x1BC4, size 0x4, align 4 | MPropertyDescription
    float32 flVelocityImpactOnAngle; // offset 0x1BC8, size 0x4, align 4 | MPropertyDescription
    float32 flPitchOffset; // offset 0x1BCC, size 0x4, align 4 | MPropertyDescription
    float32 flDotToChangeForwardDirectionBasedOnImpactNormal; // offset 0x1BD0, size 0x4, align 4 | MPropertyDescription
    bool bDebug; // offset 0x1BD4, size 0x1, align 1 | MPropertyDescription
    char _pad_1BD5[0x3]; // offset 0x1BD5
    float32 flForwardTraceDistance; // offset 0x1BD8, size 0x4, align 4 | MPropertyDescription
    float32 m_flFloorRaycastForward; // offset 0x1BDC, size 0x4, align 4 | MPropertyDescription
    float32 m_flTraceRadius; // offset 0x1BE0, size 0x4, align 4
    float32 m_flDistanceAboveGround; // offset 0x1BE4, size 0x4, align 4
    float32 m_flFloatDownRate; // offset 0x1BE8, size 0x4, align 4
    float32 m_flClimbHeight; // offset 0x1BEC, size 0x4, align 4
    float32 m_flStepDownHeight; // offset 0x1BF0, size 0x4, align 4
    float32 m_flQAngleSmoothRate; // offset 0x1BF4, size 0x4, align 4
    bool m_bShouldReflectAgainstWall; // offset 0x1BF8, size 0x1, align 1
    char _pad_1BF9[0x7]; // offset 0x1BF9
};
