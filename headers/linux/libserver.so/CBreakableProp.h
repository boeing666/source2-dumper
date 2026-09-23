#pragma once

class CBreakableProp : public CBaseProp /*0x0*/  // sizeof 0xEB0, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xD58]; // offset 0x0
    CPropDataComponent m_CPropDataComponent; // offset 0xD58, size 0x40, align 8
    CEntityIOOutput m_OnStartDeath; // offset 0xD98, size 0x18, align 255
    CEntityIOOutput m_OnBreak; // offset 0xDB0, size 0x18, align 255
    CEntityOutputTemplate< float32 > m_OnHealthChanged; // offset 0xDC8, size 0x20, align 8
    CEntityIOOutput m_OnTakeDamage; // offset 0xDE8, size 0x18, align 255
    float32 m_impactEnergyScale; // offset 0xE00, size 0x4, align 4
    int32 m_iMinHealthDmg; // offset 0xE04, size 0x4, align 4
    QAngle m_preferredCarryAngles; // offset 0xE08, size 0xC, align 4
    float32 m_flPressureDelay; // offset 0xE14, size 0x4, align 4
    float32 m_flDefBurstScale; // offset 0xE18, size 0x4, align 4
    Vector m_vDefBurstOffset; // offset 0xE1C, size 0xC, align 4
    CHandle< CBaseEntity > m_hBreaker; // offset 0xE28, size 0x4, align 4
    PerformanceMode_t m_PerformanceMode; // offset 0xE2C, size 0x4, align 4
    GameTime_t m_flPreventDamageBeforeTime; // offset 0xE30, size 0x4, align 255
    BreakableContentsType_t m_BreakableContentsType; // offset 0xE34, size 0x4, align 4
    CUtlString m_strBreakableContentsPropGroupOverride; // offset 0xE38, size 0x8, align 8
    CUtlString m_strBreakableContentsParticleOverride; // offset 0xE40, size 0x8, align 8
    bool m_bHasBreakPiecesOrCommands; // offset 0xE48, size 0x1, align 1
    char _pad_0E49[0x3]; // offset 0xE49
    float32 m_explodeDamage; // offset 0xE4C, size 0x4, align 4
    float32 m_explodeRadius; // offset 0xE50, size 0x4, align 4
    char _pad_0E54[0x4]; // offset 0xE54
    CGlobalSymbol m_sExplosionType; // offset 0xE58, size 0x8, align 8
    float32 m_explosionDelay; // offset 0xE60, size 0x4, align 4
    char _pad_0E64[0x4]; // offset 0xE64
    CUtlSymbolLarge m_explosionBuildupSound; // offset 0xE68, size 0x8, align 8
    CUtlSymbolLarge m_explosionCustomEffect; // offset 0xE70, size 0x8, align 8
    CUtlSymbolLarge m_explosionCustomSound; // offset 0xE78, size 0x8, align 8
    CUtlSymbolLarge m_explosionModifier; // offset 0xE80, size 0x8, align 8
    CHandle< CBasePlayerPawn > m_hPhysicsAttacker; // offset 0xE88, size 0x4, align 4
    GameTime_t m_flLastPhysicsInfluenceTime; // offset 0xE8C, size 0x4, align 255
    float32 m_flDefaultFadeScale; // offset 0xE90, size 0x4, align 4
    CHandle< CBaseEntity > m_hLastAttacker; // offset 0xE94, size 0x4, align 4
    CUtlSymbolLarge m_iszPuntSound; // offset 0xE98, size 0x8, align 8
    bool m_bUsePuntSound; // offset 0xEA0, size 0x1, align 1
    bool m_bOriginalBlockLOS; // offset 0xEA1, size 0x1, align 1
    char _pad_0EA2[0xE]; // offset 0xEA2
};
