#pragma once

class CPhysicsProp : public CBreakableProp /*0x0*/  // sizeof 0xE30, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xD00]; // offset 0x0
    CEntityIOOutput m_MotionEnabled; // offset 0xD00, size 0x18, align 255
    CEntityIOOutput m_OnAwakened; // offset 0xD18, size 0x18, align 255
    CEntityIOOutput m_OnAwake; // offset 0xD30, size 0x18, align 255
    CEntityIOOutput m_OnAsleep; // offset 0xD48, size 0x18, align 255
    CEntityIOOutput m_OnPlayerUse; // offset 0xD60, size 0x18, align 255
    CEntityIOOutput m_OnOutOfWorld; // offset 0xD78, size 0x18, align 255
    CEntityIOOutput m_OnPlayerPickup; // offset 0xD90, size 0x18, align 255
    bool m_bForceNavIgnore; // offset 0xDA8, size 0x1, align 1
    bool m_bNoNavmeshBlocker; // offset 0xDA9, size 0x1, align 1
    bool m_bForceNpcExclude; // offset 0xDAA, size 0x1, align 1
    char _pad_0DAB[0x1]; // offset 0xDAB
    float32 m_massScale; // offset 0xDAC, size 0x4, align 4
    float32 m_buoyancyScale; // offset 0xDB0, size 0x4, align 4
    int32 m_damageType; // offset 0xDB4, size 0x4, align 4
    int32 m_damageToEnableMotion; // offset 0xDB8, size 0x4, align 4
    float32 m_flForceToEnableMotion; // offset 0xDBC, size 0x4, align 4
    bool m_bDroppedByPlayer; // offset 0xDC0, size 0x1, align 1
    bool m_bTouchedByPlayer; // offset 0xDC1, size 0x1, align 1
    bool m_bFirstCollisionAfterLaunch; // offset 0xDC2, size 0x1, align 1
    bool m_bHasBeenAwakened; // offset 0xDC3, size 0x1, align 1 | MNotSaved
    bool m_bIsOverrideProp; // offset 0xDC4, size 0x1, align 1 | MNotSaved
    char _pad_0DC5[0x3]; // offset 0xDC5
    GameTime_t m_flLastBurn; // offset 0xDC8, size 0x4, align 255
    DynamicContinuousContactBehavior_t m_nDynamicContinuousContactBehavior; // offset 0xDCC, size 0x1, align 1
    char _pad_0DCD[0x3]; // offset 0xDCD
    GameTime_t m_fNextCheckDisableMotionContactsTime; // offset 0xDD0, size 0x4, align 255 | MNotSaved
    int32 m_iInitialGlowState; // offset 0xDD4, size 0x4, align 4
    int32 m_nGlowRange; // offset 0xDD8, size 0x4, align 4
    int32 m_nGlowRangeMin; // offset 0xDDC, size 0x4, align 4
    Color m_glowColor; // offset 0xDE0, size 0x4, align 4
    bool m_bShouldAutoConvertBackFromDebris; // offset 0xDE4, size 0x1, align 1
    bool m_bMuteImpactEffects; // offset 0xDE5, size 0x1, align 1
    char _pad_0DE6[0x2]; // offset 0xDE6
    INavObstacle::NavObstacleType_t m_nNavObstacleType; // offset 0xDE8, size 0x4, align 4
    bool m_bUpdateNavWhenMoving; // offset 0xDEC, size 0x1, align 1
    bool m_bForceNavObstacleCut; // offset 0xDED, size 0x1, align 1
    bool m_bAcceptDamageFromHeldObjects; // offset 0xDEE, size 0x1, align 1
    bool m_bEnableUseOutput; // offset 0xDEF, size 0x1, align 1
    CPhysicsProp::CrateType_t m_CrateType; // offset 0xDF0, size 0x4, align 4
    char _pad_0DF4[0x4]; // offset 0xDF4
    CUtlSymbolLarge[4] m_strItemClass; // offset 0xDF8, size 0x20, align 8
    int32[4] m_nItemCount; // offset 0xE18, size 0x10, align 4
    bool m_bRemovableForAmmoBalancing; // offset 0xE28, size 0x1, align 1
    bool m_bAwake; // offset 0xE29, size 0x1, align 1
    bool m_bAttachedToReferenceFrame; // offset 0xE2A, size 0x1, align 1
    char _pad_0E2B[0x5]; // offset 0xE2B
};
