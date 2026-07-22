#pragma once

class C_BreakableProp : public CBaseProp /*0x0*/  // sizeof 0xDB0, align 0x10 [vtable] (client)
{
public:
    char _pad_0000[0xC70]; // offset 0x0
    CPropDataComponent m_CPropDataComponent; // offset 0xC70, size 0x40, align 8
    CEntityIOOutput m_OnStartDeath; // offset 0xCB0, size 0x18, align 255
    CEntityIOOutput m_OnBreak; // offset 0xCC8, size 0x18, align 255
    CEntityOutputTemplate< float32 > m_OnHealthChanged; // offset 0xCE0, size 0x20, align 8
    CEntityIOOutput m_OnTakeDamage; // offset 0xD00, size 0x18, align 255
    float32 m_impactEnergyScale; // offset 0xD18, size 0x4, align 4
    int32 m_iMinHealthDmg; // offset 0xD1C, size 0x4, align 4
    float32 m_flPressureDelay; // offset 0xD20, size 0x4, align 4
    float32 m_flDefBurstScale; // offset 0xD24, size 0x4, align 4
    Vector m_vDefBurstOffset; // offset 0xD28, size 0xC, align 4
    CHandle< C_BaseEntity > m_hBreaker; // offset 0xD34, size 0x4, align 4
    PerformanceMode_t m_PerformanceMode; // offset 0xD38, size 0x4, align 4
    GameTime_t m_flPreventDamageBeforeTime; // offset 0xD3C, size 0x4, align 255
    BreakableContentsType_t m_BreakableContentsType; // offset 0xD40, size 0x4, align 4
    char _pad_0D44[0x4]; // offset 0xD44
    CUtlString m_strBreakableContentsPropGroupOverride; // offset 0xD48, size 0x8, align 8
    CUtlString m_strBreakableContentsParticleOverride; // offset 0xD50, size 0x8, align 8
    bool m_bHasBreakPiecesOrCommands; // offset 0xD58, size 0x1, align 1
    char _pad_0D59[0x3]; // offset 0xD59
    float32 m_explodeDamage; // offset 0xD5C, size 0x4, align 4
    float32 m_explodeRadius; // offset 0xD60, size 0x4, align 4
    char _pad_0D64[0x4]; // offset 0xD64
    CGlobalSymbol m_sExplosionType; // offset 0xD68, size 0x8, align 8
    float32 m_explosionDelay; // offset 0xD70, size 0x4, align 4
    char _pad_0D74[0x4]; // offset 0xD74
    CUtlSymbolLarge m_explosionBuildupSound; // offset 0xD78, size 0x8, align 8
    CUtlSymbolLarge m_explosionCustomEffect; // offset 0xD80, size 0x8, align 8
    CUtlSymbolLarge m_explosionCustomSound; // offset 0xD88, size 0x8, align 8
    CUtlSymbolLarge m_explosionModifier; // offset 0xD90, size 0x8, align 8
    CHandle< C_BasePlayerPawn > m_hPhysicsAttacker; // offset 0xD98, size 0x4, align 4
    GameTime_t m_flLastPhysicsInfluenceTime; // offset 0xD9C, size 0x4, align 255
    float32 m_flDefaultFadeScale; // offset 0xDA0, size 0x4, align 4
    CHandle< C_BaseEntity > m_hLastAttacker; // offset 0xDA4, size 0x4, align 4
    char _pad_0DA8[0x8]; // offset 0xDA8
};
