#pragma once

class CGameModifier_FireUserEntityIOVData : public CCitadelModifierVData /*0x0*/  // sizeof 0x768, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x760]; // offset 0x0
    FireUserEntityIO_t m_FireOnAdded; // offset 0x760, size 0x4, align 1 | MPropertyStartGroup MPropertyDescription
    FireUserEntityIO_t m_FireOnRemoved; // offset 0x764, size 0x4, align 1 | MPropertyDescription
};
