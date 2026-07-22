#pragma once

struct InGamePredictionData_t  // sizeof 0x40, align 0xFF [vtable] (client)
{
    char _pad_0000[0x30]; // offset 0x0
    uint32 m_nID; // offset 0x30, size 0x4, align 4
    uint32 m_nValue; // offset 0x34, size 0x4, align 4
    uint32 m_nRawValue; // offset 0x38, size 0x4, align 4
    uint8 m_nValueState; // offset 0x3C, size 0x1, align 1
    bool m_bValueIsMask; // offset 0x3D, size 0x1, align 1
    char _pad_003E[0x2]; // offset 0x3E
};
