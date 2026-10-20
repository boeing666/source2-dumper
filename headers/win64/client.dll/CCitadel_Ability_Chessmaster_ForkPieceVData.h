#pragma once

class CCitadel_Ability_Chessmaster_ForkPieceVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x12C0, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1070]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ImpactParticle; // offset 0x1070, size 0xE0, align 8 | MPropertyGroupName
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ForkParticle; // offset 0x1150, size 0xE0, align 8
    CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // offset 0x1230, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_HexModifier; // offset 0x1240, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_ImmunityModifier; // offset 0x1250, size 0x10, align 8
    CSoundEventName m_strForkSound; // offset 0x1260, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strReflectSound; // offset 0x1270, size 0x10, align 8
    CSoundEventName m_strExpireSound; // offset 0x1280, size 0x10, align 8
    bool m_bGrowImmobilizeDurationFromDistance; // offset 0x1290, size 0x1, align 1 | MPropertyStartGroup
    bool m_bOnlyDebuffOnFork; // offset 0x1291, size 0x1, align 1
    bool m_bShouldDropEnemyAura; // offset 0x1292, size 0x1, align 1
    bool m_bShouldDropAllyAura; // offset 0x1293, size 0x1, align 1
    bool m_bAllowMultihitOnReverse; // offset 0x1294, size 0x1, align 1
    char _pad_1295[0x3]; // offset 0x1295
    float32 m_flDeployGap; // offset 0x1298, size 0x4, align 4
    float32 m_flTraceRadius; // offset 0x129C, size 0x4, align 4
    float32 m_flDistanceAboveGround; // offset 0x12A0, size 0x4, align 4
    float32 m_flFloatDownRate; // offset 0x12A4, size 0x4, align 4
    float32 m_flClimbHeight; // offset 0x12A8, size 0x4, align 4
    float32 m_flStepDownHeight; // offset 0x12AC, size 0x4, align 4
    float32 m_flMinPitch; // offset 0x12B0, size 0x4, align 4
    float32 m_flMaxPitch; // offset 0x12B4, size 0x4, align 4
    float32 m_flReverseTraceDistance; // offset 0x12B8, size 0x4, align 4
    float32 m_flImmunityDuration; // offset 0x12BC, size 0x4, align 4
};
