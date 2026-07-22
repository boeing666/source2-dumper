#pragma once

class CDOTAMinesweeperGameDefinition  // sizeof 0x768, align 0x8 (client) {MGetKV3ClassDefaults MVDataRoot}
{
public:
    CDOTAMinesweeperPlayerDefinition m_player; // offset 0x0, size 0x8, align 4
    CUtlVector< CDOTAMinesweeperStageDefinition > m_vecStages; // offset 0x8, size 0x18, align 8
    float32 m_flTimeLimit; // offset 0x20, size 0x4, align 4
    int32 m_nIllusionManaCost; // offset 0x24, size 0x4, align 4
    int32 m_nStageProgressionTimerIncrease; // offset 0x28, size 0x4, align 4
    char _pad_002C[0x4]; // offset 0x2C
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_dustEffect; // offset 0x30, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_grassEffect; // offset 0x110, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_explosionEffect; // offset 0x1F0, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_manaPotEffect; // offset 0x2D0, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_timerIncreaseEffect; // offset 0x3B0, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_illusionEffect; // offset 0x490, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_lostManaPotEffect; // offset 0x570, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_lostTimerIncreaseEffect; // offset 0x650, size 0xE0, align 8
    int32 m_nManaPotRestoration; // offset 0x730, size 0x4, align 4
    int32 m_nMaxConcurrentManaPots; // offset 0x734, size 0x4, align 4
    int32 m_nManaPotExpireClicks; // offset 0x738, size 0x4, align 4
    int32 m_nManaPotChance; // offset 0x73C, size 0x4, align 4
    float32 m_flTimeExtension; // offset 0x740, size 0x4, align 4
    int32 m_nMaxConcurrentTimerIncreases; // offset 0x744, size 0x4, align 4
    int32 m_nTimerIncreaseExpireClicks; // offset 0x748, size 0x4, align 4
    int32 m_nTimerIncreaseChance; // offset 0x74C, size 0x4, align 4
    int32 m_nScorePerCellRevealed; // offset 0x750, size 0x4, align 4
    int32 m_nScorePerStageCleared; // offset 0x754, size 0x4, align 4
    int32 m_nScorePerSecondsRemaining; // offset 0x758, size 0x4, align 4
    int32 m_nFailedChordClickTimes; // offset 0x75C, size 0x4, align 4
    int32 m_flFailedChordClickCooldown; // offset 0x760, size 0x4, align 4
    char _pad_0764[0x4]; // offset 0x764
};
