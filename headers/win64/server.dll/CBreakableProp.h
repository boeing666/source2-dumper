#pragma once

class CBreakableProp : public CBaseProp /*0x0*/  // sizeof 0xBD0, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xA78]; // offset 0x0
    CPropDataComponent m_CPropDataComponent; // offset 0xA78, size 0x40, align 8
    CEntityIOOutput m_OnStartDeath; // offset 0xAB8, size 0x18, align 255
    CEntityIOOutput m_OnBreak; // offset 0xAD0, size 0x18, align 255
    CEntityOutputTemplate< float32 > m_OnHealthChanged; // offset 0xAE8, size 0x20, align 8
    CEntityIOOutput m_OnTakeDamage; // offset 0xB08, size 0x18, align 255
    float32 m_impactEnergyScale; // offset 0xB20, size 0x4, align 4
    int32 m_iMinHealthDmg; // offset 0xB24, size 0x4, align 4
    QAngle m_preferredCarryAngles; // offset 0xB28, size 0xC, align 4
    float32 m_flPressureDelay; // offset 0xB34, size 0x4, align 4
    float32 m_flDefBurstScale; // offset 0xB38, size 0x4, align 4
    Vector m_vDefBurstOffset; // offset 0xB3C, size 0xC, align 4
    CHandle< CBaseEntity > m_hBreaker; // offset 0xB48, size 0x4, align 4
    PerformanceMode_t m_PerformanceMode; // offset 0xB4C, size 0x4, align 4
    GameTime_t m_flPreventDamageBeforeTime; // offset 0xB50, size 0x4, align 255
    BreakableContentsType_t m_BreakableContentsType; // offset 0xB54, size 0x4, align 4
    CUtlString m_strBreakableContentsPropGroupOverride; // offset 0xB58, size 0x8, align 8
    CUtlString m_strBreakableContentsParticleOverride; // offset 0xB60, size 0x8, align 8
    bool m_bHasBreakPiecesOrCommands; // offset 0xB68, size 0x1, align 1
    char _pad_0B69[0x3]; // offset 0xB69
    float32 m_explodeDamage; // offset 0xB6C, size 0x4, align 4
    float32 m_explodeRadius; // offset 0xB70, size 0x4, align 4
    char _pad_0B74[0x4]; // offset 0xB74
    CGlobalSymbol m_sExplosionType; // offset 0xB78, size 0x8, align 8
    float32 m_explosionDelay; // offset 0xB80, size 0x4, align 4
    char _pad_0B84[0x4]; // offset 0xB84
    CUtlSymbolLarge m_explosionBuildupSound; // offset 0xB88, size 0x8, align 8
    CUtlSymbolLarge m_explosionCustomEffect; // offset 0xB90, size 0x8, align 8
    CUtlSymbolLarge m_explosionCustomSound; // offset 0xB98, size 0x8, align 8
    CUtlSymbolLarge m_explosionModifier; // offset 0xBA0, size 0x8, align 8
    CHandle< CBasePlayerPawn > m_hPhysicsAttacker; // offset 0xBA8, size 0x4, align 4
    GameTime_t m_flLastPhysicsInfluenceTime; // offset 0xBAC, size 0x4, align 255
    float32 m_flDefaultFadeScale; // offset 0xBB0, size 0x4, align 4
    CHandle< CBaseEntity > m_hLastAttacker; // offset 0xBB4, size 0x4, align 4
    CUtlSymbolLarge m_iszPuntSound; // offset 0xBB8, size 0x8, align 8
    bool m_bUsePuntSound; // offset 0xBC0, size 0x1, align 1
    bool m_bOriginalBlockLOS; // offset 0xBC1, size 0x1, align 1
    char _pad_0BC2[0xE]; // offset 0xBC2
};
