#pragma once

class CAbility_Fencer_Lunge : public CCitadelBaseAbility /*0x0*/  // sizeof 0x2628, align 0x8 [vtable] (server) {MAbilityDynamicValuesSuppressCacheWhileActive}
{
public:
    char _pad_0000[0x14AA]; // offset 0x0
    uint8 m_nCurrentLungeState; // offset 0x14AA, size 0x1, align 1
    char _pad_14AB[0x1]; // offset 0x14AB
    GameTime_t m_flStateStartTime; // offset 0x14AC, size 0x4, align 255
    VectorWS m_vDashStartPos; // offset 0x14B0, size 0xC, align 4
    Vector m_vDashDirection; // offset 0x14BC, size 0xC, align 4
    Vector m_vLookDirection; // offset 0x14C8, size 0xC, align 4
    Vector m_vStrikeDirection; // offset 0x14D4, size 0xC, align 4
    bool m_bStartedInAir; // offset 0x14E0, size 0x1, align 1
    uint8 m_iRemainingCasts; // offset 0x14E1, size 0x1, align 1
    char _pad_14E2[0x2]; // offset 0x14E2
    GameTime_t m_RecastEndTime; // offset 0x14E4, size 0x4, align 255
    uint8 m_eLungeDirection; // offset 0x14E8, size 0x1, align 1
    char _pad_14E9[0x3]; // offset 0x14E9
    float32 m_flHeldTime; // offset 0x14EC, size 0x4, align 4
    CUtlVector< CHandle< CBaseEntity > > m_vecHitEnemies; // offset 0x14F0, size 0x18, align 8
    VectorWS m_vLastPosition; // offset 0x1508, size 0xC, align 4
    GameTime_t m_flStuckTime; // offset 0x1514, size 0x4, align 255
    char _pad_1518[0x4]; // offset 0x1518
    ParticleIndex_t m_nGlintParticleIndex; // offset 0x151C, size 0x4, align 255
    char _pad_1520[0x284]; // offset 0x1520
    float32 m_flLastOuterCircleProgress; // offset 0x17A4, size 0x4, align 4
    char _pad_17A8[0x8]; // offset 0x17A8
    int32 m_nPowerLevel; // offset 0x17B0, size 0x4, align 4
    char _pad_17B4[0xE74]; // offset 0x17B4
};
