#pragma once

class CBuyZone : public CBaseTrigger /*0x0*/  // sizeof 0x9D0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x9C8]; // offset 0x0
    int32 m_LegacyTeamNum; // offset 0x9C8, size 0x4, align 4
    char _pad_09CC[0x4]; // offset 0x9CC
};
