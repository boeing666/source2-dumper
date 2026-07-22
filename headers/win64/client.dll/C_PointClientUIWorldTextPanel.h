#pragma once

class C_PointClientUIWorldTextPanel : public C_PointClientUIWorldPanel /*0x0*/  // sizeof 0xE00, align 0x10 [vtable] (client) {MNetworkVarNames}
{
public:
    char _pad_0000[0xC00]; // offset 0x0
    char[512] m_messageText; // offset 0xC00, size 0x200, align 1 | MNetworkEnable
};
