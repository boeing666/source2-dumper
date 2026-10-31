#pragma once

class CAbilityVacuumVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x10A0, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1080]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_VacuumAuraModifier; // offset 0x1080, size 0x10, align 8 | MPropertyGroupName
    float32 m_flAirSpeedMax; // offset 0x1090, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flFallSpeedMax; // offset 0x1094, size 0x4, align 4
    float32 m_flAirDrag; // offset 0x1098, size 0x4, align 4
    float32 m_flMaxMovespeed; // offset 0x109C, size 0x4, align 4
};
