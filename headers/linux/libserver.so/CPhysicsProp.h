#pragma once

class CPhysicsProp : public CBreakableProp /*0x0*/  // sizeof 0xF10, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xDD8]; // offset 0x0
    CEntityIOOutput m_MotionEnabled; // offset 0xDD8, size 0x18, align 255
    CEntityIOOutput m_OnAwakened; // offset 0xDF0, size 0x18, align 255
    CEntityIOOutput m_OnAwake; // offset 0xE08, size 0x18, align 255
    CEntityIOOutput m_OnAsleep; // offset 0xE20, size 0x18, align 255
    CEntityIOOutput m_OnPlayerUse; // offset 0xE38, size 0x18, align 255
    CEntityIOOutput m_OnOutOfWorld; // offset 0xE50, size 0x18, align 255
    CEntityIOOutput m_OnPlayerPickup; // offset 0xE68, size 0x18, align 255
    bool m_bForceNavIgnore; // offset 0xE80, size 0x1, align 1
    bool m_bNoNavmeshBlocker; // offset 0xE81, size 0x1, align 1
    bool m_bForceNpcExclude; // offset 0xE82, size 0x1, align 1
    char _pad_0E83[0x1]; // offset 0xE83
    float32 m_massScale; // offset 0xE84, size 0x4, align 4
    float32 m_buoyancyScale; // offset 0xE88, size 0x4, align 4
    int32 m_damageType; // offset 0xE8C, size 0x4, align 4
    int32 m_damageToEnableMotion; // offset 0xE90, size 0x4, align 4
    float32 m_flForceToEnableMotion; // offset 0xE94, size 0x4, align 4
    bool m_bThrownByPlayer; // offset 0xE98, size 0x1, align 1
    bool m_bDroppedByPlayer; // offset 0xE99, size 0x1, align 1
    bool m_bTouchedByPlayer; // offset 0xE9A, size 0x1, align 1
    bool m_bFirstCollisionAfterLaunch; // offset 0xE9B, size 0x1, align 1
    bool m_bHasBeenAwakened; // offset 0xE9C, size 0x1, align 1 | MNotSaved
    bool m_bIsOverrideProp; // offset 0xE9D, size 0x1, align 1 | MNotSaved
    char _pad_0E9E[0x2]; // offset 0xE9E
    GameTime_t m_flLastBurn; // offset 0xEA0, size 0x4, align 255
    DynamicContinuousContactBehavior_t m_nDynamicContinuousContactBehavior; // offset 0xEA4, size 0x1, align 1
    char _pad_0EA5[0x3]; // offset 0xEA5
    GameTime_t m_fNextCheckDisableMotionContactsTime; // offset 0xEA8, size 0x4, align 255 | MNotSaved
    int32 m_iInitialGlowState; // offset 0xEAC, size 0x4, align 4
    int32 m_nGlowRange; // offset 0xEB0, size 0x4, align 4
    int32 m_nGlowRangeMin; // offset 0xEB4, size 0x4, align 4
    Color m_glowColor; // offset 0xEB8, size 0x4, align 1
    bool m_bShouldAutoConvertBackFromDebris; // offset 0xEBC, size 0x1, align 1
    bool m_bMuteImpactEffects; // offset 0xEBD, size 0x1, align 1
    char _pad_0EBE[0x2]; // offset 0xEBE
    INavObstacle::NavObstacleType_t m_nNavObstacleType; // offset 0xEC0, size 0x4, align 4
    bool m_bUpdateNavWhenMoving; // offset 0xEC4, size 0x1, align 1
    bool m_bForceNavObstacleCut; // offset 0xEC5, size 0x1, align 1
    bool m_bAllowObstacleConvexHullMerging; // offset 0xEC6, size 0x1, align 1
    bool m_bAcceptDamageFromHeldObjects; // offset 0xEC7, size 0x1, align 1
    bool m_bEnableUseOutput; // offset 0xEC8, size 0x1, align 1
    char _pad_0EC9[0x3]; // offset 0xEC9
    CPhysicsProp::CrateType_t m_CrateType; // offset 0xECC, size 0x4, align 4
    CUtlSymbolLarge[4] m_strItemClass; // offset 0xED0, size 0x20, align 8
    int32[4] m_nItemCount; // offset 0xEF0, size 0x10, align 4
    bool m_bRemovableForAmmoBalancing; // offset 0xF00, size 0x1, align 1
    bool m_bAwake; // offset 0xF01, size 0x1, align 1
    bool m_bAttachedToReferenceFrame; // offset 0xF02, size 0x1, align 1
    char _pad_0F03[0xD]; // offset 0xF03
};
