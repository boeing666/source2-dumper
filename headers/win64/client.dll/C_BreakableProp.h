#pragma once

class C_BreakableProp : public CBaseProp /*0x0*/  // sizeof 0x13E0, align 0x10 [vtable] (client)
{
public:
    char _pad_0000[0x12A0]; // offset 0x0
    CPropDataComponent m_CPropDataComponent; // offset 0x12A0, size 0x40, align 8
    CEntityIOOutput m_OnStartDeath; // offset 0x12E0, size 0x18, align 255
    CEntityIOOutput m_OnBreak; // offset 0x12F8, size 0x18, align 255
    CEntityOutputTemplate< float32 > m_OnHealthChanged; // offset 0x1310, size 0x20, align 8
    CEntityIOOutput m_OnTakeDamage; // offset 0x1330, size 0x18, align 255
    float32 m_impactEnergyScale; // offset 0x1348, size 0x4, align 4
    int32 m_iMinHealthDmg; // offset 0x134C, size 0x4, align 4
    float32 m_flPressureDelay; // offset 0x1350, size 0x4, align 4
    float32 m_flDefBurstScale; // offset 0x1354, size 0x4, align 4
    Vector m_vDefBurstOffset; // offset 0x1358, size 0xC, align 4
    CHandle< C_BaseEntity > m_hBreaker; // offset 0x1364, size 0x4, align 4
    PerformanceMode_t m_PerformanceMode; // offset 0x1368, size 0x4, align 4
    GameTime_t m_flPreventDamageBeforeTime; // offset 0x136C, size 0x4, align 255
    BreakableContentsType_t m_BreakableContentsType; // offset 0x1370, size 0x4, align 4
    char _pad_1374[0x4]; // offset 0x1374
    CUtlString m_strBreakableContentsPropGroupOverride; // offset 0x1378, size 0x8, align 8
    CUtlString m_strBreakableContentsParticleOverride; // offset 0x1380, size 0x8, align 8
    bool m_bHasBreakPiecesOrCommands; // offset 0x1388, size 0x1, align 1
    char _pad_1389[0x3]; // offset 0x1389
    float32 m_explodeDamage; // offset 0x138C, size 0x4, align 4
    float32 m_explodeRadius; // offset 0x1390, size 0x4, align 4
    char _pad_1394[0x4]; // offset 0x1394
    CGlobalSymbol m_sExplosionType; // offset 0x1398, size 0x8, align 8
    float32 m_explosionDelay; // offset 0x13A0, size 0x4, align 4
    char _pad_13A4[0x4]; // offset 0x13A4
    CUtlSymbolLarge m_explosionBuildupSound; // offset 0x13A8, size 0x8, align 8
    CUtlSymbolLarge m_explosionCustomEffect; // offset 0x13B0, size 0x8, align 8
    CUtlSymbolLarge m_explosionCustomSound; // offset 0x13B8, size 0x8, align 8
    CUtlSymbolLarge m_explosionModifier; // offset 0x13C0, size 0x8, align 8
    CHandle< C_BasePlayerPawn > m_hPhysicsAttacker; // offset 0x13C8, size 0x4, align 4
    GameTime_t m_flLastPhysicsInfluenceTime; // offset 0x13CC, size 0x4, align 255
    float32 m_flDefaultFadeScale; // offset 0x13D0, size 0x4, align 4
    CHandle< C_BaseEntity > m_hLastAttacker; // offset 0x13D4, size 0x4, align 4
    char _pad_13D8[0x8]; // offset 0x13D8
};
