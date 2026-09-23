#pragma once

class CCSMinimapVolume : public C_BaseTrigger /*0x0*/  // sizeof 0x1110, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1108]; // offset 0x0
    CUtlString m_strMinimapName; // offset 0x1108, size 0x8, align 8
};
