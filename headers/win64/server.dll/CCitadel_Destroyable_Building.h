#pragma once

class CCitadel_Destroyable_Building : public CCitadelAnimatingModelEntity /*0x0*/  // sizeof 0x1050, align 0x10 [vtable] (server) {MNetworkIncludeByName MNetworkIncludeByName MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0xBF0]; // offset 0x0
    CCitadelMinimapComponent m_CCitadelMinimapComponent; // offset 0xBF0, size 0x20, align 255 | MNetworkEnable MNetworkUserGroup MNetworkAlias MNetworkTypeAlias
    CEntityIOOutput m_OnDestroyed; // offset 0xC10, size 0x18, align 255
    CEntityIOOutput m_OnRevitilized; // offset 0xC28, size 0x18, align 255
    CEntityOutputTemplate< float32 > m_OnDamageTaken; // offset 0xC40, size 0x20, align 8
    CEntityOutputTemplate< float32 > m_OnLifeChanged; // offset 0xC60, size 0x20, align 8
    CEntityIOOutput m_OnBecomeActive; // offset 0xC80, size 0x18, align 255
    CEntityIOOutput m_OnBecomeInvulnerable; // offset 0xC98, size 0x18, align 255
    CEntityIOOutput m_OnBecomeVulnerable; // offset 0xCB0, size 0x18, align 255
    CEntityIOOutput m_OnUnderAttack; // offset 0xCC8, size 0x18, align 255
    CEntityIOOutput m_OnAttackSubsided; // offset 0xCE0, size 0x18, align 255
    int32 m_nBuildingHealth; // offset 0xCF8, size 0x4, align 4
    char _pad_0CFC[0x4]; // offset 0xCFC
    int32 m_iLane; // offset 0xD00, size 0x4, align 4
    GameTime_t m_flDestroyedTime; // offset 0xD04, size 0x4, align 255 | MNotSaved
    GameTime_t m_flLastDamagedTime; // offset 0xD08, size 0x4, align 255 | MNotSaved
    QAngle m_angOriginal; // offset 0xD0C, size 0xC, align 4 | MNotSaved
    char _pad_0D18[0x20]; // offset 0xD18
    CUtlSymbolLarge m_backdoorProtectionTrigger; // offset 0xD38, size 0x8, align 8
    char _pad_0D40[0x8]; // offset 0xD40
    CUtlSymbolLarge m_strTrooperApproach; // offset 0xD48, size 0x8, align 8
    char _pad_0D50[0x20]; // offset 0xD50
    CCitadelAbilityComponent m_CCitadelAbilityComponent; // offset 0xD70, size 0x268, align 255 | MNetworkEnable MNetworkUserGroup MNetworkAlias MNetworkTypeAlias
    CUtlVectorEmbeddedNetworkVar< WeakPoint_t > m_vecWeakPoints; // offset 0xFD8, size 0x68, align 8 | MNetworkEnable MNotSaved
    bool m_bDestroyed; // offset 0x1040, size 0x1, align 1 | MNetworkEnable MNetworkChangeCallback MNotSaved
    bool m_bActive; // offset 0x1041, size 0x1, align 1 | MNetworkEnable MNotSaved
    bool m_bFinal; // offset 0x1042, size 0x1, align 1 | MNetworkEnable
    char _pad_1043[0xD]; // offset 0x1043
};
