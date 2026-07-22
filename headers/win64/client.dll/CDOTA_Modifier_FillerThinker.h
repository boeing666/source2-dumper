#pragma once

class CDOTA_Modifier_FillerThinker : public CDOTA_Buff /*0x0*/  // sizeof 0x1A78, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    CUtlVector< CHandle< C_BaseEntity > > hCasterList; // offset 0x1A58, size 0x18, align 8
    bool bStarted; // offset 0x1A70, size 0x1, align 1
    char _pad_1A71[0x3]; // offset 0x1A71
    int32 nCount; // offset 0x1A74, size 0x4, align 4
};
