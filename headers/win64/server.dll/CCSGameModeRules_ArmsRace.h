#pragma once

class CCSGameModeRules_ArmsRace : public CCSGameModeRules /*0x0*/  // sizeof 0x88, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x30]; // offset 0x0
    CNetworkUtlVectorBase< CUtlString > m_WeaponSequence; // offset 0x30, size 0x18, align 8
    char _pad_0048[0x40]; // offset 0x48
};
