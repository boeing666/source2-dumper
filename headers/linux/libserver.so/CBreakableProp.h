#pragma once

class CBreakableProp : public CBaseProp /*0x0*/  // sizeof 0xC00, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xAA8]; // offset 0x0
    CPropDataComponent m_CPropDataComponent; // offset 0xAA8, size 0x40, align 8
    CEntityIOOutput m_OnStartDeath; // offset 0xAE8, size 0x18, align 255
    CEntityIOOutput m_OnBreak; // offset 0xB00, size 0x18, align 255
    CEntityOutputTemplate< float32 > m_OnHealthChanged; // offset 0xB18, size 0x20, align 8
    CEntityIOOutput m_OnTakeDamage; // offset 0xB38, size 0x18, align 255
    float32 m_impactEnergyScale; // offset 0xB50, size 0x4, align 4
    int32 m_iMinHealthDmg; // offset 0xB54, size 0x4, align 4
    QAngle m_preferredCarryAngles; // offset 0xB58, size 0xC, align 4
    float32 m_flPressureDelay; // offset 0xB64, size 0x4, align 4
    float32 m_flDefBurstScale; // offset 0xB68, size 0x4, align 4
    Vector m_vDefBurstOffset; // offset 0xB6C, size 0xC, align 4
    CHandle< CBaseEntity > m_hBreaker; // offset 0xB78, size 0x4, align 4
    PerformanceMode_t m_PerformanceMode; // offset 0xB7C, size 0x4, align 4
    GameTime_t m_flPreventDamageBeforeTime; // offset 0xB80, size 0x4, align 255
    BreakableContentsType_t m_BreakableContentsType; // offset 0xB84, size 0x4, align 4
    CUtlString m_strBreakableContentsPropGroupOverride; // offset 0xB88, size 0x8, align 8
    CUtlString m_strBreakableContentsParticleOverride; // offset 0xB90, size 0x8, align 8
    bool m_bHasBreakPiecesOrCommands; // offset 0xB98, size 0x1, align 1
    char _pad_0B99[0x3]; // offset 0xB99
    float32 m_explodeDamage; // offset 0xB9C, size 0x4, align 4
    float32 m_explodeRadius; // offset 0xBA0, size 0x4, align 4
    char _pad_0BA4[0x4]; // offset 0xBA4
    CGlobalSymbol m_sExplosionType; // offset 0xBA8, size 0x8, align 8
    float32 m_explosionDelay; // offset 0xBB0, size 0x4, align 4
    char _pad_0BB4[0x4]; // offset 0xBB4
    CUtlSymbolLarge m_explosionBuildupSound; // offset 0xBB8, size 0x8, align 8
    CUtlSymbolLarge m_explosionCustomEffect; // offset 0xBC0, size 0x8, align 8
    CUtlSymbolLarge m_explosionCustomSound; // offset 0xBC8, size 0x8, align 8
    CUtlSymbolLarge m_explosionModifier; // offset 0xBD0, size 0x8, align 8
    CHandle< CBasePlayerPawn > m_hPhysicsAttacker; // offset 0xBD8, size 0x4, align 4
    GameTime_t m_flLastPhysicsInfluenceTime; // offset 0xBDC, size 0x4, align 255
    float32 m_flDefaultFadeScale; // offset 0xBE0, size 0x4, align 4
    CHandle< CBaseEntity > m_hLastAttacker; // offset 0xBE4, size 0x4, align 4
    CUtlSymbolLarge m_iszPuntSound; // offset 0xBE8, size 0x8, align 8
    bool m_bUsePuntSound; // offset 0xBF0, size 0x1, align 1
    bool m_bOriginalBlockLOS; // offset 0xBF1, size 0x1, align 1
    char _pad_0BF2[0xE]; // offset 0xBF2
};
