#pragma once

class CCitadelTunnelNode : public CBaseModelEntity /*0x0*/  // sizeof 0x8A8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x878]; // offset 0x0
    CUtlSymbolLarge m_strNode01; // offset 0x878, size 0x8, align 8
    CUtlSymbolLarge m_strNode02; // offset 0x880, size 0x8, align 8
    CUtlSymbolLarge m_strNode03; // offset 0x888, size 0x8, align 8
    bool m_bIsExit; // offset 0x890, size 0x1, align 1
    char _pad_0891[0x3]; // offset 0x891
    int32 m_nTunnelID; // offset 0x894, size 0x4, align 4
    CHandle< CCitadelTunnelNode > m_hConnection1; // offset 0x898, size 0x4, align 4
    CHandle< CCitadelTunnelNode > m_hConnection2; // offset 0x89C, size 0x4, align 4
    CHandle< CCitadelTunnelNode > m_hConnection3; // offset 0x8A0, size 0x4, align 4
    char _pad_08A4[0x4]; // offset 0x8A4
};
