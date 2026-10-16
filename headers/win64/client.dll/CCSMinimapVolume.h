#pragma once

class CCSMinimapVolume : public C_BaseTrigger /*0x0*/  // sizeof 0x11A8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1198]; // offset 0x0
    CUtlString m_strMinimapName; // offset 0x1198, size 0x8, align 8
    char _pad_11A0[0x8]; // offset 0x11A0
};
