#pragma once

class CCSMinimapVolume : public CBaseTrigger /*0x0*/  // sizeof 0xCA8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xCA0]; // offset 0x0
    CUtlString m_strMinimapName; // offset 0xCA0, size 0x8, align 8
};
