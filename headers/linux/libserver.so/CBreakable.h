#pragma once

class CBreakable : public CBaseModelEntity /*0x0*/  // sizeof 0xC08, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xB38]; // offset 0x0
    CPropDataComponent m_CPropDataComponent; // offset 0xB38, size 0x40, align 8
    Materials m_Material; // offset 0xB78, size 0x4, align 4
    CHandle< CBaseEntity > m_hBreaker; // offset 0xB7C, size 0x4, align 4
    Explosions m_Explosion; // offset 0xB80, size 0x4, align 4
    char _pad_0B84[0x4]; // offset 0xB84
    CUtlSymbolLarge m_iszSpawnObject; // offset 0xB88, size 0x8, align 8
    float32 m_flPressureDelay; // offset 0xB90, size 0x4, align 4
    int32 m_iMinHealthDmg; // offset 0xB94, size 0x4, align 4
    CUtlSymbolLarge m_iszPropData; // offset 0xB98, size 0x8, align 8
    float32 m_impactEnergyScale; // offset 0xBA0, size 0x4, align 4
    EOverrideBlockLOS_t m_nOverrideBlockLOS; // offset 0xBA4, size 0x4, align 4
    CEntityIOOutput m_OnStartDeath; // offset 0xBA8, size 0x18, align 255
    CEntityIOOutput m_OnBreak; // offset 0xBC0, size 0x18, align 255
    CEntityOutputTemplate< float32 > m_OnHealthChanged; // offset 0xBD8, size 0x20, align 8
    PerformanceMode_t m_PerformanceMode; // offset 0xBF8, size 0x4, align 4
    CHandle< CBasePlayerPawn > m_hPhysicsAttacker; // offset 0xBFC, size 0x4, align 4
    GameTime_t m_flLastPhysicsInfluenceTime; // offset 0xC00, size 0x4, align 255
    char _pad_0C04[0x4]; // offset 0xC04
};
