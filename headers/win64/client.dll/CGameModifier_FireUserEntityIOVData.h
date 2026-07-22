#pragma once

class CGameModifier_FireUserEntityIOVData : public CCitadelModifierVData /*0x0*/  // sizeof 0x758, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x750]; // offset 0x0
    FireUserEntityIO_t m_FireOnAdded; // offset 0x750, size 0x4, align 1 | MPropertyStartGroup MPropertyDescription
    FireUserEntityIO_t m_FireOnRemoved; // offset 0x754, size 0x4, align 1 | MPropertyDescription
};
