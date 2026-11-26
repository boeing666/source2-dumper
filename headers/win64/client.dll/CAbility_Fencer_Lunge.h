#pragma once

class CAbility_Fencer_Lunge : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x2868, align 0x8 [vtable] (client) {MAbilityDynamicValuesSuppressCacheWhileActive}
{
public:
    char _pad_0000[0x16E2]; // offset 0x0
    uint8 m_nCurrentLungeState; // offset 0x16E2, size 0x1, align 1
    char _pad_16E3[0x1]; // offset 0x16E3
    GameTime_t m_flStateStartTime; // offset 0x16E4, size 0x4, align 255
    VectorWS m_vDashStartPos; // offset 0x16E8, size 0xC, align 4
    Vector m_vDashDirection; // offset 0x16F4, size 0xC, align 4
    Vector m_vLookDirection; // offset 0x1700, size 0xC, align 4
    Vector m_vStrikeDirection; // offset 0x170C, size 0xC, align 4
    bool m_bStartedInAir; // offset 0x1718, size 0x1, align 1
    uint8 m_iRemainingCasts; // offset 0x1719, size 0x1, align 1
    char _pad_171A[0x2]; // offset 0x171A
    GameTime_t m_RecastEndTime; // offset 0x171C, size 0x4, align 255
    GameTime_t m_FirstCastTime; // offset 0x1720, size 0x4, align 255
    uint8 m_eLungeDirection; // offset 0x1724, size 0x1, align 1
    char _pad_1725[0x3]; // offset 0x1725
    float32 m_flHeldTime; // offset 0x1728, size 0x4, align 4
    char _pad_172C[0x4]; // offset 0x172C
    CUtlVector< CHandle< C_BaseEntity > > m_vecHitEnemies; // offset 0x1730, size 0x18, align 8
    VectorWS m_vLastPosition; // offset 0x1748, size 0xC, align 4
    GameTime_t m_flStuckTime; // offset 0x1754, size 0x4, align 255
    char _pad_1758[0x4]; // offset 0x1758
    ParticleIndex_t m_nGlintParticleIndex; // offset 0x175C, size 0x4, align 255
    char _pad_1760[0x284]; // offset 0x1760
    float32 m_flLastOuterCircleProgress; // offset 0x19E4, size 0x4, align 4
    char _pad_19E8[0x8]; // offset 0x19E8
    int32 m_nPowerLevel; // offset 0x19F0, size 0x4, align 4
    char _pad_19F4[0xE74]; // offset 0x19F4
};
