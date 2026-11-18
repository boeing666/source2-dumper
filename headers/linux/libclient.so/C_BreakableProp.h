#pragma once

class C_BreakableProp : public CBaseProp /*0x0*/  // sizeof 0xF20, align 0x10 [vtable] (client)
{
public:
    char _pad_0000[0xDD0]; // offset 0x0
    CPropDataComponent m_CPropDataComponent; // offset 0xDD0, size 0x40, align 8
    CEntityIOOutput m_OnStartDeath; // offset 0xE10, size 0x18, align 255
    CEntityIOOutput m_OnBreak; // offset 0xE28, size 0x18, align 255
    CEntityOutputTemplate< float32 > m_OnHealthChanged; // offset 0xE40, size 0x20, align 8
    CEntityIOOutput m_OnTakeDamage; // offset 0xE60, size 0x18, align 255
    float32 m_impactEnergyScale; // offset 0xE78, size 0x4, align 4
    int32 m_iMinHealthDmg; // offset 0xE7C, size 0x4, align 4
    float32 m_flPressureDelay; // offset 0xE80, size 0x4, align 4
    float32 m_flDefBurstScale; // offset 0xE84, size 0x4, align 4
    Vector m_vDefBurstOffset; // offset 0xE88, size 0xC, align 4
    CHandle< C_BaseEntity > m_hBreaker; // offset 0xE94, size 0x4, align 4
    PerformanceMode_t m_PerformanceMode; // offset 0xE98, size 0x4, align 4
    GameTime_t m_flPreventDamageBeforeTime; // offset 0xE9C, size 0x4, align 255
    GameTime_t m_flPreventNonPlayerDamageBeforeTime; // offset 0xEA0, size 0x4, align 255
    GameTime_t m_flPreventNonPlayerDamageWhileHeldBeforeTime; // offset 0xEA4, size 0x4, align 255
    bool m_bUnbreakableUntilIgnited; // offset 0xEA8, size 0x1, align 1
    char _pad_0EA9[0x3]; // offset 0xEA9
    BreakableContentsType_t m_BreakableContentsType; // offset 0xEAC, size 0x4, align 4
    CUtlString m_strBreakableContentsPropGroupOverride; // offset 0xEB0, size 0x8, align 8
    CUtlString m_strBreakableContentsParticleOverride; // offset 0xEB8, size 0x8, align 8
    bool m_bHasBreakPiecesOrCommands; // offset 0xEC0, size 0x1, align 1
    char _pad_0EC1[0x3]; // offset 0xEC1
    float32 m_explodeDamage; // offset 0xEC4, size 0x4, align 4
    float32 m_explodeRadius; // offset 0xEC8, size 0x4, align 4
    char _pad_0ECC[0x4]; // offset 0xECC
    CGlobalSymbol m_sExplosionType; // offset 0xED0, size 0x8, align 8
    float32 m_explosionDelay; // offset 0xED8, size 0x4, align 4
    char _pad_0EDC[0x4]; // offset 0xEDC
    CUtlSymbolLarge m_explosionBuildupSound; // offset 0xEE0, size 0x8, align 8
    CUtlSymbolLarge m_explosionCustomEffect; // offset 0xEE8, size 0x8, align 8
    CUtlSymbolLarge m_explosionCustomSound; // offset 0xEF0, size 0x8, align 8
    CUtlSymbolLarge m_explosionModifier; // offset 0xEF8, size 0x8, align 8
    float32 m_flPreventNonPlayerDamageDuration; // offset 0xF00, size 0x4, align 4
    float32 m_flPreventNonPlayerDamageWhileHeldDuration; // offset 0xF04, size 0x4, align 4
    CHandle< C_BasePlayerPawn > m_hPhysicsAttacker; // offset 0xF08, size 0x4, align 4
    GameTime_t m_flLastPhysicsInfluenceTime; // offset 0xF0C, size 0x4, align 255
    float32 m_flDefaultFadeScale; // offset 0xF10, size 0x4, align 4
    CHandle< C_BaseEntity > m_hLastAttacker; // offset 0xF14, size 0x4, align 4
    char _pad_0F18[0x8]; // offset 0xF18
};
