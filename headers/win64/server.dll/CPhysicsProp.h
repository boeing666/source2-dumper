#pragma once

class CPhysicsProp : public CBreakableProp /*0x0*/  // sizeof 0xD60, align 0x10 [vtable] (server) {MNetworkExcludeByName MNetworkExcludeByUserGroup MNetworkExcludeByName MNetworkExcludeByUserGroup MNetworkIncludeByName MNetworkVarNames}
{
public:
    char _pad_0000[0xC30]; // offset 0x0
    CEntityIOOutput m_MotionEnabled; // offset 0xC30, size 0x18, align 255
    CEntityIOOutput m_OnAwakened; // offset 0xC48, size 0x18, align 255
    CEntityIOOutput m_OnAwake; // offset 0xC60, size 0x18, align 255
    CEntityIOOutput m_OnAsleep; // offset 0xC78, size 0x18, align 255
    CEntityIOOutput m_OnPlayerUse; // offset 0xC90, size 0x18, align 255
    CEntityIOOutput m_OnOutOfWorld; // offset 0xCA8, size 0x18, align 255
    CEntityIOOutput m_OnPlayerPickup; // offset 0xCC0, size 0x18, align 255
    bool m_bForceNavIgnore; // offset 0xCD8, size 0x1, align 1
    bool m_bNoNavmeshBlocker; // offset 0xCD9, size 0x1, align 1
    bool m_bForceNpcExclude; // offset 0xCDA, size 0x1, align 1
    char _pad_0CDB[0x1]; // offset 0xCDB
    float32 m_massScale; // offset 0xCDC, size 0x4, align 4
    float32 m_buoyancyScale; // offset 0xCE0, size 0x4, align 4
    int32 m_damageType; // offset 0xCE4, size 0x4, align 4
    int32 m_damageToEnableMotion; // offset 0xCE8, size 0x4, align 4
    float32 m_flForceToEnableMotion; // offset 0xCEC, size 0x4, align 4
    bool m_bThrownByPlayer; // offset 0xCF0, size 0x1, align 1
    bool m_bDroppedByPlayer; // offset 0xCF1, size 0x1, align 1
    bool m_bTouchedByPlayer; // offset 0xCF2, size 0x1, align 1
    bool m_bFirstCollisionAfterLaunch; // offset 0xCF3, size 0x1, align 1
    bool m_bHasBeenAwakened; // offset 0xCF4, size 0x1, align 1 | MNotSaved
    bool m_bIsOverrideProp; // offset 0xCF5, size 0x1, align 1 | MNotSaved
    char _pad_0CF6[0x2]; // offset 0xCF6
    GameTime_t m_flLastBurn; // offset 0xCF8, size 0x4, align 255
    DynamicContinuousContactBehavior_t m_nDynamicContinuousContactBehavior; // offset 0xCFC, size 0x1, align 1
    char _pad_0CFD[0x3]; // offset 0xCFD
    GameTime_t m_fNextCheckDisableMotionContactsTime; // offset 0xD00, size 0x4, align 255 | MNotSaved
    int32 m_iInitialGlowState; // offset 0xD04, size 0x4, align 4
    int32 m_nGlowRange; // offset 0xD08, size 0x4, align 4
    int32 m_nGlowRangeMin; // offset 0xD0C, size 0x4, align 4
    Color m_glowColor; // offset 0xD10, size 0x4, align 1
    bool m_bShouldAutoConvertBackFromDebris; // offset 0xD14, size 0x1, align 1
    bool m_bMuteImpactEffects; // offset 0xD15, size 0x1, align 1
    char _pad_0D16[0x2]; // offset 0xD16
    INavObstacle::NavObstacleType_t m_nNavObstacleType; // offset 0xD18, size 0x4, align 4
    bool m_bUpdateNavWhenMoving; // offset 0xD1C, size 0x1, align 1
    bool m_bForceNavObstacleCut; // offset 0xD1D, size 0x1, align 1
    bool m_bAllowObstacleConvexHullMerging; // offset 0xD1E, size 0x1, align 1
    bool m_bAcceptDamageFromHeldObjects; // offset 0xD1F, size 0x1, align 1
    bool m_bEnableUseOutput; // offset 0xD20, size 0x1, align 1
    char _pad_0D21[0x3]; // offset 0xD21
    CPhysicsProp::CrateType_t m_CrateType; // offset 0xD24, size 0x4, align 4
    CUtlSymbolLarge[4] m_strItemClass; // offset 0xD28, size 0x20, align 8
    int32[4] m_nItemCount; // offset 0xD48, size 0x10, align 4
    bool m_bRemovableForAmmoBalancing; // offset 0xD58, size 0x1, align 1
    bool m_bAwake; // offset 0xD59, size 0x1, align 1 | MNetworkEnable
    bool m_bAttachedToReferenceFrame; // offset 0xD5A, size 0x1, align 1
    char _pad_0D5B[0x5]; // offset 0xD5B
};
