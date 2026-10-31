#pragma once

class CCitadel_Ability_Bookworm_KnightChargeVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1358, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1080]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_KnightChargeChannelParticle; // offset 0x1080, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_KnightChargeCastParticle; // offset 0x1160, size 0xE0, align 8
    CSoundEventName m_strKnightChargeExplosionSound; // offset 0x1240, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strCastDelayLocalPlayerSound; // offset 0x1250, size 0x10, align 8
    CSoundEventName m_strExpireSound; // offset 0x1260, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_BuffModifier; // offset 0x1270, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // offset 0x1280, size 0x10, align 8
    float32 m_flNavMeshSearchRange; // offset 0x1290, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flNavMeshSearchForwardOffset; // offset 0x1294, size 0x4, align 4
    float32 m_flObstacleAvoidanceAmount; // offset 0x1298, size 0x4, align 4
    float32 m_flGravity; // offset 0x129C, size 0x4, align 4
    float32 m_flGroundCheckDistance; // offset 0x12A0, size 0x4, align 4
    float32 m_flGroundSnapDistance; // offset 0x12A4, size 0x4, align 4
    float32 m_flJumpSpeed; // offset 0x12A8, size 0x4, align 4
    float32 m_flTimescale; // offset 0x12AC, size 0x4, align 4
    float32 m_flHintRecoveryStrength; // offset 0x12B0, size 0x4, align 4
    char _pad_12B4[0x4]; // offset 0x12B4
    CPiecewiseCurve m_worldPositionHeightCurveX; // offset 0x12B8, size 0x40, align 8
    CPiecewiseCurve m_worldPositionHeightCurveY; // offset 0x12F8, size 0x40, align 8
    float32 m_flDestroyLeashDistance; // offset 0x1338, size 0x4, align 4
    float32 m_flDestroyMapDistance; // offset 0x133C, size 0x4, align 4
    float32 m_flQAngleSpringConstant; // offset 0x1340, size 0x4, align 4
    float32 m_flMiniHopSpeedMin; // offset 0x1344, size 0x4, align 4
    float32 m_flMiniHopSpeedMax; // offset 0x1348, size 0x4, align 4
    float32 m_flMinPitch; // offset 0x134C, size 0x4, align 4
    float32 m_flMaxPitch; // offset 0x1350, size 0x4, align 4
    bool m_bDebug; // offset 0x1354, size 0x1, align 1
    char _pad_1355[0x3]; // offset 0x1355
};
