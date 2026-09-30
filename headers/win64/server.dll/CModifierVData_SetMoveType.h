#pragma once

class CModifierVData_SetMoveType : public CCitadelModifierVData /*0x0*/  // sizeof 0x768, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x760]; // offset 0x0
    MoveType_t m_nMoveType; // offset 0x760, size 0x1, align 1 | MPropertyDescription
    char _pad_0761[0x7]; // offset 0x761
};
