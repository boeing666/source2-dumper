#pragma once

class CCSMinimapVolume : public C_BaseTrigger /*0x0*/  // sizeof 0x1130, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1120]; // offset 0x0
    CUtlString m_strMinimapName; // offset 0x1120, size 0x8, align 8
    char _pad_1128[0x8]; // offset 0x1128
};
