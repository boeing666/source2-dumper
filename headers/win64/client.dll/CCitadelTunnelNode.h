#pragma once

class CCitadelTunnelNode : public C_BaseModelEntity /*0x0*/  // sizeof 0xBE0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xBB0]; // offset 0x0
    CUtlSymbolLarge m_strNode01; // offset 0xBB0, size 0x8, align 8
    CUtlSymbolLarge m_strNode02; // offset 0xBB8, size 0x8, align 8
    CUtlSymbolLarge m_strNode03; // offset 0xBC0, size 0x8, align 8
    bool m_bIsExit; // offset 0xBC8, size 0x1, align 1
    char _pad_0BC9[0x3]; // offset 0xBC9
    int32 m_nTunnelID; // offset 0xBCC, size 0x4, align 4
    CHandle< CCitadelTunnelNode > m_hConnection1; // offset 0xBD0, size 0x4, align 4
    CHandle< CCitadelTunnelNode > m_hConnection2; // offset 0xBD4, size 0x4, align 4
    CHandle< CCitadelTunnelNode > m_hConnection3; // offset 0xBD8, size 0x4, align 4
    char _pad_0BDC[0x4]; // offset 0xBDC
};
