#pragma once

class CCitadel_Ability_Bookworm_KnightChargeVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x16C0, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13E8]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_KnightChargeChannelParticle; // offset 0x13E8, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_KnightChargeCastParticle; // offset 0x14C8, size 0xE0, align 8
    CSoundEventName m_strKnightChargeExplosionSound; // offset 0x15A8, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strCastDelayLocalPlayerSound; // offset 0x15B8, size 0x10, align 8
    CSoundEventName m_strExpireSound; // offset 0x15C8, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_BuffModifier; // offset 0x15D8, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // offset 0x15E8, size 0x10, align 8
    float32 m_flNavMeshSearchRange; // offset 0x15F8, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flNavMeshSearchForwardOffset; // offset 0x15FC, size 0x4, align 4
    float32 m_flObstacleAvoidanceAmount; // offset 0x1600, size 0x4, align 4
    float32 m_flGravity; // offset 0x1604, size 0x4, align 4
    float32 m_flGroundCheckDistance; // offset 0x1608, size 0x4, align 4
    float32 m_flGroundSnapDistance; // offset 0x160C, size 0x4, align 4
    float32 m_flJumpSpeed; // offset 0x1610, size 0x4, align 4
    float32 m_flTimescale; // offset 0x1614, size 0x4, align 4
    float32 m_flHintRecoveryStrength; // offset 0x1618, size 0x4, align 4
    char _pad_161C[0x4]; // offset 0x161C
    CPiecewiseCurve m_worldPositionHeightCurveX; // offset 0x1620, size 0x40, align 8
    CPiecewiseCurve m_worldPositionHeightCurveY; // offset 0x1660, size 0x40, align 8
    float32 m_flDestroyLeashDistance; // offset 0x16A0, size 0x4, align 4
    float32 m_flDestroyMapDistance; // offset 0x16A4, size 0x4, align 4
    float32 m_flQAngleSpringConstant; // offset 0x16A8, size 0x4, align 4
    float32 m_flMiniHopSpeedMin; // offset 0x16AC, size 0x4, align 4
    float32 m_flMiniHopSpeedMax; // offset 0x16B0, size 0x4, align 4
    float32 m_flMinPitch; // offset 0x16B4, size 0x4, align 4
    float32 m_flMaxPitch; // offset 0x16B8, size 0x4, align 4
    bool m_bDebug; // offset 0x16BC, size 0x1, align 1
    char _pad_16BD[0x3]; // offset 0x16BD
};
