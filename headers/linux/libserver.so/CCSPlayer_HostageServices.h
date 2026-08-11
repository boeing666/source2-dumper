#pragma once

class CCSPlayer_HostageServices : public CPlayerPawnComponent /*0x0*/  // sizeof 0x50, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x48]; // offset 0x0
    CHandle< CBaseEntity > m_hCarriedHostage; // offset 0x48, size 0x4, align 4
    CHandle< CBaseEntity > m_hCarriedHostageProp; // offset 0x4C, size 0x4, align 4
};
