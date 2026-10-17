#pragma once

class CBreakable : public CBaseModelEntity /*0x0*/  // sizeof 0xC10, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xB40]; // offset 0x0
    CPropDataComponent m_CPropDataComponent; // offset 0xB40, size 0x40, align 8
    Materials m_Material; // offset 0xB80, size 0x4, align 4
    CHandle< CBaseEntity > m_hBreaker; // offset 0xB84, size 0x4, align 4
    Explosions m_Explosion; // offset 0xB88, size 0x4, align 4
    char _pad_0B8C[0x4]; // offset 0xB8C
    CUtlSymbolLarge m_iszSpawnObject; // offset 0xB90, size 0x8, align 8
    float32 m_flPressureDelay; // offset 0xB98, size 0x4, align 4
    int32 m_iMinHealthDmg; // offset 0xB9C, size 0x4, align 4
    CUtlSymbolLarge m_iszPropData; // offset 0xBA0, size 0x8, align 8
    float32 m_impactEnergyScale; // offset 0xBA8, size 0x4, align 4
    EOverrideBlockLOS_t m_nOverrideBlockLOS; // offset 0xBAC, size 0x4, align 4
    CEntityIOOutput m_OnStartDeath; // offset 0xBB0, size 0x18, align 255
    CEntityIOOutput m_OnBreak; // offset 0xBC8, size 0x18, align 255
    CEntityOutputTemplate< float32 > m_OnHealthChanged; // offset 0xBE0, size 0x20, align 8
    PerformanceMode_t m_PerformanceMode; // offset 0xC00, size 0x4, align 4
    CHandle< CBasePlayerPawn > m_hPhysicsAttacker; // offset 0xC04, size 0x4, align 4
    GameTime_t m_flLastPhysicsInfluenceTime; // offset 0xC08, size 0x4, align 255
    char _pad_0C0C[0x4]; // offset 0xC0C
};
