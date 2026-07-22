#pragma once

class CDOTACrateDropTable  // sizeof 0x18, align 0x8 (client) {MGetKV3ClassDefaults MVDataRoot}
{
public:
    CUtlString m_sDropType; // offset 0x0, size 0x8, align 8
    CUtlString szDropName; // offset 0x8, size 0x8, align 8
    int32 nDropWeight; // offset 0x10, size 0x4, align 4
    char _pad_0014[0x4]; // offset 0x14
};
