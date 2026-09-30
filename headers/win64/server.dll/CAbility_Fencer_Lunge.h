#pragma once

class CAbility_Fencer_Lunge : public CCitadelBaseAbility /*0x0*/  // sizeof 0x2620, align 0x8 [vtable] (server) {MAbilityDynamicValuesSuppressCacheWhileActive}
{
public:
    char _pad_0000[0x14A2]; // offset 0x0
    uint8 m_nCurrentLungeState; // offset 0x14A2, size 0x1, align 1
    char _pad_14A3[0x1]; // offset 0x14A3
    GameTime_t m_flStateStartTime; // offset 0x14A4, size 0x4, align 255
    VectorWS m_vDashStartPos; // offset 0x14A8, size 0xC, align 4
    Vector m_vDashDirection; // offset 0x14B4, size 0xC, align 4
    Vector m_vLookDirection; // offset 0x14C0, size 0xC, align 4
    Vector m_vStrikeDirection; // offset 0x14CC, size 0xC, align 4
    bool m_bStartedInAir; // offset 0x14D8, size 0x1, align 1
    uint8 m_iRemainingCasts; // offset 0x14D9, size 0x1, align 1
    char _pad_14DA[0x2]; // offset 0x14DA
    GameTime_t m_RecastEndTime; // offset 0x14DC, size 0x4, align 255
    uint8 m_eLungeDirection; // offset 0x14E0, size 0x1, align 1
    char _pad_14E1[0x3]; // offset 0x14E1
    float32 m_flHeldTime; // offset 0x14E4, size 0x4, align 4
    CUtlVector< CHandle< CBaseEntity > > m_vecHitEnemies; // offset 0x14E8, size 0x18, align 8
    VectorWS m_vLastPosition; // offset 0x1500, size 0xC, align 4
    GameTime_t m_flStuckTime; // offset 0x150C, size 0x4, align 255
    char _pad_1510[0x4]; // offset 0x1510
    ParticleIndex_t m_nGlintParticleIndex; // offset 0x1514, size 0x4, align 255
    char _pad_1518[0x284]; // offset 0x1518
    float32 m_flLastOuterCircleProgress; // offset 0x179C, size 0x4, align 4
    char _pad_17A0[0x8]; // offset 0x17A0
    int32 m_nPowerLevel; // offset 0x17A8, size 0x4, align 4
    char _pad_17AC[0xE74]; // offset 0x17AC
};
