#pragma once

class CBreakableProp : public CBaseProp /*0x0*/  // sizeof 0xAF0, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0x998]; // offset 0x0
    CPropDataComponent m_CPropDataComponent; // offset 0x998, size 0x40, align 8
    CEntityIOOutput m_OnStartDeath; // offset 0x9D8, size 0x18, align 255
    CEntityIOOutput m_OnBreak; // offset 0x9F0, size 0x18, align 255
    CEntityOutputTemplate< float32 > m_OnHealthChanged; // offset 0xA08, size 0x20, align 8
    CEntityIOOutput m_OnTakeDamage; // offset 0xA28, size 0x18, align 255
    float32 m_impactEnergyScale; // offset 0xA40, size 0x4, align 4
    int32 m_iMinHealthDmg; // offset 0xA44, size 0x4, align 4
    QAngle m_preferredCarryAngles; // offset 0xA48, size 0xC, align 4
    float32 m_flPressureDelay; // offset 0xA54, size 0x4, align 4
    float32 m_flDefBurstScale; // offset 0xA58, size 0x4, align 4
    Vector m_vDefBurstOffset; // offset 0xA5C, size 0xC, align 4
    CHandle< CBaseEntity > m_hBreaker; // offset 0xA68, size 0x4, align 4
    PerformanceMode_t m_PerformanceMode; // offset 0xA6C, size 0x4, align 4
    GameTime_t m_flPreventDamageBeforeTime; // offset 0xA70, size 0x4, align 255
    BreakableContentsType_t m_BreakableContentsType; // offset 0xA74, size 0x4, align 4
    CUtlString m_strBreakableContentsPropGroupOverride; // offset 0xA78, size 0x8, align 8
    CUtlString m_strBreakableContentsParticleOverride; // offset 0xA80, size 0x8, align 8
    bool m_bHasBreakPiecesOrCommands; // offset 0xA88, size 0x1, align 1
    char _pad_0A89[0x3]; // offset 0xA89
    float32 m_explodeDamage; // offset 0xA8C, size 0x4, align 4
    float32 m_explodeRadius; // offset 0xA90, size 0x4, align 4
    char _pad_0A94[0x4]; // offset 0xA94
    CGlobalSymbol m_sExplosionType; // offset 0xA98, size 0x8, align 8
    float32 m_explosionDelay; // offset 0xAA0, size 0x4, align 4
    char _pad_0AA4[0x4]; // offset 0xAA4
    CUtlSymbolLarge m_explosionBuildupSound; // offset 0xAA8, size 0x8, align 8
    CUtlSymbolLarge m_explosionCustomEffect; // offset 0xAB0, size 0x8, align 8
    CUtlSymbolLarge m_explosionCustomSound; // offset 0xAB8, size 0x8, align 8
    CUtlSymbolLarge m_explosionModifier; // offset 0xAC0, size 0x8, align 8
    CHandle< CBasePlayerPawn > m_hPhysicsAttacker; // offset 0xAC8, size 0x4, align 4
    GameTime_t m_flLastPhysicsInfluenceTime; // offset 0xACC, size 0x4, align 255
    float32 m_flDefaultFadeScale; // offset 0xAD0, size 0x4, align 4
    CHandle< CBaseEntity > m_hLastAttacker; // offset 0xAD4, size 0x4, align 4
    CUtlSymbolLarge m_iszPuntSound; // offset 0xAD8, size 0x8, align 8
    bool m_bUsePuntSound; // offset 0xAE0, size 0x1, align 1
    bool m_bOriginalBlockLOS; // offset 0xAE1, size 0x1, align 1
    char _pad_0AE2[0xE]; // offset 0xAE2
};
