#pragma once

class CCSRadarElement : public CBaseEntity /*0x0*/  // sizeof 0x4D0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x4C0]; // offset 0x0
    uint32 m_nElementType; // offset 0x4C0, size 0x4, align 4
    uint32 m_nElementColor; // offset 0x4C4, size 0x4, align 4
    uint32 m_nTeamFilter; // offset 0x4C8, size 0x4, align 4
    char _pad_04CC[0x4]; // offset 0x4CC
};
