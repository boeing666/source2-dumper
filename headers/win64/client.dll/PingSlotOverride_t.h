#pragma once

struct PingSlotOverride_t  // sizeof 0x40, align 0x8 (client) {MGetKV3ClassDefaults}
{
    PingConditions_t m_when; // offset 0x0, size 0x30, align 8 | MPropertyDescription
    PingSlotOption_t m_Option; // offset 0x30, size 0xC, align 4 | MPropertyDescription
    bool m_bDisabled; // offset 0x3C, size 0x1, align 1 | MPropertyDescription
    char _pad_003D[0x3]; // offset 0x3D
};
