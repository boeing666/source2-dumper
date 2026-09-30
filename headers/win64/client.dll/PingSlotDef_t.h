#pragma once

struct PingSlotDef_t  // sizeof 0x30, align 0x8 (client) {MGetKV3ClassDefaults}
{
    CUtlVector< PingSlotOverride_t > m_vecOverrides; // offset 0x0, size 0x18, align 8 | MPropertyDescription
    PingSlotOption_t m_Option; // offset 0x18, size 0xC, align 4 | MPropertyDescription
    bool m_bDisabled; // offset 0x24, size 0x1, align 1 | MPropertyDescription
    char _pad_0025[0x3]; // offset 0x25
    CUtlString m_strSlotIcon; // offset 0x28, size 0x8, align 8 | MPropertyDescription
};
