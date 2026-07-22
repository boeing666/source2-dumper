#pragma once

class C_BreakableProp : public CBaseProp /*0x0*/  // sizeof 0xE20, align 0x10 [vtable] (client) {MNetworkVarNames}
{
public:
    char _pad_0000[0xCE0]; // offset 0x0
    CPropDataComponent m_CPropDataComponent; // offset 0xCE0, size 0x40, align 255 | MNetworkEnable MNetworkUserGroup MNetworkAlias MNetworkTypeAlias
    CEntityIOOutput m_OnStartDeath; // offset 0xD20, size 0x18, align 255
    CEntityIOOutput m_OnBreak; // offset 0xD38, size 0x18, align 255
    CEntityOutputTemplate< float32 > m_OnHealthChanged; // offset 0xD50, size 0x20, align 8
    CEntityIOOutput m_OnTakeDamage; // offset 0xD70, size 0x18, align 255
    float32 m_impactEnergyScale; // offset 0xD88, size 0x4, align 4
    int32 m_iMinHealthDmg; // offset 0xD8C, size 0x4, align 4
    float32 m_flPressureDelay; // offset 0xD90, size 0x4, align 4
    float32 m_flDefBurstScale; // offset 0xD94, size 0x4, align 4
    Vector m_vDefBurstOffset; // offset 0xD98, size 0xC, align 4
    CHandle< C_BaseEntity > m_hBreaker; // offset 0xDA4, size 0x4, align 4
    PerformanceMode_t m_PerformanceMode; // offset 0xDA8, size 0x4, align 4
    GameTime_t m_flPreventDamageBeforeTime; // offset 0xDAC, size 0x4, align 255
    BreakableContentsType_t m_BreakableContentsType; // offset 0xDB0, size 0x4, align 4
    char _pad_0DB4[0x4]; // offset 0xDB4
    CUtlString m_strBreakableContentsPropGroupOverride; // offset 0xDB8, size 0x8, align 8
    CUtlString m_strBreakableContentsParticleOverride; // offset 0xDC0, size 0x8, align 8
    bool m_bHasBreakPiecesOrCommands; // offset 0xDC8, size 0x1, align 1
    char _pad_0DC9[0x3]; // offset 0xDC9
    float32 m_explodeDamage; // offset 0xDCC, size 0x4, align 4
    float32 m_explodeRadius; // offset 0xDD0, size 0x4, align 4
    char _pad_0DD4[0x4]; // offset 0xDD4
    CGlobalSymbol m_sExplosionType; // offset 0xDD8, size 0x8, align 8
    float32 m_explosionDelay; // offset 0xDE0, size 0x4, align 4
    char _pad_0DE4[0x4]; // offset 0xDE4
    CUtlSymbolLarge m_explosionBuildupSound; // offset 0xDE8, size 0x8, align 8
    CUtlSymbolLarge m_explosionCustomEffect; // offset 0xDF0, size 0x8, align 8
    CUtlSymbolLarge m_explosionCustomSound; // offset 0xDF8, size 0x8, align 8
    CUtlSymbolLarge m_explosionModifier; // offset 0xE00, size 0x8, align 8
    CHandle< C_BasePlayerPawn > m_hPhysicsAttacker; // offset 0xE08, size 0x4, align 4
    GameTime_t m_flLastPhysicsInfluenceTime; // offset 0xE0C, size 0x4, align 255
    float32 m_flDefaultFadeScale; // offset 0xE10, size 0x4, align 4
    CHandle< C_BaseEntity > m_hLastAttacker; // offset 0xE14, size 0x4, align 4
    char _pad_0E18[0x8]; // offset 0xE18
};
