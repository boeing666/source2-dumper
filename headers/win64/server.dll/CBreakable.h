#pragma once

class CBreakable : public CBaseModelEntity /*0x0*/  // sizeof 0x850, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x780]; // offset 0x0
    CPropDataComponent m_CPropDataComponent; // offset 0x780, size 0x40, align 8
    Materials m_Material; // offset 0x7C0, size 0x4, align 4
    CHandle< CBaseEntity > m_hBreaker; // offset 0x7C4, size 0x4, align 4
    Explosions m_Explosion; // offset 0x7C8, size 0x4, align 4
    char _pad_07CC[0x4]; // offset 0x7CC
    CUtlSymbolLarge m_iszSpawnObject; // offset 0x7D0, size 0x8, align 8
    float32 m_flPressureDelay; // offset 0x7D8, size 0x4, align 4
    int32 m_iMinHealthDmg; // offset 0x7DC, size 0x4, align 4
    CUtlSymbolLarge m_iszPropData; // offset 0x7E0, size 0x8, align 8
    float32 m_impactEnergyScale; // offset 0x7E8, size 0x4, align 4
    EOverrideBlockLOS_t m_nOverrideBlockLOS; // offset 0x7EC, size 0x4, align 4
    CEntityIOOutput m_OnStartDeath; // offset 0x7F0, size 0x18, align 255
    CEntityIOOutput m_OnBreak; // offset 0x808, size 0x18, align 255
    CEntityOutputTemplate< float32 > m_OnHealthChanged; // offset 0x820, size 0x20, align 8
    PerformanceMode_t m_PerformanceMode; // offset 0x840, size 0x4, align 4
    CHandle< CBasePlayerPawn > m_hPhysicsAttacker; // offset 0x844, size 0x4, align 4
    GameTime_t m_flLastPhysicsInfluenceTime; // offset 0x848, size 0x4, align 255
    char _pad_084C[0x4]; // offset 0x84C
};
