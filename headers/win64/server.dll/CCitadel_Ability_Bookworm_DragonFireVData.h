#pragma once

class CCitadel_Ability_Bookworm_DragonFireVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1788, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13A0]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DragonSpawnParticle; // offset 0x13A0, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DragonCastParticle; // offset 0x1480, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ImpactParticle; // offset 0x1560, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_ProjectileModel; // offset 0x1640, size 0xE0, align 8
    CEmbeddedSubclass< CCitadelModifier > m_GroundAuraModifier; // offset 0x1720, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strExpiredSound; // offset 0x1730, size 0x10, align 8 | MPropertyStartGroup
    float32 flSpawnVerticalOffset; // offset 0x1740, size 0x4, align 4 | MPropertyStartGroup
    float32 flIdealSpringLength; // offset 0x1744, size 0x4, align 4 | MPropertyDescription
    float32 flSpringConstant; // offset 0x1748, size 0x4, align 4 | MPropertyDescription
    float32 flDamperConstant; // offset 0x174C, size 0x4, align 4 | MPropertyDescription
    float32 flVelocityImpactOnAngle; // offset 0x1750, size 0x4, align 4 | MPropertyDescription
    float32 flPitchOffset; // offset 0x1754, size 0x4, align 4 | MPropertyDescription
    float32 flDotToChangeForwardDirectionBasedOnImpactNormal; // offset 0x1758, size 0x4, align 4 | MPropertyDescription
    bool bDebug; // offset 0x175C, size 0x1, align 1 | MPropertyDescription
    char _pad_175D[0x3]; // offset 0x175D
    float32 flForwardTraceDistance; // offset 0x1760, size 0x4, align 4 | MPropertyDescription
    float32 m_flFloorRaycastForward; // offset 0x1764, size 0x4, align 4 | MPropertyDescription
    float32 m_flTraceRadius; // offset 0x1768, size 0x4, align 4
    float32 m_flDistanceAboveGround; // offset 0x176C, size 0x4, align 4
    float32 m_flFloatDownRate; // offset 0x1770, size 0x4, align 4
    float32 m_flClimbHeight; // offset 0x1774, size 0x4, align 4
    float32 m_flStepDownHeight; // offset 0x1778, size 0x4, align 4
    float32 m_flQAngleSmoothRate; // offset 0x177C, size 0x4, align 4
    bool m_bShouldReflectAgainstWall; // offset 0x1780, size 0x1, align 1
    char _pad_1781[0x7]; // offset 0x1781
};
