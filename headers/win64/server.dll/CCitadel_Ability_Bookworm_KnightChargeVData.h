#pragma once

class CCitadel_Ability_Bookworm_KnightChargeVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1678, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13A0]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_KnightChargeChannelParticle; // offset 0x13A0, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_KnightChargeCastParticle; // offset 0x1480, size 0xE0, align 8
    CSoundEventName m_strKnightChargeExplosionSound; // offset 0x1560, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strCastDelayLocalPlayerSound; // offset 0x1570, size 0x10, align 8
    CSoundEventName m_strExpireSound; // offset 0x1580, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_BuffModifier; // offset 0x1590, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // offset 0x15A0, size 0x10, align 8
    float32 m_flNavMeshSearchRange; // offset 0x15B0, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flNavMeshSearchForwardOffset; // offset 0x15B4, size 0x4, align 4
    float32 m_flObstacleAvoidanceAmount; // offset 0x15B8, size 0x4, align 4
    float32 m_flGravity; // offset 0x15BC, size 0x4, align 4
    float32 m_flGroundCheckDistance; // offset 0x15C0, size 0x4, align 4
    float32 m_flGroundSnapDistance; // offset 0x15C4, size 0x4, align 4
    float32 m_flJumpSpeed; // offset 0x15C8, size 0x4, align 4
    float32 m_flTimescale; // offset 0x15CC, size 0x4, align 4
    float32 m_flHintRecoveryStrength; // offset 0x15D0, size 0x4, align 4
    char _pad_15D4[0x4]; // offset 0x15D4
    CPiecewiseCurve m_worldPositionHeightCurveX; // offset 0x15D8, size 0x40, align 8
    CPiecewiseCurve m_worldPositionHeightCurveY; // offset 0x1618, size 0x40, align 8
    float32 m_flDestroyLeashDistance; // offset 0x1658, size 0x4, align 4
    float32 m_flDestroyMapDistance; // offset 0x165C, size 0x4, align 4
    float32 m_flQAngleSpringConstant; // offset 0x1660, size 0x4, align 4
    float32 m_flMiniHopSpeedMin; // offset 0x1664, size 0x4, align 4
    float32 m_flMiniHopSpeedMax; // offset 0x1668, size 0x4, align 4
    float32 m_flMinPitch; // offset 0x166C, size 0x4, align 4
    float32 m_flMaxPitch; // offset 0x1670, size 0x4, align 4
    bool m_bDebug; // offset 0x1674, size 0x1, align 1
    char _pad_1675[0x3]; // offset 0x1675
};
