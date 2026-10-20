#pragma once

class CCitadel_Ability_Chessmaster_QueenVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x14C8, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1070]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_LiftModifier; // offset 0x1070, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_SlowModifier; // offset 0x1080, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_TileModifier; // offset 0x1090, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AOEExplodeParticle; // offset 0x10A0, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AreaWarningEffect; // offset 0x1180, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TileExplodeParticle; // offset 0x1260, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PostExplodeParticle; // offset 0x1340, size 0xE0, align 8
    CSoundEventName m_AOEExplodeSound; // offset 0x1420, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strAOEWarningSound; // offset 0x1430, size 0x10, align 8
    CSoundEventName m_strExpireSound; // offset 0x1440, size 0x10, align 8
    CSoundEventName m_QueenRecallSound; // offset 0x1450, size 0x10, align 8
    CSoundEventName m_QueenExpireSound; // offset 0x1460, size 0x10, align 8
    CSoundEventName m_strCheckmateSound; // offset 0x1470, size 0x10, align 8
    CSoundEventName m_strTileReleasedSound; // offset 0x1480, size 0x10, align 8
    CSoundEventName m_strSlamSound; // offset 0x1490, size 0x10, align 8
    bool m_bOrientToWorldForward; // offset 0x14A0, size 0x1, align 1 | MPropertyStartGroup
    bool m_bHaveLinesStun; // offset 0x14A1, size 0x1, align 1
    bool m_bOnlyStunOnce; // offset 0x14A2, size 0x1, align 1
    bool m_bOnlyStunThreat; // offset 0x14A3, size 0x1, align 1
    bool m_bDoLiftOnStun; // offset 0x14A4, size 0x1, align 1
    bool m_bDamageBeforeLift; // offset 0x14A5, size 0x1, align 1
    bool m_bHasLimitedMoves; // offset 0x14A6, size 0x1, align 1
    char _pad_14A7[0x1]; // offset 0x14A7
    float32 m_flInitialTileDelay; // offset 0x14A8, size 0x4, align 4
    float32 m_flTimeBetweenTiles; // offset 0x14AC, size 0x4, align 4
    float32 m_flTraceRadius; // offset 0x14B0, size 0x4, align 4
    float32 m_flDistanceAboveGround; // offset 0x14B4, size 0x4, align 4
    float32 m_flFloatDownRate; // offset 0x14B8, size 0x4, align 4
    float32 m_flClimbHeight; // offset 0x14BC, size 0x4, align 4
    float32 m_flStepDownHeight; // offset 0x14C0, size 0x4, align 4
    float32 m_flSinclairModelSwapHold; // offset 0x14C4, size 0x4, align 4
};
