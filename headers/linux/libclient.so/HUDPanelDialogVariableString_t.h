#pragma once

struct HUDPanelDialogVariableString_t  // sizeof 0x20, align 0xFF [vtable] (client)
{
    char _pad_0000[0x8]; // offset 0x0
    uint16 m_nPanelIdIndex; // offset 0x8, size 0x2, align 2
    uint16 m_nDialogVariableIndex; // offset 0xA, size 0x2, align 2
    char _pad_000C[0x4]; // offset 0xC
    CUtlString m_sValue; // offset 0x10, size 0x8, align 8
    bool m_bIsSet; // offset 0x18, size 0x1, align 1
    char _pad_0019[0x7]; // offset 0x19
};
