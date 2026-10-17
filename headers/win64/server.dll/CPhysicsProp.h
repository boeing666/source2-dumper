#pragma once

class CPhysicsProp : public CBreakableProp /*0x0*/  // sizeof 0xB60, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xA30]; // offset 0x0
    CEntityIOOutput m_MotionEnabled; // offset 0xA30, size 0x18, align 255
    CEntityIOOutput m_OnAwakened; // offset 0xA48, size 0x18, align 255
    CEntityIOOutput m_OnAwake; // offset 0xA60, size 0x18, align 255
    CEntityIOOutput m_OnAsleep; // offset 0xA78, size 0x18, align 255
    CEntityIOOutput m_OnPlayerUse; // offset 0xA90, size 0x18, align 255
    CEntityIOOutput m_OnOutOfWorld; // offset 0xAA8, size 0x18, align 255
    CEntityIOOutput m_OnPlayerPickup; // offset 0xAC0, size 0x18, align 255
    bool m_bForceNavIgnore; // offset 0xAD8, size 0x1, align 1
    bool m_bNoNavmeshBlocker; // offset 0xAD9, size 0x1, align 1
    bool m_bForceNpcExclude; // offset 0xADA, size 0x1, align 1
    char _pad_0ADB[0x1]; // offset 0xADB
    float32 m_massScale; // offset 0xADC, size 0x4, align 4
    float32 m_buoyancyScale; // offset 0xAE0, size 0x4, align 4
    int32 m_damageType; // offset 0xAE4, size 0x4, align 4
    int32 m_damageToEnableMotion; // offset 0xAE8, size 0x4, align 4
    float32 m_flForceToEnableMotion; // offset 0xAEC, size 0x4, align 4
    bool m_bDroppedByPlayer; // offset 0xAF0, size 0x1, align 1
    bool m_bTouchedByPlayer; // offset 0xAF1, size 0x1, align 1
    bool m_bFirstCollisionAfterLaunch; // offset 0xAF2, size 0x1, align 1
    bool m_bHasBeenAwakened; // offset 0xAF3, size 0x1, align 1 | MNotSaved
    bool m_bIsOverrideProp; // offset 0xAF4, size 0x1, align 1 | MNotSaved
    char _pad_0AF5[0x3]; // offset 0xAF5
    GameTime_t m_flLastBurn; // offset 0xAF8, size 0x4, align 255
    DynamicContinuousContactBehavior_t m_nDynamicContinuousContactBehavior; // offset 0xAFC, size 0x1, align 1
    char _pad_0AFD[0x3]; // offset 0xAFD
    GameTime_t m_fNextCheckDisableMotionContactsTime; // offset 0xB00, size 0x4, align 255 | MNotSaved
    int32 m_iInitialGlowState; // offset 0xB04, size 0x4, align 4
    int32 m_nGlowRange; // offset 0xB08, size 0x4, align 4
    int32 m_nGlowRangeMin; // offset 0xB0C, size 0x4, align 4
    Color m_glowColor; // offset 0xB10, size 0x4, align 4
    bool m_bShouldAutoConvertBackFromDebris; // offset 0xB14, size 0x1, align 1
    bool m_bMuteImpactEffects; // offset 0xB15, size 0x1, align 1
    char _pad_0B16[0x2]; // offset 0xB16
    INavObstacle::NavObstacleType_t m_nNavObstacleType; // offset 0xB18, size 0x4, align 4
    bool m_bUpdateNavWhenMoving; // offset 0xB1C, size 0x1, align 1
    bool m_bForceNavObstacleCut; // offset 0xB1D, size 0x1, align 1
    bool m_bAcceptDamageFromHeldObjects; // offset 0xB1E, size 0x1, align 1
    bool m_bEnableUseOutput; // offset 0xB1F, size 0x1, align 1
    CPhysicsProp::CrateType_t m_CrateType; // offset 0xB20, size 0x4, align 4
    char _pad_0B24[0x4]; // offset 0xB24
    CUtlSymbolLarge[4] m_strItemClass; // offset 0xB28, size 0x20, align 8
    int32[4] m_nItemCount; // offset 0xB48, size 0x10, align 4
    bool m_bRemovableForAmmoBalancing; // offset 0xB58, size 0x1, align 1
    bool m_bAwake; // offset 0xB59, size 0x1, align 1
    bool m_bAttachedToReferenceFrame; // offset 0xB5A, size 0x1, align 1
    char _pad_0B5B[0x5]; // offset 0xB5B
};
