#pragma once

class CAbility_Fencer_Lunge : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x2858, align 0x8 [vtable] (client) {MAbilityDynamicValuesSuppressCacheWhileActive}
{
public:
    char _pad_0000[0x16DA]; // offset 0x0
    uint8 m_nCurrentLungeState; // offset 0x16DA, size 0x1, align 1
    char _pad_16DB[0x1]; // offset 0x16DB
    GameTime_t m_flStateStartTime; // offset 0x16DC, size 0x4, align 255
    VectorWS m_vDashStartPos; // offset 0x16E0, size 0xC, align 4
    Vector m_vDashDirection; // offset 0x16EC, size 0xC, align 4
    Vector m_vLookDirection; // offset 0x16F8, size 0xC, align 4
    Vector m_vStrikeDirection; // offset 0x1704, size 0xC, align 4
    bool m_bStartedInAir; // offset 0x1710, size 0x1, align 1
    uint8 m_iRemainingCasts; // offset 0x1711, size 0x1, align 1
    char _pad_1712[0x2]; // offset 0x1712
    GameTime_t m_RecastEndTime; // offset 0x1714, size 0x4, align 255
    uint8 m_eLungeDirection; // offset 0x1718, size 0x1, align 1
    char _pad_1719[0x3]; // offset 0x1719
    float32 m_flHeldTime; // offset 0x171C, size 0x4, align 4
    CUtlVector< CHandle< C_BaseEntity > > m_vecHitEnemies; // offset 0x1720, size 0x18, align 8
    VectorWS m_vLastPosition; // offset 0x1738, size 0xC, align 4
    GameTime_t m_flStuckTime; // offset 0x1744, size 0x4, align 255
    char _pad_1748[0x4]; // offset 0x1748
    ParticleIndex_t m_nGlintParticleIndex; // offset 0x174C, size 0x4, align 255
    char _pad_1750[0x284]; // offset 0x1750
    float32 m_flLastOuterCircleProgress; // offset 0x19D4, size 0x4, align 4
    char _pad_19D8[0x8]; // offset 0x19D8
    int32 m_nPowerLevel; // offset 0x19E0, size 0x4, align 4
    char _pad_19E4[0xE74]; // offset 0x19E4
};
