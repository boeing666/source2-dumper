#pragma once

class CBreakableProp : public CBaseProp /*0x0*/  // sizeof 0xCF0, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xB88]; // offset 0x0
    CPropDataComponent m_CPropDataComponent; // offset 0xB88, size 0x40, align 8
    CEntityIOOutput m_OnStartDeath; // offset 0xBC8, size 0x18, align 255
    CEntityIOOutput m_OnBreak; // offset 0xBE0, size 0x18, align 255
    CEntityOutputTemplate< float32 > m_OnHealthChanged; // offset 0xBF8, size 0x20, align 8
    CEntityIOOutput m_OnTakeDamage; // offset 0xC18, size 0x18, align 255
    float32 m_impactEnergyScale; // offset 0xC30, size 0x4, align 4
    int32 m_iMinHealthDmg; // offset 0xC34, size 0x4, align 4
    QAngle m_preferredCarryAngles; // offset 0xC38, size 0xC, align 4
    float32 m_flPressureDelay; // offset 0xC44, size 0x4, align 4
    float32 m_flDefBurstScale; // offset 0xC48, size 0x4, align 4
    Vector m_vDefBurstOffset; // offset 0xC4C, size 0xC, align 4
    CHandle< CBaseEntity > m_hBreaker; // offset 0xC58, size 0x4, align 4
    PerformanceMode_t m_PerformanceMode; // offset 0xC5C, size 0x4, align 4
    GameTime_t m_flPreventDamageBeforeTime; // offset 0xC60, size 0x4, align 255
    GameTime_t m_flPreventNonPlayerDamageBeforeTime; // offset 0xC64, size 0x4, align 255
    GameTime_t m_flPreventNonPlayerDamageWhileHeldBeforeTime; // offset 0xC68, size 0x4, align 255
    bool m_bUnbreakableUntilIgnited; // offset 0xC6C, size 0x1, align 1
    char _pad_0C6D[0x3]; // offset 0xC6D
    BreakableContentsType_t m_BreakableContentsType; // offset 0xC70, size 0x4, align 4
    char _pad_0C74[0x4]; // offset 0xC74
    CUtlString m_strBreakableContentsPropGroupOverride; // offset 0xC78, size 0x8, align 8
    CUtlString m_strBreakableContentsParticleOverride; // offset 0xC80, size 0x8, align 8
    bool m_bHasBreakPiecesOrCommands; // offset 0xC88, size 0x1, align 1
    char _pad_0C89[0x3]; // offset 0xC89
    float32 m_explodeDamage; // offset 0xC8C, size 0x4, align 4
    float32 m_explodeRadius; // offset 0xC90, size 0x4, align 4
    char _pad_0C94[0x4]; // offset 0xC94
    CGlobalSymbol m_sExplosionType; // offset 0xC98, size 0x8, align 8
    float32 m_explosionDelay; // offset 0xCA0, size 0x4, align 4
    char _pad_0CA4[0x4]; // offset 0xCA4
    CUtlSymbolLarge m_explosionBuildupSound; // offset 0xCA8, size 0x8, align 8
    CUtlSymbolLarge m_explosionCustomEffect; // offset 0xCB0, size 0x8, align 8
    CUtlSymbolLarge m_explosionCustomSound; // offset 0xCB8, size 0x8, align 8
    CUtlSymbolLarge m_explosionModifier; // offset 0xCC0, size 0x8, align 8
    float32 m_flPreventNonPlayerDamageDuration; // offset 0xCC8, size 0x4, align 4
    float32 m_flPreventNonPlayerDamageWhileHeldDuration; // offset 0xCCC, size 0x4, align 4
    CHandle< CBasePlayerPawn > m_hPhysicsAttacker; // offset 0xCD0, size 0x4, align 4
    GameTime_t m_flLastPhysicsInfluenceTime; // offset 0xCD4, size 0x4, align 255
    float32 m_flDefaultFadeScale; // offset 0xCD8, size 0x4, align 4
    CHandle< CBaseEntity > m_hLastAttacker; // offset 0xCDC, size 0x4, align 4
    CUtlSymbolLarge m_iszPuntSound; // offset 0xCE0, size 0x8, align 8
    bool m_bUsePuntSound; // offset 0xCE8, size 0x1, align 1
    bool m_bOriginalBlockLOS; // offset 0xCE9, size 0x1, align 1
    char _pad_0CEA[0x6]; // offset 0xCEA
};
