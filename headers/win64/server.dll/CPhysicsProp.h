#pragma once

class CPhysicsProp : public CBreakableProp /*0x0*/  // sizeof 0xC30, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xB00]; // offset 0x0
    CEntityIOOutput m_MotionEnabled; // offset 0xB00, size 0x18, align 255
    CEntityIOOutput m_OnAwakened; // offset 0xB18, size 0x18, align 255
    CEntityIOOutput m_OnAwake; // offset 0xB30, size 0x18, align 255
    CEntityIOOutput m_OnAsleep; // offset 0xB48, size 0x18, align 255
    CEntityIOOutput m_OnPlayerUse; // offset 0xB60, size 0x18, align 255
    CEntityIOOutput m_OnOutOfWorld; // offset 0xB78, size 0x18, align 255
    CEntityIOOutput m_OnPlayerPickup; // offset 0xB90, size 0x18, align 255
    bool m_bForceNavIgnore; // offset 0xBA8, size 0x1, align 1
    bool m_bNoNavmeshBlocker; // offset 0xBA9, size 0x1, align 1
    bool m_bForceNpcExclude; // offset 0xBAA, size 0x1, align 1
    char _pad_0BAB[0x1]; // offset 0xBAB
    float32 m_massScale; // offset 0xBAC, size 0x4, align 4
    float32 m_buoyancyScale; // offset 0xBB0, size 0x4, align 4
    int32 m_damageType; // offset 0xBB4, size 0x4, align 4
    int32 m_damageToEnableMotion; // offset 0xBB8, size 0x4, align 4
    float32 m_flForceToEnableMotion; // offset 0xBBC, size 0x4, align 4
    bool m_bThrownByPlayer; // offset 0xBC0, size 0x1, align 1
    bool m_bDroppedByPlayer; // offset 0xBC1, size 0x1, align 1
    bool m_bTouchedByPlayer; // offset 0xBC2, size 0x1, align 1
    bool m_bFirstCollisionAfterLaunch; // offset 0xBC3, size 0x1, align 1
    bool m_bHasBeenAwakened; // offset 0xBC4, size 0x1, align 1 | MNotSaved
    bool m_bIsOverrideProp; // offset 0xBC5, size 0x1, align 1 | MNotSaved
    char _pad_0BC6[0x2]; // offset 0xBC6
    GameTime_t m_flLastBurn; // offset 0xBC8, size 0x4, align 255
    DynamicContinuousContactBehavior_t m_nDynamicContinuousContactBehavior; // offset 0xBCC, size 0x1, align 1
    char _pad_0BCD[0x3]; // offset 0xBCD
    GameTime_t m_fNextCheckDisableMotionContactsTime; // offset 0xBD0, size 0x4, align 255 | MNotSaved
    int32 m_iInitialGlowState; // offset 0xBD4, size 0x4, align 4
    int32 m_nGlowRange; // offset 0xBD8, size 0x4, align 4
    int32 m_nGlowRangeMin; // offset 0xBDC, size 0x4, align 4
    Color m_glowColor; // offset 0xBE0, size 0x4, align 1
    bool m_bShouldAutoConvertBackFromDebris; // offset 0xBE4, size 0x1, align 1
    bool m_bMuteImpactEffects; // offset 0xBE5, size 0x1, align 1
    char _pad_0BE6[0x2]; // offset 0xBE6
    INavObstacle::NavObstacleType_t m_nNavObstacleType; // offset 0xBE8, size 0x4, align 4
    bool m_bUpdateNavWhenMoving; // offset 0xBEC, size 0x1, align 1
    bool m_bForceNavObstacleCut; // offset 0xBED, size 0x1, align 1
    bool m_bAllowObstacleConvexHullMerging; // offset 0xBEE, size 0x1, align 1
    bool m_bAcceptDamageFromHeldObjects; // offset 0xBEF, size 0x1, align 1
    bool m_bEnableUseOutput; // offset 0xBF0, size 0x1, align 1
    char _pad_0BF1[0x3]; // offset 0xBF1
    CPhysicsProp::CrateType_t m_CrateType; // offset 0xBF4, size 0x4, align 4
    CUtlSymbolLarge[4] m_strItemClass; // offset 0xBF8, size 0x20, align 8
    int32[4] m_nItemCount; // offset 0xC18, size 0x10, align 4
    bool m_bRemovableForAmmoBalancing; // offset 0xC28, size 0x1, align 1
    bool m_bAwake; // offset 0xC29, size 0x1, align 1
    bool m_bAttachedToReferenceFrame; // offset 0xC2A, size 0x1, align 1
    char _pad_0C2B[0x5]; // offset 0xC2B
};
