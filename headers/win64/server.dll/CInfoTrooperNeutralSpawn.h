#pragma once

class CInfoTrooperNeutralSpawn : public CServerOnlyPointEntity /*0x0*/  // sizeof 0x508, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x4B0]; // offset 0x0
    CEntityIOOutput m_OnNeutralKilled; // offset 0x4B0, size 0x18, align 255
    CUtlSymbolLarge m_iszSquadName; // offset 0x4C8, size 0x8, align 8
    ENeutralNPCType m_eNeutralNPCType; // offset 0x4D0, size 0x4, align 4
    char _pad_04D4[0x4]; // offset 0x4D4
    CUtlSymbolLarge m_iszNeutralSubclass; // offset 0x4D8, size 0x8, align 8
    char _pad_04E0[0x10]; // offset 0x4E0
    CEntityIOOutput m_OnNeutralTakeDamage; // offset 0x4F0, size 0x18, align 255
};
