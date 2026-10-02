#pragma once

class CPhysicsProp : public CBreakableProp /*0x0*/  // sizeof 0xDB0, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xC80]; // offset 0x0
    CEntityIOOutput m_MotionEnabled; // offset 0xC80, size 0x18, align 255
    CEntityIOOutput m_OnAwakened; // offset 0xC98, size 0x18, align 255
    CEntityIOOutput m_OnAwake; // offset 0xCB0, size 0x18, align 255
    CEntityIOOutput m_OnAsleep; // offset 0xCC8, size 0x18, align 255
    CEntityIOOutput m_OnPlayerUse; // offset 0xCE0, size 0x18, align 255
    CEntityIOOutput m_OnOutOfWorld; // offset 0xCF8, size 0x18, align 255
    CEntityIOOutput m_OnPlayerPickup; // offset 0xD10, size 0x18, align 255
    bool m_bForceNavIgnore; // offset 0xD28, size 0x1, align 1
    bool m_bNoNavmeshBlocker; // offset 0xD29, size 0x1, align 1
    bool m_bForceNpcExclude; // offset 0xD2A, size 0x1, align 1
    char _pad_0D2B[0x1]; // offset 0xD2B
    float32 m_massScale; // offset 0xD2C, size 0x4, align 4
    float32 m_buoyancyScale; // offset 0xD30, size 0x4, align 4
    int32 m_damageType; // offset 0xD34, size 0x4, align 4
    int32 m_damageToEnableMotion; // offset 0xD38, size 0x4, align 4
    float32 m_flForceToEnableMotion; // offset 0xD3C, size 0x4, align 4
    bool m_bDroppedByPlayer; // offset 0xD40, size 0x1, align 1
    bool m_bTouchedByPlayer; // offset 0xD41, size 0x1, align 1
    bool m_bFirstCollisionAfterLaunch; // offset 0xD42, size 0x1, align 1
    bool m_bHasBeenAwakened; // offset 0xD43, size 0x1, align 1 | MNotSaved
    bool m_bIsOverrideProp; // offset 0xD44, size 0x1, align 1 | MNotSaved
    char _pad_0D45[0x3]; // offset 0xD45
    GameTime_t m_flLastBurn; // offset 0xD48, size 0x4, align 255
    DynamicContinuousContactBehavior_t m_nDynamicContinuousContactBehavior; // offset 0xD4C, size 0x1, align 1
    char _pad_0D4D[0x3]; // offset 0xD4D
    GameTime_t m_fNextCheckDisableMotionContactsTime; // offset 0xD50, size 0x4, align 255 | MNotSaved
    int32 m_iInitialGlowState; // offset 0xD54, size 0x4, align 4
    int32 m_nGlowRange; // offset 0xD58, size 0x4, align 4
    int32 m_nGlowRangeMin; // offset 0xD5C, size 0x4, align 4
    Color m_glowColor; // offset 0xD60, size 0x4, align 4
    bool m_bShouldAutoConvertBackFromDebris; // offset 0xD64, size 0x1, align 1
    bool m_bMuteImpactEffects; // offset 0xD65, size 0x1, align 1
    char _pad_0D66[0x2]; // offset 0xD66
    INavObstacle::NavObstacleType_t m_nNavObstacleType; // offset 0xD68, size 0x4, align 4
    bool m_bUpdateNavWhenMoving; // offset 0xD6C, size 0x1, align 1
    bool m_bForceNavObstacleCut; // offset 0xD6D, size 0x1, align 1
    bool m_bAcceptDamageFromHeldObjects; // offset 0xD6E, size 0x1, align 1
    bool m_bEnableUseOutput; // offset 0xD6F, size 0x1, align 1
    CPhysicsProp::CrateType_t m_CrateType; // offset 0xD70, size 0x4, align 4
    char _pad_0D74[0x4]; // offset 0xD74
    CUtlSymbolLarge[4] m_strItemClass; // offset 0xD78, size 0x20, align 8
    int32[4] m_nItemCount; // offset 0xD98, size 0x10, align 4
    bool m_bRemovableForAmmoBalancing; // offset 0xDA8, size 0x1, align 1
    bool m_bAwake; // offset 0xDA9, size 0x1, align 1
    bool m_bAttachedToReferenceFrame; // offset 0xDAA, size 0x1, align 1
    char _pad_0DAB[0x5]; // offset 0xDAB
};
