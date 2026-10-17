#pragma once

class CBreakableProp : public CBaseProp /*0x0*/  // sizeof 0xA20, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0x8B8]; // offset 0x0
    CPropDataComponent m_CPropDataComponent; // offset 0x8B8, size 0x40, align 8
    CEntityIOOutput m_OnStartDeath; // offset 0x8F8, size 0x18, align 255
    CEntityIOOutput m_OnBreak; // offset 0x910, size 0x18, align 255
    CEntityOutputTemplate< float32 > m_OnHealthChanged; // offset 0x928, size 0x20, align 8
    CEntityIOOutput m_OnTakeDamage; // offset 0x948, size 0x18, align 255
    float32 m_impactEnergyScale; // offset 0x960, size 0x4, align 4
    int32 m_iMinHealthDmg; // offset 0x964, size 0x4, align 4
    QAngle m_preferredCarryAngles; // offset 0x968, size 0xC, align 4
    float32 m_flPressureDelay; // offset 0x974, size 0x4, align 4
    float32 m_flDefBurstScale; // offset 0x978, size 0x4, align 4
    Vector m_vDefBurstOffset; // offset 0x97C, size 0xC, align 4
    CHandle< CBaseEntity > m_hBreaker; // offset 0x988, size 0x4, align 4
    PerformanceMode_t m_PerformanceMode; // offset 0x98C, size 0x4, align 4
    GameTime_t m_flPreventDamageBeforeTime; // offset 0x990, size 0x4, align 255
    GameTime_t m_flPreventNonPlayerDamageBeforeTime; // offset 0x994, size 0x4, align 255
    GameTime_t m_flPreventNonPlayerDamageWhileHeldBeforeTime; // offset 0x998, size 0x4, align 255
    bool m_bUnbreakableUntilIgnited; // offset 0x99C, size 0x1, align 1
    char _pad_099D[0x3]; // offset 0x99D
    BreakableContentsType_t m_BreakableContentsType; // offset 0x9A0, size 0x4, align 4
    char _pad_09A4[0x4]; // offset 0x9A4
    CUtlString m_strBreakableContentsPropGroupOverride; // offset 0x9A8, size 0x8, align 8
    CUtlString m_strBreakableContentsParticleOverride; // offset 0x9B0, size 0x8, align 8
    bool m_bHasBreakPiecesOrCommands; // offset 0x9B8, size 0x1, align 1
    char _pad_09B9[0x3]; // offset 0x9B9
    float32 m_explodeDamage; // offset 0x9BC, size 0x4, align 4
    float32 m_explodeRadius; // offset 0x9C0, size 0x4, align 4
    char _pad_09C4[0x4]; // offset 0x9C4
    CGlobalSymbol m_sExplosionType; // offset 0x9C8, size 0x8, align 8
    float32 m_explosionDelay; // offset 0x9D0, size 0x4, align 4
    char _pad_09D4[0x4]; // offset 0x9D4
    CUtlSymbolLarge m_explosionBuildupSound; // offset 0x9D8, size 0x8, align 8
    CUtlSymbolLarge m_explosionCustomEffect; // offset 0x9E0, size 0x8, align 8
    CUtlSymbolLarge m_explosionCustomSound; // offset 0x9E8, size 0x8, align 8
    CUtlSymbolLarge m_explosionModifier; // offset 0x9F0, size 0x8, align 8
    float32 m_flPreventNonPlayerDamageDuration; // offset 0x9F8, size 0x4, align 4
    float32 m_flPreventNonPlayerDamageWhileHeldDuration; // offset 0x9FC, size 0x4, align 4
    CHandle< CBasePlayerPawn > m_hPhysicsAttacker; // offset 0xA00, size 0x4, align 4
    GameTime_t m_flLastPhysicsInfluenceTime; // offset 0xA04, size 0x4, align 255
    float32 m_flDefaultFadeScale; // offset 0xA08, size 0x4, align 4
    CHandle< CBaseEntity > m_hLastAttacker; // offset 0xA0C, size 0x4, align 4
    CUtlSymbolLarge m_iszPuntSound; // offset 0xA10, size 0x8, align 8
    bool m_bUsePuntSound; // offset 0xA18, size 0x1, align 1
    bool m_bOriginalBlockLOS; // offset 0xA19, size 0x1, align 1
    char _pad_0A1A[0x6]; // offset 0xA1A
};
