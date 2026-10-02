#pragma once

class C_BreakableProp : public CBaseProp /*0x0*/  // sizeof 0xF70, align 0x10 [vtable] (client)
{
public:
    char _pad_0000[0xE30]; // offset 0x0
    CPropDataComponent m_CPropDataComponent; // offset 0xE30, size 0x40, align 8
    CEntityIOOutput m_OnStartDeath; // offset 0xE70, size 0x18, align 255
    CEntityIOOutput m_OnBreak; // offset 0xE88, size 0x18, align 255
    CEntityOutputTemplate< float32 > m_OnHealthChanged; // offset 0xEA0, size 0x20, align 8
    CEntityIOOutput m_OnTakeDamage; // offset 0xEC0, size 0x18, align 255
    float32 m_impactEnergyScale; // offset 0xED8, size 0x4, align 4
    int32 m_iMinHealthDmg; // offset 0xEDC, size 0x4, align 4
    float32 m_flPressureDelay; // offset 0xEE0, size 0x4, align 4
    float32 m_flDefBurstScale; // offset 0xEE4, size 0x4, align 4
    Vector m_vDefBurstOffset; // offset 0xEE8, size 0xC, align 4
    CHandle< C_BaseEntity > m_hBreaker; // offset 0xEF4, size 0x4, align 4
    PerformanceMode_t m_PerformanceMode; // offset 0xEF8, size 0x4, align 4
    GameTime_t m_flPreventDamageBeforeTime; // offset 0xEFC, size 0x4, align 255
    BreakableContentsType_t m_BreakableContentsType; // offset 0xF00, size 0x4, align 4
    char _pad_0F04[0x4]; // offset 0xF04
    CUtlString m_strBreakableContentsPropGroupOverride; // offset 0xF08, size 0x8, align 8
    CUtlString m_strBreakableContentsParticleOverride; // offset 0xF10, size 0x8, align 8
    bool m_bHasBreakPiecesOrCommands; // offset 0xF18, size 0x1, align 1
    char _pad_0F19[0x3]; // offset 0xF19
    float32 m_explodeDamage; // offset 0xF1C, size 0x4, align 4
    float32 m_explodeRadius; // offset 0xF20, size 0x4, align 4
    char _pad_0F24[0x4]; // offset 0xF24
    CGlobalSymbol m_sExplosionType; // offset 0xF28, size 0x8, align 8
    float32 m_explosionDelay; // offset 0xF30, size 0x4, align 4
    char _pad_0F34[0x4]; // offset 0xF34
    CUtlSymbolLarge m_explosionBuildupSound; // offset 0xF38, size 0x8, align 8
    CUtlSymbolLarge m_explosionCustomEffect; // offset 0xF40, size 0x8, align 8
    CUtlSymbolLarge m_explosionCustomSound; // offset 0xF48, size 0x8, align 8
    CUtlSymbolLarge m_explosionModifier; // offset 0xF50, size 0x8, align 8
    CHandle< C_BasePlayerPawn > m_hPhysicsAttacker; // offset 0xF58, size 0x4, align 4
    GameTime_t m_flLastPhysicsInfluenceTime; // offset 0xF5C, size 0x4, align 255
    float32 m_flDefaultFadeScale; // offset 0xF60, size 0x4, align 4
    CHandle< C_BaseEntity > m_hLastAttacker; // offset 0xF64, size 0x4, align 4
    char _pad_0F68[0x8]; // offset 0xF68
};
