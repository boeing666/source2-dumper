#pragma once

class CBreakableProp : public CBaseProp /*0x0*/  // sizeof 0x930, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0x7D8]; // offset 0x0
    CPropDataComponent m_CPropDataComponent; // offset 0x7D8, size 0x40, align 8
    CEntityIOOutput m_OnStartDeath; // offset 0x818, size 0x18, align 255
    CEntityIOOutput m_OnBreak; // offset 0x830, size 0x18, align 255
    CEntityOutputTemplate< float32 > m_OnHealthChanged; // offset 0x848, size 0x20, align 8
    CEntityIOOutput m_OnTakeDamage; // offset 0x868, size 0x18, align 255
    float32 m_impactEnergyScale; // offset 0x880, size 0x4, align 4
    int32 m_iMinHealthDmg; // offset 0x884, size 0x4, align 4
    QAngle m_preferredCarryAngles; // offset 0x888, size 0xC, align 4
    float32 m_flPressureDelay; // offset 0x894, size 0x4, align 4
    float32 m_flDefBurstScale; // offset 0x898, size 0x4, align 4
    Vector m_vDefBurstOffset; // offset 0x89C, size 0xC, align 4
    CHandle< CBaseEntity > m_hBreaker; // offset 0x8A8, size 0x4, align 4
    PerformanceMode_t m_PerformanceMode; // offset 0x8AC, size 0x4, align 4
    GameTime_t m_flPreventDamageBeforeTime; // offset 0x8B0, size 0x4, align 255
    BreakableContentsType_t m_BreakableContentsType; // offset 0x8B4, size 0x4, align 4
    CUtlString m_strBreakableContentsPropGroupOverride; // offset 0x8B8, size 0x8, align 8
    CUtlString m_strBreakableContentsParticleOverride; // offset 0x8C0, size 0x8, align 8
    bool m_bHasBreakPiecesOrCommands; // offset 0x8C8, size 0x1, align 1
    char _pad_08C9[0x3]; // offset 0x8C9
    float32 m_explodeDamage; // offset 0x8CC, size 0x4, align 4
    float32 m_explodeRadius; // offset 0x8D0, size 0x4, align 4
    char _pad_08D4[0x4]; // offset 0x8D4
    CGlobalSymbol m_sExplosionType; // offset 0x8D8, size 0x8, align 8
    float32 m_explosionDelay; // offset 0x8E0, size 0x4, align 4
    char _pad_08E4[0x4]; // offset 0x8E4
    CUtlSymbolLarge m_explosionBuildupSound; // offset 0x8E8, size 0x8, align 8
    CUtlSymbolLarge m_explosionCustomEffect; // offset 0x8F0, size 0x8, align 8
    CUtlSymbolLarge m_explosionCustomSound; // offset 0x8F8, size 0x8, align 8
    CUtlSymbolLarge m_explosionModifier; // offset 0x900, size 0x8, align 8
    CHandle< CBasePlayerPawn > m_hPhysicsAttacker; // offset 0x908, size 0x4, align 4
    GameTime_t m_flLastPhysicsInfluenceTime; // offset 0x90C, size 0x4, align 255
    float32 m_flDefaultFadeScale; // offset 0x910, size 0x4, align 4
    CHandle< CBaseEntity > m_hLastAttacker; // offset 0x914, size 0x4, align 4
    CUtlSymbolLarge m_iszPuntSound; // offset 0x918, size 0x8, align 8
    bool m_bUsePuntSound; // offset 0x920, size 0x1, align 1
    bool m_bOriginalBlockLOS; // offset 0x921, size 0x1, align 1
    char _pad_0922[0xE]; // offset 0x922
};
