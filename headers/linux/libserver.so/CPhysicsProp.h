#pragma once

class CPhysicsProp : public CBreakableProp /*0x0*/  // sizeof 0xEB0, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xD80]; // offset 0x0
    CEntityIOOutput m_MotionEnabled; // offset 0xD80, size 0x18, align 255
    CEntityIOOutput m_OnAwakened; // offset 0xD98, size 0x18, align 255
    CEntityIOOutput m_OnAwake; // offset 0xDB0, size 0x18, align 255
    CEntityIOOutput m_OnAsleep; // offset 0xDC8, size 0x18, align 255
    CEntityIOOutput m_OnPlayerUse; // offset 0xDE0, size 0x18, align 255
    CEntityIOOutput m_OnOutOfWorld; // offset 0xDF8, size 0x18, align 255
    CEntityIOOutput m_OnPlayerPickup; // offset 0xE10, size 0x18, align 255
    bool m_bForceNavIgnore; // offset 0xE28, size 0x1, align 1
    bool m_bNoNavmeshBlocker; // offset 0xE29, size 0x1, align 1
    bool m_bForceNpcExclude; // offset 0xE2A, size 0x1, align 1
    char _pad_0E2B[0x1]; // offset 0xE2B
    float32 m_massScale; // offset 0xE2C, size 0x4, align 4
    float32 m_buoyancyScale; // offset 0xE30, size 0x4, align 4
    int32 m_damageType; // offset 0xE34, size 0x4, align 4
    int32 m_damageToEnableMotion; // offset 0xE38, size 0x4, align 4
    float32 m_flForceToEnableMotion; // offset 0xE3C, size 0x4, align 4
    bool m_bDroppedByPlayer; // offset 0xE40, size 0x1, align 1
    bool m_bTouchedByPlayer; // offset 0xE41, size 0x1, align 1
    bool m_bFirstCollisionAfterLaunch; // offset 0xE42, size 0x1, align 1
    bool m_bHasBeenAwakened; // offset 0xE43, size 0x1, align 1 | MNotSaved
    bool m_bIsOverrideProp; // offset 0xE44, size 0x1, align 1 | MNotSaved
    char _pad_0E45[0x3]; // offset 0xE45
    GameTime_t m_flLastBurn; // offset 0xE48, size 0x4, align 255
    DynamicContinuousContactBehavior_t m_nDynamicContinuousContactBehavior; // offset 0xE4C, size 0x1, align 1
    char _pad_0E4D[0x3]; // offset 0xE4D
    GameTime_t m_fNextCheckDisableMotionContactsTime; // offset 0xE50, size 0x4, align 255 | MNotSaved
    int32 m_iInitialGlowState; // offset 0xE54, size 0x4, align 4
    int32 m_nGlowRange; // offset 0xE58, size 0x4, align 4
    int32 m_nGlowRangeMin; // offset 0xE5C, size 0x4, align 4
    Color m_glowColor; // offset 0xE60, size 0x4, align 4
    bool m_bShouldAutoConvertBackFromDebris; // offset 0xE64, size 0x1, align 1
    bool m_bMuteImpactEffects; // offset 0xE65, size 0x1, align 1
    char _pad_0E66[0x2]; // offset 0xE66
    INavObstacle::NavObstacleType_t m_nNavObstacleType; // offset 0xE68, size 0x4, align 4
    bool m_bUpdateNavWhenMoving; // offset 0xE6C, size 0x1, align 1
    bool m_bForceNavObstacleCut; // offset 0xE6D, size 0x1, align 1
    bool m_bAcceptDamageFromHeldObjects; // offset 0xE6E, size 0x1, align 1
    bool m_bEnableUseOutput; // offset 0xE6F, size 0x1, align 1
    CPhysicsProp::CrateType_t m_CrateType; // offset 0xE70, size 0x4, align 4
    char _pad_0E74[0x4]; // offset 0xE74
    CUtlSymbolLarge[4] m_strItemClass; // offset 0xE78, size 0x20, align 8
    int32[4] m_nItemCount; // offset 0xE98, size 0x10, align 4
    bool m_bRemovableForAmmoBalancing; // offset 0xEA8, size 0x1, align 1
    bool m_bAwake; // offset 0xEA9, size 0x1, align 1
    bool m_bAttachedToReferenceFrame; // offset 0xEAA, size 0x1, align 1
    char _pad_0EAB[0x5]; // offset 0xEAB
};
