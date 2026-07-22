#pragma once

class C_BaseDoor : public C_BaseToggle /*0x0*/  // sizeof 0x9B0, align 0x8 [vtable] (client) {MNetworkVarNames}
{
public:
    char _pad_0000[0x9A8]; // offset 0x0
    bool m_bIsUsable; // offset 0x9A8, size 0x1, align 1 | MNetworkEnable MNotSaved
    char _pad_09A9[0x7]; // offset 0x9A9
};
