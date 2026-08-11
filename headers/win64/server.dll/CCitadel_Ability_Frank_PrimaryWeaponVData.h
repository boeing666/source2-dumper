#pragma once

class CCitadel_Ability_Frank_PrimaryWeaponVData : public CCitadel_Ability_PrimaryWeaponVData /*0x0*/  // sizeof 0x1A18, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x19C8]; // offset 0x0
    CPiecewiseCurve m_SpreadPenaltyScaleCurve; // offset 0x19C8, size 0x40, align 8 | MPropertyStartGroup
    CSoundEventName m_strShootDelaySound; // offset 0x1A08, size 0x10, align 8 | MPropertyStartGroup
};
