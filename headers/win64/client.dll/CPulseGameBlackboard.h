#pragma once

class CPulseGameBlackboard : public C_BaseEntity /*0x0*/  // sizeof 0x618, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x608]; // offset 0x0
    CUtlString m_strGraphName; // offset 0x608, size 0x8, align 8
    CUtlString m_strStateBlob; // offset 0x610, size 0x8, align 8
};
