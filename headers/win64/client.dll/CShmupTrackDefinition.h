#pragma once

class CShmupTrackDefinition  // sizeof 0x28, align 0x8 (client) {MGetKV3ClassDefaults MVDataRoot}
{
public:
    CUtlString m_strName; // offset 0x0, size 0x8, align 8
    CUtlVector< CShmupEventTime > m_vecEvents; // offset 0x8, size 0x18, align 8
    char _pad_0020[0x8]; // offset 0x20
};
