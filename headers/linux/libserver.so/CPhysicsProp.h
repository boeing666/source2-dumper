#pragma once

class CPhysicsProp : public CBreakableProp /*0x0*/  // sizeof 0xD40, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xC08]; // offset 0x0
    CEntityIOOutput m_MotionEnabled; // offset 0xC08, size 0x18, align 255
    CEntityIOOutput m_OnAwakened; // offset 0xC20, size 0x18, align 255
    CEntityIOOutput m_OnAwake; // offset 0xC38, size 0x18, align 255
    CEntityIOOutput m_OnAsleep; // offset 0xC50, size 0x18, align 255
    CEntityIOOutput m_OnPlayerUse; // offset 0xC68, size 0x18, align 255
    CEntityIOOutput m_OnOutOfWorld; // offset 0xC80, size 0x18, align 255
    CEntityIOOutput m_OnPlayerPickup; // offset 0xC98, size 0x18, align 255
    bool m_bForceNavIgnore; // offset 0xCB0, size 0x1, align 1
    bool m_bNoNavmeshBlocker; // offset 0xCB1, size 0x1, align 1
    bool m_bForceNpcExclude; // offset 0xCB2, size 0x1, align 1
    char _pad_0CB3[0x1]; // offset 0xCB3
    float32 m_massScale; // offset 0xCB4, size 0x4, align 4
    float32 m_buoyancyScale; // offset 0xCB8, size 0x4, align 4
    int32 m_damageType; // offset 0xCBC, size 0x4, align 4
    int32 m_damageToEnableMotion; // offset 0xCC0, size 0x4, align 4
    float32 m_flForceToEnableMotion; // offset 0xCC4, size 0x4, align 4
    bool m_bThrownByPlayer; // offset 0xCC8, size 0x1, align 1
    bool m_bDroppedByPlayer; // offset 0xCC9, size 0x1, align 1
    bool m_bTouchedByPlayer; // offset 0xCCA, size 0x1, align 1
    bool m_bFirstCollisionAfterLaunch; // offset 0xCCB, size 0x1, align 1
    bool m_bHasBeenAwakened; // offset 0xCCC, size 0x1, align 1 | MNotSaved
    bool m_bIsOverrideProp; // offset 0xCCD, size 0x1, align 1 | MNotSaved
    char _pad_0CCE[0x2]; // offset 0xCCE
    GameTime_t m_flLastBurn; // offset 0xCD0, size 0x4, align 255
    DynamicContinuousContactBehavior_t m_nDynamicContinuousContactBehavior; // offset 0xCD4, size 0x1, align 1
    char _pad_0CD5[0x3]; // offset 0xCD5
    GameTime_t m_fNextCheckDisableMotionContactsTime; // offset 0xCD8, size 0x4, align 255 | MNotSaved
    int32 m_iInitialGlowState; // offset 0xCDC, size 0x4, align 4
    int32 m_nGlowRange; // offset 0xCE0, size 0x4, align 4
    int32 m_nGlowRangeMin; // offset 0xCE4, size 0x4, align 4
    Color m_glowColor; // offset 0xCE8, size 0x4, align 1
    bool m_bShouldAutoConvertBackFromDebris; // offset 0xCEC, size 0x1, align 1
    bool m_bMuteImpactEffects; // offset 0xCED, size 0x1, align 1
    char _pad_0CEE[0x2]; // offset 0xCEE
    INavObstacle::NavObstacleType_t m_nNavObstacleType; // offset 0xCF0, size 0x4, align 4
    bool m_bUpdateNavWhenMoving; // offset 0xCF4, size 0x1, align 1
    bool m_bForceNavObstacleCut; // offset 0xCF5, size 0x1, align 1
    bool m_bAllowObstacleConvexHullMerging; // offset 0xCF6, size 0x1, align 1
    bool m_bAcceptDamageFromHeldObjects; // offset 0xCF7, size 0x1, align 1
    bool m_bEnableUseOutput; // offset 0xCF8, size 0x1, align 1
    char _pad_0CF9[0x3]; // offset 0xCF9
    CPhysicsProp::CrateType_t m_CrateType; // offset 0xCFC, size 0x4, align 4
    CUtlSymbolLarge[4] m_strItemClass; // offset 0xD00, size 0x20, align 8
    int32[4] m_nItemCount; // offset 0xD20, size 0x10, align 4
    bool m_bRemovableForAmmoBalancing; // offset 0xD30, size 0x1, align 1
    bool m_bAwake; // offset 0xD31, size 0x1, align 1
    bool m_bAttachedToReferenceFrame; // offset 0xD32, size 0x1, align 1
    char _pad_0D33[0xD]; // offset 0xD33
};
