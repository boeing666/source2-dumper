#pragma once

class CCitadel_Ability_Chessmaster_ForkPieceVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1638, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13E8]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ImpactParticle; // offset 0x13E8, size 0xE0, align 8 | MPropertyGroupName
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ForkParticle; // offset 0x14C8, size 0xE0, align 8
    CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // offset 0x15A8, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_HexModifier; // offset 0x15B8, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_ImmunityModifier; // offset 0x15C8, size 0x10, align 8
    CSoundEventName m_strForkSound; // offset 0x15D8, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strReflectSound; // offset 0x15E8, size 0x10, align 8
    CSoundEventName m_strExpireSound; // offset 0x15F8, size 0x10, align 8
    bool m_bGrowImmobilizeDurationFromDistance; // offset 0x1608, size 0x1, align 1 | MPropertyStartGroup
    bool m_bOnlyDebuffOnFork; // offset 0x1609, size 0x1, align 1
    bool m_bShouldDropEnemyAura; // offset 0x160A, size 0x1, align 1
    bool m_bShouldDropAllyAura; // offset 0x160B, size 0x1, align 1
    bool m_bAllowMultihitOnReverse; // offset 0x160C, size 0x1, align 1
    char _pad_160D[0x3]; // offset 0x160D
    float32 m_flDeployGap; // offset 0x1610, size 0x4, align 4
    float32 m_flTraceRadius; // offset 0x1614, size 0x4, align 4
    float32 m_flDistanceAboveGround; // offset 0x1618, size 0x4, align 4
    float32 m_flFloatDownRate; // offset 0x161C, size 0x4, align 4
    float32 m_flClimbHeight; // offset 0x1620, size 0x4, align 4
    float32 m_flStepDownHeight; // offset 0x1624, size 0x4, align 4
    float32 m_flMinPitch; // offset 0x1628, size 0x4, align 4
    float32 m_flMaxPitch; // offset 0x162C, size 0x4, align 4
    float32 m_flReverseTraceDistance; // offset 0x1630, size 0x4, align 4
    float32 m_flImmunityDuration; // offset 0x1634, size 0x4, align 4
};
