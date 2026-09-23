#pragma once

class CBreakable : public CBaseModelEntity /*0x0*/  // sizeof 0x928, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x858]; // offset 0x0
    CPropDataComponent m_CPropDataComponent; // offset 0x858, size 0x40, align 8
    Materials m_Material; // offset 0x898, size 0x4, align 4
    CHandle< CBaseEntity > m_hBreaker; // offset 0x89C, size 0x4, align 4
    Explosions m_Explosion; // offset 0x8A0, size 0x4, align 4
    char _pad_08A4[0x4]; // offset 0x8A4
    CUtlSymbolLarge m_iszSpawnObject; // offset 0x8A8, size 0x8, align 8
    float32 m_flPressureDelay; // offset 0x8B0, size 0x4, align 4
    int32 m_iMinHealthDmg; // offset 0x8B4, size 0x4, align 4
    CUtlSymbolLarge m_iszPropData; // offset 0x8B8, size 0x8, align 8
    float32 m_impactEnergyScale; // offset 0x8C0, size 0x4, align 4
    EOverrideBlockLOS_t m_nOverrideBlockLOS; // offset 0x8C4, size 0x4, align 4
    CEntityIOOutput m_OnStartDeath; // offset 0x8C8, size 0x18, align 255
    CEntityIOOutput m_OnBreak; // offset 0x8E0, size 0x18, align 255
    CEntityOutputTemplate< float32 > m_OnHealthChanged; // offset 0x8F8, size 0x20, align 8
    PerformanceMode_t m_PerformanceMode; // offset 0x918, size 0x4, align 4
    CHandle< CBasePlayerPawn > m_hPhysicsAttacker; // offset 0x91C, size 0x4, align 4
    GameTime_t m_flLastPhysicsInfluenceTime; // offset 0x920, size 0x4, align 255
    char _pad_0924[0x4]; // offset 0x924
};
