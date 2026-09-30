#pragma once

class CGameModifier_FireConCommandVData : public CCitadelModifierVData /*0x0*/  // sizeof 0x770, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x760]; // offset 0x0
    CUtlString m_FireOnAdded; // offset 0x760, size 0x8, align 8 | MPropertyStartGroup MPropertyDescription
    CUtlString m_FireOnRemoved; // offset 0x768, size 0x8, align 8 | MPropertyDescription
};
