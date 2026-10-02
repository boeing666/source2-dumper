#pragma once

class CGameModifier_FireConCommandVData : public CCitadelModifierVData /*0x0*/  // sizeof 0x7A0, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x790]; // offset 0x0
    CUtlString m_FireOnAdded; // offset 0x790, size 0x8, align 8 | MPropertyStartGroup MPropertyDescription
    CUtlString m_FireOnRemoved; // offset 0x798, size 0x8, align 8 | MPropertyDescription
};
