#pragma once

class CCitadel_Ability_Chessmaster_QueenVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x15B8, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1080]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_LiftModifier; // offset 0x1080, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_SlowModifier; // offset 0x1090, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_TileModifier; // offset 0x10A0, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AOEExplodeParticle; // offset 0x10B0, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AreaWarningEffect; // offset 0x1190, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TileExplodeParticle; // offset 0x1270, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TilePreviewParticle; // offset 0x1350, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PostExplodeParticle; // offset 0x1430, size 0xE0, align 8
    CSoundEventName m_AOEExplodeSound; // offset 0x1510, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strAOEWarningSound; // offset 0x1520, size 0x10, align 8
    CSoundEventName m_strExpireSound; // offset 0x1530, size 0x10, align 8
    CSoundEventName m_QueenRecallSound; // offset 0x1540, size 0x10, align 8
    CSoundEventName m_QueenExpireSound; // offset 0x1550, size 0x10, align 8
    CSoundEventName m_strCheckmateSound; // offset 0x1560, size 0x10, align 8
    CSoundEventName m_strTileReleasedSound; // offset 0x1570, size 0x10, align 8
    CSoundEventName m_strSlamSound; // offset 0x1580, size 0x10, align 8
    bool m_bOrientToWorldForward; // offset 0x1590, size 0x1, align 1 | MPropertyStartGroup
    bool m_bHaveLinesStun; // offset 0x1591, size 0x1, align 1
    bool m_bOnlyStunOnce; // offset 0x1592, size 0x1, align 1
    bool m_bOnlyStunThreat; // offset 0x1593, size 0x1, align 1
    bool m_bDoLiftOnStun; // offset 0x1594, size 0x1, align 1
    bool m_bDamageBeforeLift; // offset 0x1595, size 0x1, align 1
    bool m_bHasLimitedMoves; // offset 0x1596, size 0x1, align 1
    char _pad_1597[0x1]; // offset 0x1597
    float32 m_flInitialTileDelay; // offset 0x1598, size 0x4, align 4
    float32 m_flTimeBetweenTiles; // offset 0x159C, size 0x4, align 4
    float32 m_flTraceRadius; // offset 0x15A0, size 0x4, align 4
    float32 m_flDistanceAboveGround; // offset 0x15A4, size 0x4, align 4
    float32 m_flFloatDownRate; // offset 0x15A8, size 0x4, align 4
    float32 m_flClimbHeight; // offset 0x15AC, size 0x4, align 4
    float32 m_flStepDownHeight; // offset 0x15B0, size 0x4, align 4
    float32 m_flSinclairModelSwapHold; // offset 0x15B4, size 0x4, align 4
};
