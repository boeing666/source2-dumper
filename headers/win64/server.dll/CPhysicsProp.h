#pragma once

class CPhysicsProp : public CBreakableProp /*0x0*/  // sizeof 0xBD0, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xAA0]; // offset 0x0
    CEntityIOOutput m_MotionEnabled; // offset 0xAA0, size 0x18, align 255
    CEntityIOOutput m_OnAwakened; // offset 0xAB8, size 0x18, align 255
    CEntityIOOutput m_OnAwake; // offset 0xAD0, size 0x18, align 255
    CEntityIOOutput m_OnAsleep; // offset 0xAE8, size 0x18, align 255
    CEntityIOOutput m_OnPlayerUse; // offset 0xB00, size 0x18, align 255
    CEntityIOOutput m_OnOutOfWorld; // offset 0xB18, size 0x18, align 255
    CEntityIOOutput m_OnPlayerPickup; // offset 0xB30, size 0x18, align 255
    bool m_bForceNavIgnore; // offset 0xB48, size 0x1, align 1
    bool m_bNoNavmeshBlocker; // offset 0xB49, size 0x1, align 1
    bool m_bForceNpcExclude; // offset 0xB4A, size 0x1, align 1
    char _pad_0B4B[0x1]; // offset 0xB4B
    float32 m_massScale; // offset 0xB4C, size 0x4, align 4
    float32 m_buoyancyScale; // offset 0xB50, size 0x4, align 4
    int32 m_damageType; // offset 0xB54, size 0x4, align 4
    int32 m_damageToEnableMotion; // offset 0xB58, size 0x4, align 4
    float32 m_flForceToEnableMotion; // offset 0xB5C, size 0x4, align 4
    bool m_bDroppedByPlayer; // offset 0xB60, size 0x1, align 1
    bool m_bTouchedByPlayer; // offset 0xB61, size 0x1, align 1
    bool m_bFirstCollisionAfterLaunch; // offset 0xB62, size 0x1, align 1
    bool m_bHasBeenAwakened; // offset 0xB63, size 0x1, align 1 | MNotSaved
    bool m_bIsOverrideProp; // offset 0xB64, size 0x1, align 1 | MNotSaved
    char _pad_0B65[0x3]; // offset 0xB65
    GameTime_t m_flLastBurn; // offset 0xB68, size 0x4, align 255
    DynamicContinuousContactBehavior_t m_nDynamicContinuousContactBehavior; // offset 0xB6C, size 0x1, align 1
    char _pad_0B6D[0x3]; // offset 0xB6D
    GameTime_t m_fNextCheckDisableMotionContactsTime; // offset 0xB70, size 0x4, align 255 | MNotSaved
    int32 m_iInitialGlowState; // offset 0xB74, size 0x4, align 4
    int32 m_nGlowRange; // offset 0xB78, size 0x4, align 4
    int32 m_nGlowRangeMin; // offset 0xB7C, size 0x4, align 4
    Color m_glowColor; // offset 0xB80, size 0x4, align 4
    bool m_bShouldAutoConvertBackFromDebris; // offset 0xB84, size 0x1, align 1
    bool m_bMuteImpactEffects; // offset 0xB85, size 0x1, align 1
    char _pad_0B86[0x2]; // offset 0xB86
    INavObstacle::NavObstacleType_t m_nNavObstacleType; // offset 0xB88, size 0x4, align 4
    bool m_bUpdateNavWhenMoving; // offset 0xB8C, size 0x1, align 1
    bool m_bForceNavObstacleCut; // offset 0xB8D, size 0x1, align 1
    bool m_bAcceptDamageFromHeldObjects; // offset 0xB8E, size 0x1, align 1
    bool m_bEnableUseOutput; // offset 0xB8F, size 0x1, align 1
    CPhysicsProp::CrateType_t m_CrateType; // offset 0xB90, size 0x4, align 4
    char _pad_0B94[0x4]; // offset 0xB94
    CUtlSymbolLarge[4] m_strItemClass; // offset 0xB98, size 0x20, align 8
    int32[4] m_nItemCount; // offset 0xBB8, size 0x10, align 4
    bool m_bRemovableForAmmoBalancing; // offset 0xBC8, size 0x1, align 1
    bool m_bAwake; // offset 0xBC9, size 0x1, align 1
    bool m_bAttachedToReferenceFrame; // offset 0xBCA, size 0x1, align 1
    char _pad_0BCB[0x5]; // offset 0xBCB
};
