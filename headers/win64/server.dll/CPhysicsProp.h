#pragma once

class CPhysicsProp : public CBreakableProp /*0x0*/  // sizeof 0xA70, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0x940]; // offset 0x0
    CEntityIOOutput m_MotionEnabled; // offset 0x940, size 0x18, align 255
    CEntityIOOutput m_OnAwakened; // offset 0x958, size 0x18, align 255
    CEntityIOOutput m_OnAwake; // offset 0x970, size 0x18, align 255
    CEntityIOOutput m_OnAsleep; // offset 0x988, size 0x18, align 255
    CEntityIOOutput m_OnPlayerUse; // offset 0x9A0, size 0x18, align 255
    CEntityIOOutput m_OnOutOfWorld; // offset 0x9B8, size 0x18, align 255
    CEntityIOOutput m_OnPlayerPickup; // offset 0x9D0, size 0x18, align 255
    bool m_bForceNavIgnore; // offset 0x9E8, size 0x1, align 1
    bool m_bNoNavmeshBlocker; // offset 0x9E9, size 0x1, align 1
    bool m_bForceNpcExclude; // offset 0x9EA, size 0x1, align 1
    char _pad_09EB[0x1]; // offset 0x9EB
    float32 m_massScale; // offset 0x9EC, size 0x4, align 4
    float32 m_buoyancyScale; // offset 0x9F0, size 0x4, align 4
    int32 m_damageType; // offset 0x9F4, size 0x4, align 4
    int32 m_damageToEnableMotion; // offset 0x9F8, size 0x4, align 4
    float32 m_flForceToEnableMotion; // offset 0x9FC, size 0x4, align 4
    bool m_bThrownByPlayer; // offset 0xA00, size 0x1, align 1
    bool m_bDroppedByPlayer; // offset 0xA01, size 0x1, align 1
    bool m_bTouchedByPlayer; // offset 0xA02, size 0x1, align 1
    bool m_bFirstCollisionAfterLaunch; // offset 0xA03, size 0x1, align 1
    bool m_bHasBeenAwakened; // offset 0xA04, size 0x1, align 1 | MNotSaved
    bool m_bIsOverrideProp; // offset 0xA05, size 0x1, align 1 | MNotSaved
    char _pad_0A06[0x2]; // offset 0xA06
    GameTime_t m_flLastBurn; // offset 0xA08, size 0x4, align 255
    DynamicContinuousContactBehavior_t m_nDynamicContinuousContactBehavior; // offset 0xA0C, size 0x1, align 1
    char _pad_0A0D[0x3]; // offset 0xA0D
    GameTime_t m_fNextCheckDisableMotionContactsTime; // offset 0xA10, size 0x4, align 255 | MNotSaved
    int32 m_iInitialGlowState; // offset 0xA14, size 0x4, align 4
    int32 m_nGlowRange; // offset 0xA18, size 0x4, align 4
    int32 m_nGlowRangeMin; // offset 0xA1C, size 0x4, align 4
    Color m_glowColor; // offset 0xA20, size 0x4, align 1
    bool m_bShouldAutoConvertBackFromDebris; // offset 0xA24, size 0x1, align 1
    bool m_bMuteImpactEffects; // offset 0xA25, size 0x1, align 1
    char _pad_0A26[0x2]; // offset 0xA26
    INavObstacle::NavObstacleType_t m_nNavObstacleType; // offset 0xA28, size 0x4, align 4
    bool m_bUpdateNavWhenMoving; // offset 0xA2C, size 0x1, align 1
    bool m_bForceNavObstacleCut; // offset 0xA2D, size 0x1, align 1
    bool m_bAllowObstacleConvexHullMerging; // offset 0xA2E, size 0x1, align 1
    bool m_bAcceptDamageFromHeldObjects; // offset 0xA2F, size 0x1, align 1
    bool m_bEnableUseOutput; // offset 0xA30, size 0x1, align 1
    char _pad_0A31[0x3]; // offset 0xA31
    CPhysicsProp::CrateType_t m_CrateType; // offset 0xA34, size 0x4, align 4
    CUtlSymbolLarge[4] m_strItemClass; // offset 0xA38, size 0x20, align 8
    int32[4] m_nItemCount; // offset 0xA58, size 0x10, align 4
    bool m_bRemovableForAmmoBalancing; // offset 0xA68, size 0x1, align 1
    bool m_bAwake; // offset 0xA69, size 0x1, align 1
    bool m_bAttachedToReferenceFrame; // offset 0xA6A, size 0x1, align 1
    char _pad_0A6B[0x5]; // offset 0xA6B
};
