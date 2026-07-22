#pragma once

class CBreakable : public CBaseModelEntity /*0x0*/  // sizeof 0xB28, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xA58]; // offset 0x0
    CPropDataComponent m_CPropDataComponent; // offset 0xA58, size 0x40, align 8
    Materials m_Material; // offset 0xA98, size 0x4, align 4
    CHandle< CBaseEntity > m_hBreaker; // offset 0xA9C, size 0x4, align 4
    Explosions m_Explosion; // offset 0xAA0, size 0x4, align 4
    char _pad_0AA4[0x4]; // offset 0xAA4
    CUtlSymbolLarge m_iszSpawnObject; // offset 0xAA8, size 0x8, align 8
    float32 m_flPressureDelay; // offset 0xAB0, size 0x4, align 4
    int32 m_iMinHealthDmg; // offset 0xAB4, size 0x4, align 4
    CUtlSymbolLarge m_iszPropData; // offset 0xAB8, size 0x8, align 8
    float32 m_impactEnergyScale; // offset 0xAC0, size 0x4, align 4
    EOverrideBlockLOS_t m_nOverrideBlockLOS; // offset 0xAC4, size 0x4, align 4
    CEntityIOOutput m_OnStartDeath; // offset 0xAC8, size 0x18, align 255
    CEntityIOOutput m_OnBreak; // offset 0xAE0, size 0x18, align 255
    CEntityOutputTemplate< float32 > m_OnHealthChanged; // offset 0xAF8, size 0x20, align 8
    PerformanceMode_t m_PerformanceMode; // offset 0xB18, size 0x4, align 4
    CHandle< CBasePlayerPawn > m_hPhysicsAttacker; // offset 0xB1C, size 0x4, align 4
    GameTime_t m_flLastPhysicsInfluenceTime; // offset 0xB20, size 0x4, align 255
    char _pad_0B24[0x4]; // offset 0xB24
};
