#pragma once

class C_BreakableProp : public CBaseProp /*0x0*/  // sizeof 0xC30, align 0x10 [vtable] (client)
{
public:
    char _pad_0000[0xAF0]; // offset 0x0
    CPropDataComponent m_CPropDataComponent; // offset 0xAF0, size 0x40, align 8
    CEntityIOOutput m_OnStartDeath; // offset 0xB30, size 0x18, align 255
    CEntityIOOutput m_OnBreak; // offset 0xB48, size 0x18, align 255
    CEntityOutputTemplate< float32 > m_OnHealthChanged; // offset 0xB60, size 0x20, align 8
    CEntityIOOutput m_OnTakeDamage; // offset 0xB80, size 0x18, align 255
    float32 m_impactEnergyScale; // offset 0xB98, size 0x4, align 4
    int32 m_iMinHealthDmg; // offset 0xB9C, size 0x4, align 4
    float32 m_flPressureDelay; // offset 0xBA0, size 0x4, align 4
    float32 m_flDefBurstScale; // offset 0xBA4, size 0x4, align 4
    Vector m_vDefBurstOffset; // offset 0xBA8, size 0xC, align 4
    CHandle< C_BaseEntity > m_hBreaker; // offset 0xBB4, size 0x4, align 4
    PerformanceMode_t m_PerformanceMode; // offset 0xBB8, size 0x4, align 4
    GameTime_t m_flPreventDamageBeforeTime; // offset 0xBBC, size 0x4, align 255
    BreakableContentsType_t m_BreakableContentsType; // offset 0xBC0, size 0x4, align 4
    char _pad_0BC4[0x4]; // offset 0xBC4
    CUtlString m_strBreakableContentsPropGroupOverride; // offset 0xBC8, size 0x8, align 8
    CUtlString m_strBreakableContentsParticleOverride; // offset 0xBD0, size 0x8, align 8
    bool m_bHasBreakPiecesOrCommands; // offset 0xBD8, size 0x1, align 1
    char _pad_0BD9[0x3]; // offset 0xBD9
    float32 m_explodeDamage; // offset 0xBDC, size 0x4, align 4
    float32 m_explodeRadius; // offset 0xBE0, size 0x4, align 4
    char _pad_0BE4[0x4]; // offset 0xBE4
    CGlobalSymbol m_sExplosionType; // offset 0xBE8, size 0x8, align 8
    float32 m_explosionDelay; // offset 0xBF0, size 0x4, align 4
    char _pad_0BF4[0x4]; // offset 0xBF4
    CUtlSymbolLarge m_explosionBuildupSound; // offset 0xBF8, size 0x8, align 8
    CUtlSymbolLarge m_explosionCustomEffect; // offset 0xC00, size 0x8, align 8
    CUtlSymbolLarge m_explosionCustomSound; // offset 0xC08, size 0x8, align 8
    CUtlSymbolLarge m_explosionModifier; // offset 0xC10, size 0x8, align 8
    CHandle< C_BasePlayerPawn > m_hPhysicsAttacker; // offset 0xC18, size 0x4, align 4
    GameTime_t m_flLastPhysicsInfluenceTime; // offset 0xC1C, size 0x4, align 255
    float32 m_flDefaultFadeScale; // offset 0xC20, size 0x4, align 4
    CHandle< C_BaseEntity > m_hLastAttacker; // offset 0xC24, size 0x4, align 4
    char _pad_0C28[0x8]; // offset 0xC28
};
