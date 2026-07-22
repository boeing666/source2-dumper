#pragma once

class CPointClientUIWorldTextPanel : public CPointClientUIWorldPanel /*0x0*/  // sizeof 0xB38, align 0x8 [vtable] (server) {MNetworkVarNames}
{
public:
    char _pad_0000[0x938]; // offset 0x0
    char[512] m_messageText; // offset 0x938, size 0x200, align 1 | MNetworkEnable
};
