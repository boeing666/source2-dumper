#pragma once

class C_BreakableProp : public CBaseProp /*0x0*/  // sizeof 0xD90, align 0x10 [vtable] (client)
{
public:
    char _pad_0000[0xC40]; // offset 0x0
    CPropDataComponent m_CPropDataComponent; // offset 0xC40, size 0x40, align 8
    CEntityIOOutput m_OnStartDeath; // offset 0xC80, size 0x18, align 255
    CEntityIOOutput m_OnBreak; // offset 0xC98, size 0x18, align 255
    CEntityOutputTemplate< float32 > m_OnHealthChanged; // offset 0xCB0, size 0x20, align 8
    CEntityIOOutput m_OnTakeDamage; // offset 0xCD0, size 0x18, align 255
    float32 m_impactEnergyScale; // offset 0xCE8, size 0x4, align 4
    int32 m_iMinHealthDmg; // offset 0xCEC, size 0x4, align 4
    float32 m_flPressureDelay; // offset 0xCF0, size 0x4, align 4
    float32 m_flDefBurstScale; // offset 0xCF4, size 0x4, align 4
    Vector m_vDefBurstOffset; // offset 0xCF8, size 0xC, align 4
    CHandle< C_BaseEntity > m_hBreaker; // offset 0xD04, size 0x4, align 4
    PerformanceMode_t m_PerformanceMode; // offset 0xD08, size 0x4, align 4
    GameTime_t m_flPreventDamageBeforeTime; // offset 0xD0C, size 0x4, align 255
    GameTime_t m_flPreventNonPlayerDamageBeforeTime; // offset 0xD10, size 0x4, align 255
    GameTime_t m_flPreventNonPlayerDamageWhileHeldBeforeTime; // offset 0xD14, size 0x4, align 255
    bool m_bUnbreakableUntilIgnited; // offset 0xD18, size 0x1, align 1
    char _pad_0D19[0x3]; // offset 0xD19
    BreakableContentsType_t m_BreakableContentsType; // offset 0xD1C, size 0x4, align 4
    CUtlString m_strBreakableContentsPropGroupOverride; // offset 0xD20, size 0x8, align 8
    CUtlString m_strBreakableContentsParticleOverride; // offset 0xD28, size 0x8, align 8
    bool m_bHasBreakPiecesOrCommands; // offset 0xD30, size 0x1, align 1
    char _pad_0D31[0x3]; // offset 0xD31
    float32 m_explodeDamage; // offset 0xD34, size 0x4, align 4
    float32 m_explodeRadius; // offset 0xD38, size 0x4, align 4
    char _pad_0D3C[0x4]; // offset 0xD3C
    CGlobalSymbol m_sExplosionType; // offset 0xD40, size 0x8, align 8
    float32 m_explosionDelay; // offset 0xD48, size 0x4, align 4
    char _pad_0D4C[0x4]; // offset 0xD4C
    CUtlSymbolLarge m_explosionBuildupSound; // offset 0xD50, size 0x8, align 8
    CUtlSymbolLarge m_explosionCustomEffect; // offset 0xD58, size 0x8, align 8
    CUtlSymbolLarge m_explosionCustomSound; // offset 0xD60, size 0x8, align 8
    CUtlSymbolLarge m_explosionModifier; // offset 0xD68, size 0x8, align 8
    float32 m_flPreventNonPlayerDamageDuration; // offset 0xD70, size 0x4, align 4
    float32 m_flPreventNonPlayerDamageWhileHeldDuration; // offset 0xD74, size 0x4, align 4
    CHandle< C_BasePlayerPawn > m_hPhysicsAttacker; // offset 0xD78, size 0x4, align 4
    GameTime_t m_flLastPhysicsInfluenceTime; // offset 0xD7C, size 0x4, align 255
    float32 m_flDefaultFadeScale; // offset 0xD80, size 0x4, align 4
    CHandle< C_BaseEntity > m_hLastAttacker; // offset 0xD84, size 0x4, align 4
    char _pad_0D88[0x8]; // offset 0xD88
};
