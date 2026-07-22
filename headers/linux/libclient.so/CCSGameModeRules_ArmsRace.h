#pragma once

class CCSGameModeRules_ArmsRace : public CCSGameModeRules /*0x0*/  // sizeof 0x48, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x30]; // offset 0x0
    C_NetworkUtlVectorBase< CUtlString > m_WeaponSequence; // offset 0x30, size 0x18, align 8
};
