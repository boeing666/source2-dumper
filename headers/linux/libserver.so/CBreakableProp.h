#pragma once

class CBreakableProp : public CBaseProp /*0x0*/  // sizeof 0xD60, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xBF8]; // offset 0x0
    CPropDataComponent m_CPropDataComponent; // offset 0xBF8, size 0x40, align 8
    CEntityIOOutput m_OnStartDeath; // offset 0xC38, size 0x18, align 255
    CEntityIOOutput m_OnBreak; // offset 0xC50, size 0x18, align 255
    CEntityOutputTemplate< float32 > m_OnHealthChanged; // offset 0xC68, size 0x20, align 8
    CEntityIOOutput m_OnTakeDamage; // offset 0xC88, size 0x18, align 255
    float32 m_impactEnergyScale; // offset 0xCA0, size 0x4, align 4
    int32 m_iMinHealthDmg; // offset 0xCA4, size 0x4, align 4
    QAngle m_preferredCarryAngles; // offset 0xCA8, size 0xC, align 4
    float32 m_flPressureDelay; // offset 0xCB4, size 0x4, align 4
    float32 m_flDefBurstScale; // offset 0xCB8, size 0x4, align 4
    Vector m_vDefBurstOffset; // offset 0xCBC, size 0xC, align 4
    CHandle< CBaseEntity > m_hBreaker; // offset 0xCC8, size 0x4, align 4
    PerformanceMode_t m_PerformanceMode; // offset 0xCCC, size 0x4, align 4
    GameTime_t m_flPreventDamageBeforeTime; // offset 0xCD0, size 0x4, align 255
    GameTime_t m_flPreventNonPlayerDamageBeforeTime; // offset 0xCD4, size 0x4, align 255
    GameTime_t m_flPreventNonPlayerDamageWhileHeldBeforeTime; // offset 0xCD8, size 0x4, align 255
    bool m_bUnbreakableUntilIgnited; // offset 0xCDC, size 0x1, align 1
    char _pad_0CDD[0x3]; // offset 0xCDD
    BreakableContentsType_t m_BreakableContentsType; // offset 0xCE0, size 0x4, align 4
    char _pad_0CE4[0x4]; // offset 0xCE4
    CUtlString m_strBreakableContentsPropGroupOverride; // offset 0xCE8, size 0x8, align 8
    CUtlString m_strBreakableContentsParticleOverride; // offset 0xCF0, size 0x8, align 8
    bool m_bHasBreakPiecesOrCommands; // offset 0xCF8, size 0x1, align 1
    char _pad_0CF9[0x3]; // offset 0xCF9
    float32 m_explodeDamage; // offset 0xCFC, size 0x4, align 4
    float32 m_explodeRadius; // offset 0xD00, size 0x4, align 4
    char _pad_0D04[0x4]; // offset 0xD04
    CGlobalSymbol m_sExplosionType; // offset 0xD08, size 0x8, align 8
    float32 m_explosionDelay; // offset 0xD10, size 0x4, align 4
    char _pad_0D14[0x4]; // offset 0xD14
    CUtlSymbolLarge m_explosionBuildupSound; // offset 0xD18, size 0x8, align 8
    CUtlSymbolLarge m_explosionCustomEffect; // offset 0xD20, size 0x8, align 8
    CUtlSymbolLarge m_explosionCustomSound; // offset 0xD28, size 0x8, align 8
    CUtlSymbolLarge m_explosionModifier; // offset 0xD30, size 0x8, align 8
    float32 m_flPreventNonPlayerDamageDuration; // offset 0xD38, size 0x4, align 4
    float32 m_flPreventNonPlayerDamageWhileHeldDuration; // offset 0xD3C, size 0x4, align 4
    CHandle< CBasePlayerPawn > m_hPhysicsAttacker; // offset 0xD40, size 0x4, align 4
    GameTime_t m_flLastPhysicsInfluenceTime; // offset 0xD44, size 0x4, align 255
    float32 m_flDefaultFadeScale; // offset 0xD48, size 0x4, align 4
    CHandle< CBaseEntity > m_hLastAttacker; // offset 0xD4C, size 0x4, align 4
    CUtlSymbolLarge m_iszPuntSound; // offset 0xD50, size 0x8, align 8
    bool m_bUsePuntSound; // offset 0xD58, size 0x1, align 1
    bool m_bOriginalBlockLOS; // offset 0xD59, size 0x1, align 1
    char _pad_0D5A[0x6]; // offset 0xD5A
};
