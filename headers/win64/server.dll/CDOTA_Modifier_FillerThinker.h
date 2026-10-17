#pragma once

class CDOTA_Modifier_FillerThinker : public CDOTA_Buff /*0x0*/  // sizeof 0x1AC8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    CUtlVector< CHandle< CBaseEntity > > hCasterList; // offset 0x1AA8, size 0x18, align 8
    bool bStarted; // offset 0x1AC0, size 0x1, align 1
    char _pad_1AC1[0x3]; // offset 0x1AC1
    int32 nCount; // offset 0x1AC4, size 0x4, align 4
};
