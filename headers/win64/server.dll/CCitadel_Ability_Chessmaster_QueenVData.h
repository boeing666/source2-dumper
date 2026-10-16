#pragma once

class CCitadel_Ability_Chessmaster_QueenVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1840, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13E8]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_LiftModifier; // offset 0x13E8, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_SlowModifier; // offset 0x13F8, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_TileModifier; // offset 0x1408, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AOEExplodeParticle; // offset 0x1418, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AreaWarningEffect; // offset 0x14F8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TileExplodeParticle; // offset 0x15D8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PostExplodeParticle; // offset 0x16B8, size 0xE0, align 8
    CSoundEventName m_AOEExplodeSound; // offset 0x1798, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strAOEWarningSound; // offset 0x17A8, size 0x10, align 8
    CSoundEventName m_strExpireSound; // offset 0x17B8, size 0x10, align 8
    CSoundEventName m_QueenRecallSound; // offset 0x17C8, size 0x10, align 8
    CSoundEventName m_QueenExpireSound; // offset 0x17D8, size 0x10, align 8
    CSoundEventName m_strCheckmateSound; // offset 0x17E8, size 0x10, align 8
    CSoundEventName m_strTileReleasedSound; // offset 0x17F8, size 0x10, align 8
    CSoundEventName m_strSlamSound; // offset 0x1808, size 0x10, align 8
    bool m_bOrientToWorldForward; // offset 0x1818, size 0x1, align 1 | MPropertyStartGroup
    bool m_bHaveLinesStun; // offset 0x1819, size 0x1, align 1
    bool m_bOnlyStunOnce; // offset 0x181A, size 0x1, align 1
    bool m_bOnlyStunThreat; // offset 0x181B, size 0x1, align 1
    bool m_bDoLiftOnStun; // offset 0x181C, size 0x1, align 1
    bool m_bDamageBeforeLift; // offset 0x181D, size 0x1, align 1
    bool m_bHasLimitedMoves; // offset 0x181E, size 0x1, align 1
    char _pad_181F[0x1]; // offset 0x181F
    float32 m_flInitialTileDelay; // offset 0x1820, size 0x4, align 4
    float32 m_flTimeBetweenTiles; // offset 0x1824, size 0x4, align 4
    float32 m_flTraceRadius; // offset 0x1828, size 0x4, align 4
    float32 m_flDistanceAboveGround; // offset 0x182C, size 0x4, align 4
    float32 m_flFloatDownRate; // offset 0x1830, size 0x4, align 4
    float32 m_flClimbHeight; // offset 0x1834, size 0x4, align 4
    float32 m_flStepDownHeight; // offset 0x1838, size 0x4, align 4
    float32 m_flSinclairModelSwapHold; // offset 0x183C, size 0x4, align 4
};
