#pragma once

class CCSPlayer_UseServices : public CPlayer_UseServices /*0x0*/  // sizeof 0x58, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x48]; // offset 0x0
    CHandle< CBaseEntity > m_hLastKnownUseEntity; // offset 0x48, size 0x4, align 4
    GameTime_t m_flLastUseTimeStamp; // offset 0x4C, size 0x4, align 255
    GameTime_t m_flTimeLastUsedWindow; // offset 0x50, size 0x4, align 255
    char _pad_0054[0x4]; // offset 0x54
};
