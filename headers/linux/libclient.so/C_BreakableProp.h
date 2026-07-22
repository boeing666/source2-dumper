#pragma once

class C_BreakableProp : public CBaseProp /*0x0*/  // sizeof 0x1280, align 0x10 [vtable] (client)
{
public:
    char _pad_0000[0x1140]; // offset 0x0
    CPropDataComponent m_CPropDataComponent; // offset 0x1140, size 0x40, align 8
    CEntityIOOutput m_OnStartDeath; // offset 0x1180, size 0x18, align 255
    CEntityIOOutput m_OnBreak; // offset 0x1198, size 0x18, align 255
    CEntityOutputTemplate< float32 > m_OnHealthChanged; // offset 0x11B0, size 0x20, align 8
    CEntityIOOutput m_OnTakeDamage; // offset 0x11D0, size 0x18, align 255
    float32 m_impactEnergyScale; // offset 0x11E8, size 0x4, align 4
    int32 m_iMinHealthDmg; // offset 0x11EC, size 0x4, align 4
    float32 m_flPressureDelay; // offset 0x11F0, size 0x4, align 4
    float32 m_flDefBurstScale; // offset 0x11F4, size 0x4, align 4
    Vector m_vDefBurstOffset; // offset 0x11F8, size 0xC, align 4
    CHandle< C_BaseEntity > m_hBreaker; // offset 0x1204, size 0x4, align 4
    PerformanceMode_t m_PerformanceMode; // offset 0x1208, size 0x4, align 4
    GameTime_t m_flPreventDamageBeforeTime; // offset 0x120C, size 0x4, align 255
    BreakableContentsType_t m_BreakableContentsType; // offset 0x1210, size 0x4, align 4
    char _pad_1214[0x4]; // offset 0x1214
    CUtlString m_strBreakableContentsPropGroupOverride; // offset 0x1218, size 0x8, align 8
    CUtlString m_strBreakableContentsParticleOverride; // offset 0x1220, size 0x8, align 8
    bool m_bHasBreakPiecesOrCommands; // offset 0x1228, size 0x1, align 1
    char _pad_1229[0x3]; // offset 0x1229
    float32 m_explodeDamage; // offset 0x122C, size 0x4, align 4
    float32 m_explodeRadius; // offset 0x1230, size 0x4, align 4
    char _pad_1234[0x4]; // offset 0x1234
    CGlobalSymbol m_sExplosionType; // offset 0x1238, size 0x8, align 8
    float32 m_explosionDelay; // offset 0x1240, size 0x4, align 4
    char _pad_1244[0x4]; // offset 0x1244
    CUtlSymbolLarge m_explosionBuildupSound; // offset 0x1248, size 0x8, align 8
    CUtlSymbolLarge m_explosionCustomEffect; // offset 0x1250, size 0x8, align 8
    CUtlSymbolLarge m_explosionCustomSound; // offset 0x1258, size 0x8, align 8
    CUtlSymbolLarge m_explosionModifier; // offset 0x1260, size 0x8, align 8
    CHandle< C_BasePlayerPawn > m_hPhysicsAttacker; // offset 0x1268, size 0x4, align 4
    GameTime_t m_flLastPhysicsInfluenceTime; // offset 0x126C, size 0x4, align 255
    float32 m_flDefaultFadeScale; // offset 0x1270, size 0x4, align 4
    CHandle< C_BaseEntity > m_hLastAttacker; // offset 0x1274, size 0x4, align 4
    char _pad_1278[0x8]; // offset 0x1278
};
