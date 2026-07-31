#pragma once

class CDOTA_Modifier_Watcher_State : public CDOTA_Buff /*0x0*/  // sizeof 0x1A80, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A7C]; // offset 0x0
    int32 m_nOwningTeamNumber; // offset 0x1A7C, size 0x4, align 4
};
