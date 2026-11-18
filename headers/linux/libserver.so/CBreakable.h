#pragma once

class CBreakable : public CBaseModelEntity /*0x0*/  // sizeof 0xC78, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xBA8]; // offset 0x0
    CPropDataComponent m_CPropDataComponent; // offset 0xBA8, size 0x40, align 8
    Materials m_Material; // offset 0xBE8, size 0x4, align 4
    CHandle< CBaseEntity > m_hBreaker; // offset 0xBEC, size 0x4, align 4
    Explosions m_Explosion; // offset 0xBF0, size 0x4, align 4
    char _pad_0BF4[0x4]; // offset 0xBF4
    CUtlSymbolLarge m_iszSpawnObject; // offset 0xBF8, size 0x8, align 8
    float32 m_flPressureDelay; // offset 0xC00, size 0x4, align 4
    int32 m_iMinHealthDmg; // offset 0xC04, size 0x4, align 4
    CUtlSymbolLarge m_iszPropData; // offset 0xC08, size 0x8, align 8
    float32 m_impactEnergyScale; // offset 0xC10, size 0x4, align 4
    EOverrideBlockLOS_t m_nOverrideBlockLOS; // offset 0xC14, size 0x4, align 4
    CEntityIOOutput m_OnStartDeath; // offset 0xC18, size 0x18, align 255
    CEntityIOOutput m_OnBreak; // offset 0xC30, size 0x18, align 255
    CEntityOutputTemplate< float32 > m_OnHealthChanged; // offset 0xC48, size 0x20, align 8
    PerformanceMode_t m_PerformanceMode; // offset 0xC68, size 0x4, align 4
    CHandle< CBasePlayerPawn > m_hPhysicsAttacker; // offset 0xC6C, size 0x4, align 4
    GameTime_t m_flLastPhysicsInfluenceTime; // offset 0xC70, size 0x4, align 255
    char _pad_0C74[0x4]; // offset 0xC74
};
