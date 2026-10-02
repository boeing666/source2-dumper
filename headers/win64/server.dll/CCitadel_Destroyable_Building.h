#pragma once

class CCitadel_Destroyable_Building : public CCitadelAnimatingModelEntity /*0x0*/  // sizeof 0x10B0, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xC50]; // offset 0x0
    CCitadelMinimapComponent m_CCitadelMinimapComponent; // offset 0xC50, size 0x20, align 255
    CEntityIOOutput m_OnDestroyed; // offset 0xC70, size 0x18, align 255
    CEntityIOOutput m_OnRevitilized; // offset 0xC88, size 0x18, align 255
    CEntityOutputTemplate< float32 > m_OnDamageTaken; // offset 0xCA0, size 0x20, align 8
    CEntityOutputTemplate< float32 > m_OnLifeChanged; // offset 0xCC0, size 0x20, align 8
    CEntityIOOutput m_OnBecomeActive; // offset 0xCE0, size 0x18, align 255
    CEntityIOOutput m_OnBecomeInvulnerable; // offset 0xCF8, size 0x18, align 255
    CEntityIOOutput m_OnBecomeVulnerable; // offset 0xD10, size 0x18, align 255
    CEntityIOOutput m_OnUnderAttack; // offset 0xD28, size 0x18, align 255
    CEntityIOOutput m_OnAttackSubsided; // offset 0xD40, size 0x18, align 255
    int32 m_nBuildingHealth; // offset 0xD58, size 0x4, align 4
    char _pad_0D5C[0x4]; // offset 0xD5C
    int32 m_iLane; // offset 0xD60, size 0x4, align 4
    GameTime_t m_flDestroyedTime; // offset 0xD64, size 0x4, align 255 | MNotSaved
    GameTime_t m_flLastDamagedTime; // offset 0xD68, size 0x4, align 255 | MNotSaved
    QAngle m_angOriginal; // offset 0xD6C, size 0xC, align 4 | MNotSaved
    char _pad_0D78[0x20]; // offset 0xD78
    CUtlSymbolLarge m_backdoorProtectionTrigger; // offset 0xD98, size 0x8, align 8
    char _pad_0DA0[0x8]; // offset 0xDA0
    CUtlSymbolLarge m_strTrooperApproach; // offset 0xDA8, size 0x8, align 8
    char _pad_0DB0[0x20]; // offset 0xDB0
    CCitadelAbilityComponent m_CCitadelAbilityComponent; // offset 0xDD0, size 0x268, align 255
    CUtlVectorEmbeddedNetworkVar< WeakPoint_t > m_vecWeakPoints; // offset 0x1038, size 0x68, align 8 | MNotSaved
    bool m_bDestroyed; // offset 0x10A0, size 0x1, align 1 | MNotSaved
    bool m_bActive; // offset 0x10A1, size 0x1, align 1 | MNotSaved
    bool m_bFinal; // offset 0x10A2, size 0x1, align 1
    char _pad_10A3[0xD]; // offset 0x10A3
};
