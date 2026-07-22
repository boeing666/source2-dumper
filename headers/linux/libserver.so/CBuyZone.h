#pragma once

class CBuyZone : public CBaseTrigger /*0x0*/  // sizeof 0xBC0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xBBC]; // offset 0x0
    int32 m_LegacyTeamNum; // offset 0xBBC, size 0x4, align 4
};
