#pragma once

class CCitadel_Destroyable_Building : public CCitadelAnimatingModelEntity /*0x0*/  // sizeof 0x1060, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xC00]; // offset 0x0
    CCitadelMinimapComponent m_CCitadelMinimapComponent; // offset 0xC00, size 0x20, align 255
    CEntityIOOutput m_OnDestroyed; // offset 0xC20, size 0x18, align 255
    CEntityIOOutput m_OnRevitilized; // offset 0xC38, size 0x18, align 255
    CEntityOutputTemplate< float32 > m_OnDamageTaken; // offset 0xC50, size 0x20, align 8
    CEntityOutputTemplate< float32 > m_OnLifeChanged; // offset 0xC70, size 0x20, align 8
    CEntityIOOutput m_OnBecomeActive; // offset 0xC90, size 0x18, align 255
    CEntityIOOutput m_OnBecomeInvulnerable; // offset 0xCA8, size 0x18, align 255
    CEntityIOOutput m_OnBecomeVulnerable; // offset 0xCC0, size 0x18, align 255
    CEntityIOOutput m_OnUnderAttack; // offset 0xCD8, size 0x18, align 255
    CEntityIOOutput m_OnAttackSubsided; // offset 0xCF0, size 0x18, align 255
    int32 m_nBuildingHealth; // offset 0xD08, size 0x4, align 4
    char _pad_0D0C[0x4]; // offset 0xD0C
    int32 m_iLane; // offset 0xD10, size 0x4, align 4
    GameTime_t m_flDestroyedTime; // offset 0xD14, size 0x4, align 255 | MNotSaved
    GameTime_t m_flLastDamagedTime; // offset 0xD18, size 0x4, align 255 | MNotSaved
    QAngle m_angOriginal; // offset 0xD1C, size 0xC, align 4 | MNotSaved
    char _pad_0D28[0x20]; // offset 0xD28
    CUtlSymbolLarge m_backdoorProtectionTrigger; // offset 0xD48, size 0x8, align 8
    char _pad_0D50[0x8]; // offset 0xD50
    CUtlSymbolLarge m_strTrooperApproach; // offset 0xD58, size 0x8, align 8
    char _pad_0D60[0x20]; // offset 0xD60
    CCitadelAbilityComponent m_CCitadelAbilityComponent; // offset 0xD80, size 0x268, align 255
    CUtlVectorEmbeddedNetworkVar< WeakPoint_t > m_vecWeakPoints; // offset 0xFE8, size 0x68, align 8 | MNotSaved
    bool m_bDestroyed; // offset 0x1050, size 0x1, align 1 | MNotSaved
    bool m_bActive; // offset 0x1051, size 0x1, align 1 | MNotSaved
    bool m_bFinal; // offset 0x1052, size 0x1, align 1
    char _pad_1053[0xD]; // offset 0x1053
};
