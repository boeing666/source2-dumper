#pragma once

class C_BreakableProp : public CBaseProp /*0x0*/  // sizeof 0x1360, align 0x10 [vtable] (client)
{
public:
    char _pad_0000[0x1220]; // offset 0x0
    CPropDataComponent m_CPropDataComponent; // offset 0x1220, size 0x40, align 8
    CEntityIOOutput m_OnStartDeath; // offset 0x1260, size 0x18, align 255
    CEntityIOOutput m_OnBreak; // offset 0x1278, size 0x18, align 255
    CEntityOutputTemplate< float32 > m_OnHealthChanged; // offset 0x1290, size 0x20, align 8
    CEntityIOOutput m_OnTakeDamage; // offset 0x12B0, size 0x18, align 255
    float32 m_impactEnergyScale; // offset 0x12C8, size 0x4, align 4
    int32 m_iMinHealthDmg; // offset 0x12CC, size 0x4, align 4
    float32 m_flPressureDelay; // offset 0x12D0, size 0x4, align 4
    float32 m_flDefBurstScale; // offset 0x12D4, size 0x4, align 4
    Vector m_vDefBurstOffset; // offset 0x12D8, size 0xC, align 4
    CHandle< C_BaseEntity > m_hBreaker; // offset 0x12E4, size 0x4, align 4
    PerformanceMode_t m_PerformanceMode; // offset 0x12E8, size 0x4, align 4
    GameTime_t m_flPreventDamageBeforeTime; // offset 0x12EC, size 0x4, align 255
    BreakableContentsType_t m_BreakableContentsType; // offset 0x12F0, size 0x4, align 4
    char _pad_12F4[0x4]; // offset 0x12F4
    CUtlString m_strBreakableContentsPropGroupOverride; // offset 0x12F8, size 0x8, align 8
    CUtlString m_strBreakableContentsParticleOverride; // offset 0x1300, size 0x8, align 8
    bool m_bHasBreakPiecesOrCommands; // offset 0x1308, size 0x1, align 1
    char _pad_1309[0x3]; // offset 0x1309
    float32 m_explodeDamage; // offset 0x130C, size 0x4, align 4
    float32 m_explodeRadius; // offset 0x1310, size 0x4, align 4
    char _pad_1314[0x4]; // offset 0x1314
    CGlobalSymbol m_sExplosionType; // offset 0x1318, size 0x8, align 8
    float32 m_explosionDelay; // offset 0x1320, size 0x4, align 4
    char _pad_1324[0x4]; // offset 0x1324
    CUtlSymbolLarge m_explosionBuildupSound; // offset 0x1328, size 0x8, align 8
    CUtlSymbolLarge m_explosionCustomEffect; // offset 0x1330, size 0x8, align 8
    CUtlSymbolLarge m_explosionCustomSound; // offset 0x1338, size 0x8, align 8
    CUtlSymbolLarge m_explosionModifier; // offset 0x1340, size 0x8, align 8
    CHandle< C_BasePlayerPawn > m_hPhysicsAttacker; // offset 0x1348, size 0x4, align 4
    GameTime_t m_flLastPhysicsInfluenceTime; // offset 0x134C, size 0x4, align 255
    float32 m_flDefaultFadeScale; // offset 0x1350, size 0x4, align 4
    CHandle< C_BaseEntity > m_hLastAttacker; // offset 0x1354, size 0x4, align 4
    char _pad_1358[0x8]; // offset 0x1358
};
