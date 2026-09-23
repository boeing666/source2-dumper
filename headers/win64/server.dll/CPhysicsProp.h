#pragma once

class CPhysicsProp : public CBreakableProp /*0x0*/  // sizeof 0xD10, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xBE0]; // offset 0x0
    CEntityIOOutput m_MotionEnabled; // offset 0xBE0, size 0x18, align 255
    CEntityIOOutput m_OnAwakened; // offset 0xBF8, size 0x18, align 255
    CEntityIOOutput m_OnAwake; // offset 0xC10, size 0x18, align 255
    CEntityIOOutput m_OnAsleep; // offset 0xC28, size 0x18, align 255
    CEntityIOOutput m_OnPlayerUse; // offset 0xC40, size 0x18, align 255
    CEntityIOOutput m_OnOutOfWorld; // offset 0xC58, size 0x18, align 255
    CEntityIOOutput m_OnPlayerPickup; // offset 0xC70, size 0x18, align 255
    bool m_bForceNavIgnore; // offset 0xC88, size 0x1, align 1
    bool m_bNoNavmeshBlocker; // offset 0xC89, size 0x1, align 1
    bool m_bForceNpcExclude; // offset 0xC8A, size 0x1, align 1
    char _pad_0C8B[0x1]; // offset 0xC8B
    float32 m_massScale; // offset 0xC8C, size 0x4, align 4
    float32 m_buoyancyScale; // offset 0xC90, size 0x4, align 4
    int32 m_damageType; // offset 0xC94, size 0x4, align 4
    int32 m_damageToEnableMotion; // offset 0xC98, size 0x4, align 4
    float32 m_flForceToEnableMotion; // offset 0xC9C, size 0x4, align 4
    bool m_bDroppedByPlayer; // offset 0xCA0, size 0x1, align 1
    bool m_bTouchedByPlayer; // offset 0xCA1, size 0x1, align 1
    bool m_bFirstCollisionAfterLaunch; // offset 0xCA2, size 0x1, align 1
    bool m_bHasBeenAwakened; // offset 0xCA3, size 0x1, align 1 | MNotSaved
    bool m_bIsOverrideProp; // offset 0xCA4, size 0x1, align 1 | MNotSaved
    char _pad_0CA5[0x3]; // offset 0xCA5
    GameTime_t m_flLastBurn; // offset 0xCA8, size 0x4, align 255
    DynamicContinuousContactBehavior_t m_nDynamicContinuousContactBehavior; // offset 0xCAC, size 0x1, align 1
    char _pad_0CAD[0x3]; // offset 0xCAD
    GameTime_t m_fNextCheckDisableMotionContactsTime; // offset 0xCB0, size 0x4, align 255 | MNotSaved
    int32 m_iInitialGlowState; // offset 0xCB4, size 0x4, align 4
    int32 m_nGlowRange; // offset 0xCB8, size 0x4, align 4
    int32 m_nGlowRangeMin; // offset 0xCBC, size 0x4, align 4
    Color m_glowColor; // offset 0xCC0, size 0x4, align 4
    bool m_bShouldAutoConvertBackFromDebris; // offset 0xCC4, size 0x1, align 1
    bool m_bMuteImpactEffects; // offset 0xCC5, size 0x1, align 1
    char _pad_0CC6[0x2]; // offset 0xCC6
    INavObstacle::NavObstacleType_t m_nNavObstacleType; // offset 0xCC8, size 0x4, align 4
    bool m_bUpdateNavWhenMoving; // offset 0xCCC, size 0x1, align 1
    bool m_bForceNavObstacleCut; // offset 0xCCD, size 0x1, align 1
    bool m_bAcceptDamageFromHeldObjects; // offset 0xCCE, size 0x1, align 1
    bool m_bEnableUseOutput; // offset 0xCCF, size 0x1, align 1
    CPhysicsProp::CrateType_t m_CrateType; // offset 0xCD0, size 0x4, align 4
    char _pad_0CD4[0x4]; // offset 0xCD4
    CUtlSymbolLarge[4] m_strItemClass; // offset 0xCD8, size 0x20, align 8
    int32[4] m_nItemCount; // offset 0xCF8, size 0x10, align 4
    bool m_bRemovableForAmmoBalancing; // offset 0xD08, size 0x1, align 1
    bool m_bAwake; // offset 0xD09, size 0x1, align 1
    bool m_bAttachedToReferenceFrame; // offset 0xD0A, size 0x1, align 1
    char _pad_0D0B[0x5]; // offset 0xD0B
};
