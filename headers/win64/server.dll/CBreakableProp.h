#pragma once

class CBreakableProp : public CBaseProp /*0x0*/  // sizeof 0xC70, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xB18]; // offset 0x0
    CPropDataComponent m_CPropDataComponent; // offset 0xB18, size 0x40, align 8
    CEntityIOOutput m_OnStartDeath; // offset 0xB58, size 0x18, align 255
    CEntityIOOutput m_OnBreak; // offset 0xB70, size 0x18, align 255
    CEntityOutputTemplate< float32 > m_OnHealthChanged; // offset 0xB88, size 0x20, align 8
    CEntityIOOutput m_OnTakeDamage; // offset 0xBA8, size 0x18, align 255
    float32 m_impactEnergyScale; // offset 0xBC0, size 0x4, align 4
    int32 m_iMinHealthDmg; // offset 0xBC4, size 0x4, align 4
    QAngle m_preferredCarryAngles; // offset 0xBC8, size 0xC, align 4
    float32 m_flPressureDelay; // offset 0xBD4, size 0x4, align 4
    float32 m_flDefBurstScale; // offset 0xBD8, size 0x4, align 4
    Vector m_vDefBurstOffset; // offset 0xBDC, size 0xC, align 4
    CHandle< CBaseEntity > m_hBreaker; // offset 0xBE8, size 0x4, align 4
    PerformanceMode_t m_PerformanceMode; // offset 0xBEC, size 0x4, align 4
    GameTime_t m_flPreventDamageBeforeTime; // offset 0xBF0, size 0x4, align 255
    BreakableContentsType_t m_BreakableContentsType; // offset 0xBF4, size 0x4, align 4
    CUtlString m_strBreakableContentsPropGroupOverride; // offset 0xBF8, size 0x8, align 8
    CUtlString m_strBreakableContentsParticleOverride; // offset 0xC00, size 0x8, align 8
    bool m_bHasBreakPiecesOrCommands; // offset 0xC08, size 0x1, align 1
    char _pad_0C09[0x3]; // offset 0xC09
    float32 m_explodeDamage; // offset 0xC0C, size 0x4, align 4
    float32 m_explodeRadius; // offset 0xC10, size 0x4, align 4
    char _pad_0C14[0x4]; // offset 0xC14
    CGlobalSymbol m_sExplosionType; // offset 0xC18, size 0x8, align 8
    float32 m_explosionDelay; // offset 0xC20, size 0x4, align 4
    char _pad_0C24[0x4]; // offset 0xC24
    CUtlSymbolLarge m_explosionBuildupSound; // offset 0xC28, size 0x8, align 8
    CUtlSymbolLarge m_explosionCustomEffect; // offset 0xC30, size 0x8, align 8
    CUtlSymbolLarge m_explosionCustomSound; // offset 0xC38, size 0x8, align 8
    CUtlSymbolLarge m_explosionModifier; // offset 0xC40, size 0x8, align 8
    AI_VolumetricEventHandle_t m_explosionDangerSound; // offset 0xC48, size 0x8, align 255
    CHandle< CBasePlayerPawn > m_hPhysicsAttacker; // offset 0xC50, size 0x4, align 4
    GameTime_t m_flLastPhysicsInfluenceTime; // offset 0xC54, size 0x4, align 255
    float32 m_flDefaultFadeScale; // offset 0xC58, size 0x4, align 4
    CHandle< CBaseEntity > m_hLastAttacker; // offset 0xC5C, size 0x4, align 4
    CUtlSymbolLarge m_iszPuntSound; // offset 0xC60, size 0x8, align 8
    bool m_bUsePuntSound; // offset 0xC68, size 0x1, align 1
    bool m_bOriginalBlockLOS; // offset 0xC69, size 0x1, align 1
    char _pad_0C6A[0x6]; // offset 0xC6A
};
