#pragma once

class CPhysicsProp : public CBreakableProp /*0x0*/  // sizeof 0xFF0, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xEB8]; // offset 0x0
    CEntityIOOutput m_MotionEnabled; // offset 0xEB8, size 0x18, align 255
    CEntityIOOutput m_OnAwakened; // offset 0xED0, size 0x18, align 255
    CEntityIOOutput m_OnAwake; // offset 0xEE8, size 0x18, align 255
    CEntityIOOutput m_OnAsleep; // offset 0xF00, size 0x18, align 255
    CEntityIOOutput m_OnPlayerUse; // offset 0xF18, size 0x18, align 255
    CEntityIOOutput m_OnOutOfWorld; // offset 0xF30, size 0x18, align 255
    CEntityIOOutput m_OnPlayerPickup; // offset 0xF48, size 0x18, align 255
    bool m_bForceNavIgnore; // offset 0xF60, size 0x1, align 1
    bool m_bNoNavmeshBlocker; // offset 0xF61, size 0x1, align 1
    bool m_bForceNpcExclude; // offset 0xF62, size 0x1, align 1
    char _pad_0F63[0x1]; // offset 0xF63
    float32 m_massScale; // offset 0xF64, size 0x4, align 4
    float32 m_buoyancyScale; // offset 0xF68, size 0x4, align 4
    int32 m_damageType; // offset 0xF6C, size 0x4, align 4
    int32 m_damageToEnableMotion; // offset 0xF70, size 0x4, align 4
    float32 m_flForceToEnableMotion; // offset 0xF74, size 0x4, align 4
    bool m_bDroppedByPlayer; // offset 0xF78, size 0x1, align 1
    bool m_bTouchedByPlayer; // offset 0xF79, size 0x1, align 1
    bool m_bFirstCollisionAfterLaunch; // offset 0xF7A, size 0x1, align 1
    bool m_bHasBeenAwakened; // offset 0xF7B, size 0x1, align 1 | MNotSaved
    bool m_bIsOverrideProp; // offset 0xF7C, size 0x1, align 1 | MNotSaved
    char _pad_0F7D[0x3]; // offset 0xF7D
    GameTime_t m_flLastBurn; // offset 0xF80, size 0x4, align 255
    DynamicContinuousContactBehavior_t m_nDynamicContinuousContactBehavior; // offset 0xF84, size 0x1, align 1
    char _pad_0F85[0x3]; // offset 0xF85
    GameTime_t m_fNextCheckDisableMotionContactsTime; // offset 0xF88, size 0x4, align 255 | MNotSaved
    int32 m_iInitialGlowState; // offset 0xF8C, size 0x4, align 4
    int32 m_nGlowRange; // offset 0xF90, size 0x4, align 4
    int32 m_nGlowRangeMin; // offset 0xF94, size 0x4, align 4
    Color m_glowColor; // offset 0xF98, size 0x4, align 4
    bool m_bShouldAutoConvertBackFromDebris; // offset 0xF9C, size 0x1, align 1
    bool m_bMuteImpactEffects; // offset 0xF9D, size 0x1, align 1
    char _pad_0F9E[0x2]; // offset 0xF9E
    INavObstacle::NavObstacleType_t m_nNavObstacleType; // offset 0xFA0, size 0x4, align 4
    bool m_bUpdateNavWhenMoving; // offset 0xFA4, size 0x1, align 1
    bool m_bForceNavObstacleCut; // offset 0xFA5, size 0x1, align 1
    bool m_bAcceptDamageFromHeldObjects; // offset 0xFA6, size 0x1, align 1
    bool m_bEnableUseOutput; // offset 0xFA7, size 0x1, align 1
    CPhysicsProp::CrateType_t m_CrateType; // offset 0xFA8, size 0x4, align 4
    char _pad_0FAC[0x4]; // offset 0xFAC
    CUtlSymbolLarge[4] m_strItemClass; // offset 0xFB0, size 0x20, align 8
    int32[4] m_nItemCount; // offset 0xFD0, size 0x10, align 4
    bool m_bRemovableForAmmoBalancing; // offset 0xFE0, size 0x1, align 1
    bool m_bAwake; // offset 0xFE1, size 0x1, align 1
    bool m_bAttachedToReferenceFrame; // offset 0xFE2, size 0x1, align 1
    char _pad_0FE3[0xD]; // offset 0xFE3
};
