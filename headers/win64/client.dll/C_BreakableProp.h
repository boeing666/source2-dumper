#pragma once

class C_BreakableProp : public CBaseProp /*0x0*/  // sizeof 0xD30, align 0x10 [vtable] (client)
{
public:
    char _pad_0000[0xBE0]; // offset 0x0
    CPropDataComponent m_CPropDataComponent; // offset 0xBE0, size 0x40, align 8
    CEntityIOOutput m_OnStartDeath; // offset 0xC20, size 0x18, align 255
    CEntityIOOutput m_OnBreak; // offset 0xC38, size 0x18, align 255
    CEntityOutputTemplate< float32 > m_OnHealthChanged; // offset 0xC50, size 0x20, align 8
    CEntityIOOutput m_OnTakeDamage; // offset 0xC70, size 0x18, align 255
    float32 m_impactEnergyScale; // offset 0xC88, size 0x4, align 4
    int32 m_iMinHealthDmg; // offset 0xC8C, size 0x4, align 4
    float32 m_flPressureDelay; // offset 0xC90, size 0x4, align 4
    float32 m_flDefBurstScale; // offset 0xC94, size 0x4, align 4
    Vector m_vDefBurstOffset; // offset 0xC98, size 0xC, align 4
    CHandle< C_BaseEntity > m_hBreaker; // offset 0xCA4, size 0x4, align 4
    PerformanceMode_t m_PerformanceMode; // offset 0xCA8, size 0x4, align 4
    GameTime_t m_flPreventDamageBeforeTime; // offset 0xCAC, size 0x4, align 255
    GameTime_t m_flPreventNonPlayerDamageBeforeTime; // offset 0xCB0, size 0x4, align 255
    GameTime_t m_flPreventNonPlayerDamageWhileHeldBeforeTime; // offset 0xCB4, size 0x4, align 255
    bool m_bUnbreakableUntilIgnited; // offset 0xCB8, size 0x1, align 1
    char _pad_0CB9[0x3]; // offset 0xCB9
    BreakableContentsType_t m_BreakableContentsType; // offset 0xCBC, size 0x4, align 4
    CUtlString m_strBreakableContentsPropGroupOverride; // offset 0xCC0, size 0x8, align 8
    CUtlString m_strBreakableContentsParticleOverride; // offset 0xCC8, size 0x8, align 8
    bool m_bHasBreakPiecesOrCommands; // offset 0xCD0, size 0x1, align 1
    char _pad_0CD1[0x3]; // offset 0xCD1
    float32 m_explodeDamage; // offset 0xCD4, size 0x4, align 4
    float32 m_explodeRadius; // offset 0xCD8, size 0x4, align 4
    char _pad_0CDC[0x4]; // offset 0xCDC
    CGlobalSymbol m_sExplosionType; // offset 0xCE0, size 0x8, align 8
    float32 m_explosionDelay; // offset 0xCE8, size 0x4, align 4
    char _pad_0CEC[0x4]; // offset 0xCEC
    CUtlSymbolLarge m_explosionBuildupSound; // offset 0xCF0, size 0x8, align 8
    CUtlSymbolLarge m_explosionCustomEffect; // offset 0xCF8, size 0x8, align 8
    CUtlSymbolLarge m_explosionCustomSound; // offset 0xD00, size 0x8, align 8
    CUtlSymbolLarge m_explosionModifier; // offset 0xD08, size 0x8, align 8
    float32 m_flPreventNonPlayerDamageDuration; // offset 0xD10, size 0x4, align 4
    float32 m_flPreventNonPlayerDamageWhileHeldDuration; // offset 0xD14, size 0x4, align 4
    CHandle< C_BasePlayerPawn > m_hPhysicsAttacker; // offset 0xD18, size 0x4, align 4
    GameTime_t m_flLastPhysicsInfluenceTime; // offset 0xD1C, size 0x4, align 255
    float32 m_flDefaultFadeScale; // offset 0xD20, size 0x4, align 4
    CHandle< C_BaseEntity > m_hLastAttacker; // offset 0xD24, size 0x4, align 4
    char _pad_0D28[0x8]; // offset 0xD28
};
