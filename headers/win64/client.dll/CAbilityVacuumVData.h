#pragma once

class CAbilityVacuumVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1408, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13E8]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_VacuumAuraModifier; // offset 0x13E8, size 0x10, align 8 | MPropertyGroupName
    float32 m_flAirSpeedMax; // offset 0x13F8, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flFallSpeedMax; // offset 0x13FC, size 0x4, align 4
    float32 m_flAirDrag; // offset 0x1400, size 0x4, align 4
    float32 m_flMaxMovespeed; // offset 0x1404, size 0x4, align 4
};
