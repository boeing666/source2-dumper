#pragma once

class CNPCMaker : public CBaseNPCMaker /*0x0*/  // sizeof 0x5B0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x588]; // offset 0x0
    CUtlSymbolLarge m_iszNPCSubClass; // offset 0x588, size 0x8, align 8
    CUtlSymbolLarge m_iszSquadName; // offset 0x590, size 0x8, align 8
    CUtlSymbolLarge m_iszHintGroup; // offset 0x598, size 0x8, align 8
    CUtlSymbolLarge m_RelationshipString; // offset 0x5A0, size 0x8, align 8
    CUtlSymbolLarge m_ChildTargetName; // offset 0x5A8, size 0x8, align 8
};
