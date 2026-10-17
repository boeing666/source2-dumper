#pragma once

class C_BreakableProp : public CBaseProp /*0x0*/  // sizeof 0xEB0, align 0x10 [vtable] (client)
{
public:
    char _pad_0000[0xD60]; // offset 0x0
    CPropDataComponent m_CPropDataComponent; // offset 0xD60, size 0x40, align 8
    CEntityIOOutput m_OnStartDeath; // offset 0xDA0, size 0x18, align 255
    CEntityIOOutput m_OnBreak; // offset 0xDB8, size 0x18, align 255
    CEntityOutputTemplate< float32 > m_OnHealthChanged; // offset 0xDD0, size 0x20, align 8
    CEntityIOOutput m_OnTakeDamage; // offset 0xDF0, size 0x18, align 255
    float32 m_impactEnergyScale; // offset 0xE08, size 0x4, align 4
    int32 m_iMinHealthDmg; // offset 0xE0C, size 0x4, align 4
    float32 m_flPressureDelay; // offset 0xE10, size 0x4, align 4
    float32 m_flDefBurstScale; // offset 0xE14, size 0x4, align 4
    Vector m_vDefBurstOffset; // offset 0xE18, size 0xC, align 4
    CHandle< C_BaseEntity > m_hBreaker; // offset 0xE24, size 0x4, align 4
    PerformanceMode_t m_PerformanceMode; // offset 0xE28, size 0x4, align 4
    GameTime_t m_flPreventDamageBeforeTime; // offset 0xE2C, size 0x4, align 255
    GameTime_t m_flPreventNonPlayerDamageBeforeTime; // offset 0xE30, size 0x4, align 255
    GameTime_t m_flPreventNonPlayerDamageWhileHeldBeforeTime; // offset 0xE34, size 0x4, align 255
    bool m_bUnbreakableUntilIgnited; // offset 0xE38, size 0x1, align 1
    char _pad_0E39[0x3]; // offset 0xE39
    BreakableContentsType_t m_BreakableContentsType; // offset 0xE3C, size 0x4, align 4
    CUtlString m_strBreakableContentsPropGroupOverride; // offset 0xE40, size 0x8, align 8
    CUtlString m_strBreakableContentsParticleOverride; // offset 0xE48, size 0x8, align 8
    bool m_bHasBreakPiecesOrCommands; // offset 0xE50, size 0x1, align 1
    char _pad_0E51[0x3]; // offset 0xE51
    float32 m_explodeDamage; // offset 0xE54, size 0x4, align 4
    float32 m_explodeRadius; // offset 0xE58, size 0x4, align 4
    char _pad_0E5C[0x4]; // offset 0xE5C
    CGlobalSymbol m_sExplosionType; // offset 0xE60, size 0x8, align 8
    float32 m_explosionDelay; // offset 0xE68, size 0x4, align 4
    char _pad_0E6C[0x4]; // offset 0xE6C
    CUtlSymbolLarge m_explosionBuildupSound; // offset 0xE70, size 0x8, align 8
    CUtlSymbolLarge m_explosionCustomEffect; // offset 0xE78, size 0x8, align 8
    CUtlSymbolLarge m_explosionCustomSound; // offset 0xE80, size 0x8, align 8
    CUtlSymbolLarge m_explosionModifier; // offset 0xE88, size 0x8, align 8
    float32 m_flPreventNonPlayerDamageDuration; // offset 0xE90, size 0x4, align 4
    float32 m_flPreventNonPlayerDamageWhileHeldDuration; // offset 0xE94, size 0x4, align 4
    CHandle< C_BasePlayerPawn > m_hPhysicsAttacker; // offset 0xE98, size 0x4, align 4
    GameTime_t m_flLastPhysicsInfluenceTime; // offset 0xE9C, size 0x4, align 255
    float32 m_flDefaultFadeScale; // offset 0xEA0, size 0x4, align 4
    CHandle< C_BaseEntity > m_hLastAttacker; // offset 0xEA4, size 0x4, align 4
    char _pad_0EA8[0x8]; // offset 0xEA8
};
