#pragma once

class CCitadel_Ability_Bookworm_DragonFireVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1468, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1080]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DragonSpawnParticle; // offset 0x1080, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DragonCastParticle; // offset 0x1160, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ImpactParticle; // offset 0x1240, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_ProjectileModel; // offset 0x1320, size 0xE0, align 8
    CEmbeddedSubclass< CCitadelModifier > m_GroundAuraModifier; // offset 0x1400, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strExpiredSound; // offset 0x1410, size 0x10, align 8 | MPropertyStartGroup
    float32 flSpawnVerticalOffset; // offset 0x1420, size 0x4, align 4 | MPropertyStartGroup
    float32 flIdealSpringLength; // offset 0x1424, size 0x4, align 4 | MPropertyDescription
    float32 flSpringConstant; // offset 0x1428, size 0x4, align 4 | MPropertyDescription
    float32 flDamperConstant; // offset 0x142C, size 0x4, align 4 | MPropertyDescription
    float32 flVelocityImpactOnAngle; // offset 0x1430, size 0x4, align 4 | MPropertyDescription
    float32 flPitchOffset; // offset 0x1434, size 0x4, align 4 | MPropertyDescription
    float32 flDotToChangeForwardDirectionBasedOnImpactNormal; // offset 0x1438, size 0x4, align 4 | MPropertyDescription
    bool bDebug; // offset 0x143C, size 0x1, align 1 | MPropertyDescription
    char _pad_143D[0x3]; // offset 0x143D
    float32 flForwardTraceDistance; // offset 0x1440, size 0x4, align 4 | MPropertyDescription
    float32 m_flFloorRaycastForward; // offset 0x1444, size 0x4, align 4 | MPropertyDescription
    float32 m_flTraceRadius; // offset 0x1448, size 0x4, align 4
    float32 m_flDistanceAboveGround; // offset 0x144C, size 0x4, align 4
    float32 m_flFloatDownRate; // offset 0x1450, size 0x4, align 4
    float32 m_flClimbHeight; // offset 0x1454, size 0x4, align 4
    float32 m_flStepDownHeight; // offset 0x1458, size 0x4, align 4
    float32 m_flQAngleSmoothRate; // offset 0x145C, size 0x4, align 4
    bool m_bShouldReflectAgainstWall; // offset 0x1460, size 0x1, align 1
    char _pad_1461[0x7]; // offset 0x1461
};
